#include <stdexcept>
#include <dfa.h>
#include <runtime.h>
#include <parameter.h>
#include <type.h>
#include <tree.h>

namespace xlang {
    DFA::DFA() : head(nullptr), tail(nullptr) {}
    
    DFA::DFA(ASTree *tree) {
        DFA *ret = DFA::build(tree);
        head = ret->head, tail = ret->tail;
    }
    
    std::stack<IDFANode *> DFA::breakPoint;
    std::stack<IDFANode *> DFA::continuePoint;
    std::stack<IDFANode *> DFA::returnPoint;
    int DFA::blockPosition = 0;

    void DFA::run(SParameter &p) {
        IDFANode *now = this->head;
        while (now) {
            now = now->next(p);
        }
        return ;
    }

    DFA *DFA::build(ASTree *tree) {
        DFA *ret = new DFA();
        switch (tree->type()) {
            case IF: {
                ret->head = new ConditionDFANode(tree->at(0));
                ret->tail = new NopeDFANode();
                DFA *temp = DFA::build(tree->at(1));
                ret->head->at(0) = temp->head;
                temp->tail->at(0) = ret->tail;
                if (tree->size() == 3) {
                    temp = DFA::build(tree->at(2));
                    ret->head->at(1) = temp->head;
                    temp->tail->at(0) = ret->tail;
                } else {
                    ret->head->at(1) = ret->tail;
                }
            } break;
            /*case SWITCH: {
                ret->head = new ConditionDFANode(tree->at(0));
                ret->tail = new NopeDFANode();
                for (int i = tree->size() - 1; i >= 1; i--) {
                    DFA *temp = DFA::build(tree->at(i));
                }
            } break;*/
            case FOR: {
                blockPosition++;
                ret->head = new BlockBeginDFANode(blockPosition);
                ret->tail = new BlockEndDFANode(blockPosition);
                IDFANode *break_node = new NopeDFANode(blockPosition);
                IDFANode *continue_node = new NopeDFANode(blockPosition);
                breakPoint.push(break_node);
                continuePoint.push(continue_node);
                IDFANode *init_node = new ExprDFANode(tree->at(0));
                IDFANode *cond_node = new ConditionDFANode(tree->at(1));
                IDFANode *do_node = new ExprDFANode(tree->at(2));
                DFA *stmt = DFA::build(tree->at(3));
                ret->head->at(0) = init_node;
                init_node->at(0) = cond_node;
                cond_node->at(0) = stmt->head;
                cond_node->at(1) = ret->tail;
                stmt->tail->at(0) = do_node;
                do_node->at(0) = cond_node;
                break_node->at(0) = ret->tail;
                continue_node->at(0) = do_node;
                breakPoint.pop();
                continuePoint.pop();
            } break;
            case BREAK: {
                if (breakPoint.empty()) {
                    throw std::runtime_error("break statement is wrong! There are no loops.");
                }
                ret->head = ret->tail = new JumpDFANode(breakPoint.top());
            } break;
            case CONTINUE: {
                if (continuePoint.empty()) {
                    throw std::runtime_error("continue statement is wrong! There are no loops.");
                }
                ret->head = ret->tail = new JumpDFANode(continuePoint.top());
            } break;
            case WHILE: {
                blockPosition++;
                ret->head = new BlockBeginDFANode(blockPosition);
                ret->tail = new BlockEndDFANode(blockPosition);
                IDFANode *break_node = new NopeDFANode(blockPosition);
                IDFANode *continue_node = new NopeDFANode(blockPosition);
                breakPoint.push(break_node);
                continuePoint.push(continue_node);
                IDFANode *cond_node = new ConditionDFANode(tree->at(0));
                DFA *stmt = DFA::build(tree->at(1));
                ret->head->at(0) = cond_node;
                cond_node->at(0) = stmt->head;
                cond_node->at(1) = ret->tail;
                stmt->tail->at(0) = cond_node;
                break_node->at(0) = ret->tail;
                continue_node->at(0) = cond_node;
                breakPoint.pop();
                continuePoint.pop();
            } break;
            case DOWHILE: {
                blockPosition++;
                ret->head = new BlockBeginDFANode(blockPosition);
                ret->tail = new BlockEndDFANode(blockPosition);
                IDFANode *break_node = new NopeDFANode(blockPosition);
                IDFANode *continue_node = new NopeDFANode(blockPosition);
                breakPoint.push(break_node);
                continuePoint.push(continue_node);
                IDFANode *cond_node = new ConditionDFANode(tree->at(0));
                DFA *stmt = DFA::build(tree->at(1));
                ret->head->at(0) = stmt->head;
                stmt->tail->at(0) = cond_node;
                cond_node->at(0) = stmt->head;
                break_node->at(1) = ret->tail;
                continue_node->at(0) = cond_node;
                breakPoint.pop();
                continuePoint.pop();
            } break;
            case BLOCK: {
                blockPosition++;
                ret->head = new BlockBeginDFANode(blockPosition);
                ret->tail = new BlockEndDFANode(blockPosition);
                IDFANode *p = ret->head;
                DFA *temp;
                for (int i = 0; i < tree->size(); i++) {
                    temp = DFA::build(tree->at(i));
                    p->at(0) = temp->head;
                    p = temp->tail;
                }
                p->at(0) = ret->tail;
            } break;
            case FUNC: {
                NopeDFANode *return_node = new NopeDFANode();
                returnPoint.push(return_node);
                DFA *dfa = DFA::build(tree->at(2));
                returnPoint.pop();
                return_node->set_pos(dynamic_cast<BlockBeginDFANode *>(dfa->head)->pos());
                return_node->at(0) = dfa->tail;
                ret->head = new DefFuncDFANode(tree, dfa);
                blockPosition++;
                ret->tail = new BlockBeginDFANode(blockPosition);
                ret->head->at(0) = ret->tail;
            } break;
            case RETURN: {
                if (returnPoint.empty()) {
                    std::string msg = "return statement is wrong! there is no function.";
                    throw std::runtime_error(msg);
                }
                ret->head = ret->tail = new ReturnDFANode(returnPoint.top(), tree->size() ? tree->at(0) : nullptr);
            } break;
            default: {
                ret->head = ret->tail = new ExprDFANode(tree);
            } break;
        }
        return ret;
    }

    // DFANode constructor
    IDFANode::IDFANode(ASTree *tree, int n) : tree(tree), child(n) {}
    
    DFANode_1::DFANode_1(ASTree *tree) : IDFANode(tree, 1) {}
    
    DFANode_2::DFANode_2(ASTree *tree) : IDFANode(tree, 2) {}
    
    ExprDFANode::ExprDFANode(ASTree *tree) : DFANode_1(tree) {}
    
    BlockBeginDFANode::BlockBeginDFANode(int pos) : DFANode_1(nullptr), __pos(pos) {}
    
    BlockEndDFANode::BlockEndDFANode(int pos) : DFANode_1(nullptr), __pos(pos) {}
    
    ConditionDFANode::ConditionDFANode(ASTree *tree) : DFANode_2(tree) {}
    
    NopeDFANode::NopeDFANode(int pos) : DFANode_1(nullptr), pos(pos) {}
    
    JumpDFANode::JumpDFANode(IDFANode *direct_node) : DFANode_1(nullptr), direct_node(direct_node) {}
    
    DefFuncDFANode::DefFuncDFANode(ASTree *tree, DFA *dfa) : DFANode_1(nullptr), func(std::make_shared<FuncValue>(tree, dfa)) {}
    
    ReturnDFANode::ReturnDFANode(IDFANode *direct_node, ASTree *tree) : JumpDFANode(direct_node), tree(tree) {}

    IDFANode *&IDFANode::at(int ind) {
        return this->child[ind];
    }

    IDFANode *ExprDFANode::next(SParameter &p) {
        Runtime::GetValue(this->tree, p);
        return this->at(0);
    }

    int BlockBeginDFANode::pos() { return this->__pos; }
    IDFANode *BlockBeginDFANode::next(SParameter &p) {
        p = std::make_shared<Parameter>(p, this->pos());
        return this->at(0);
    }
    
    int BlockEndDFANode::pos() { return this->__pos; }
    IDFANode *BlockEndDFANode::next(SParameter &p) {
        while (p->pos() != this->pos()) p = p->next();
        p = p->next();
        return this->at(0);
    }
    
    IDFANode *ConditionDFANode::next(SParameter &p) {
        SIValue val = Runtime::GetValue(this->tree, p);
        if (val->isTrue()) return this->at(0);
        return this->at(1);
    }
    
    void NopeDFANode::set_pos(int pos) {
        this->pos = pos;
        return ;
    }
    
    IDFANode *NopeDFANode::next(SParameter &p) {
        if (this->pos > 0) {
            while (p->pos() != this->pos) p = p->next();
        }
        return this->at(0);
    }
    
    IDFANode *JumpDFANode::next(SParameter &p) {
        return this->direct_node;
    }

    IDFANode *DefFuncDFANode::next(SParameter &p) {
        SFunctionValue copy_func = std::make_shared<FuncValue>(*(this->func));
        p->define_param(copy_func->name());
        copy_func->set_param(p);
        p->set(copy_func->name(), copy_func);
        return this->at(0);
    }

    IDFANode *ReturnDFANode::next(SParameter &p) {
        SIValue ret = xlang::null_val;
        if (this->tree) ret = Runtime::GetValue(this->tree, p);
        p->set(xlang::return_val, ret);
        return JumpDFANode::next(p);
    }
}
