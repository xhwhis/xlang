#include <iostream>
#include <master.h>
#include <tree.h>
#include <runtime.h>
#include <visitor.h>
#include <parameter.h>
#include <utility.h>

namespace xlang {
    IMaster::IMaster(ASTree *tree, SParameter p) : tree(tree), p(p) {}
    
    IMaster::~IMaster() {}
    
    PrintMaster::PrintMaster(ASTree *tree, SParameter p) : IMaster(tree, p) {}
    
    ExprMaster::ExprMaster(ASTree *tree, SParameter p) : IMaster(tree, p) {}
    
    BlockMaster::BlockMaster(ASTree *tree, SParameter p) : IMaster(tree, p) {}
    
    ConditionMaster::ConditionMaster(ASTree *tree, SParameter p) : IMaster(tree, p) {}
    
    ControlMaster::ControlMaster(ASTree *tree, SParameter p) : IMaster(tree, p) {}

    void IMaster::IFactory::destory(IMaster *m) {
        delete m;
    }
    
    SIValue PrintMaster::run() {
        if (tree->type() != PRINT) {
            throw std::runtime_error("tree type is not print!");
        }
        for (int i = 0, I = tree->size(); i < I; i++) {
            auto child_tree = tree->at(i);
            SIValue ret = Runtime::GetValue(child_tree, p);
            ConvertStringVisitor vis;
            ret->accept(&vis);
            if (i) std::cout << " ";
            std::cout << vis.result;
        }
        std::cout << std::endl;
        return xlang::null_val;
    }
    
    SIValue ExprMaster::run() {
        switch (tree->type()) {
            case INT: {
                const char *s = this->tree->text().c_str();
                int val_int;
                sscanf(s, "%d", &val_int);
                return std::make_shared<IntValue>(val_int);
            }
            case FLOAT: {
                const char *s = this->tree->text().c_str();
                double val_float;
                sscanf(s, "%lf", &val_float);
                return std::make_shared<FloatValue>(val_float);
            }
            case STRING: {
                std::string temp = toString(this->tree->text());
                return std::make_shared<StringValue>(temp.substr(1, temp.size() - 2));
            }
            case LIST: {
                std::vector<SIValue> temp;
                for (int i = 0; i < this->tree->size(); i++) {
                    SIValue ret = Runtime::GetValue(tree->at(i), p);
                    temp.push_back(ret);
                }
                return std::make_shared<ListValue>(temp);
            }
            case LIST_CALL: {
                auto list = p->get(tree->at(0)->text());
                SIValue val;
                for (int i = 1; i < tree->size(); i++) {
                    SIValue ind = Runtime::GetValue(tree->at(i), p);
                    if (i == 1) val = list->at(ind);
                    else val = val->at(ind);
                }
                return val;
            }
            case LIST_DEF: {
                auto list = p->get(tree->at(0)->text());
                SIValue ind = Runtime::GetValue(tree->at(1), p);
                SIValue val = Runtime::GetValue(tree->at(2), p);
                list->assign(ind, val);
                return xlang::null_val;
            }
            case ID: {
                return this->p->get(this->tree->text());
            }
            case NOPE: {
                return xlang::true_val;
            }
            case PLUS: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) + (*b);
            }
            case MINUS: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) - (*b);
            }
            case TIMES: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) * (*b);
            }
            case DIV: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) / (*b);
            }
            case MOD: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) % (*b);
            }
            case BIT_AND: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) & (*b);
            }
            case BIT_OR: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) | (*b);
            }
            case BIT_XOR: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) ^ (*b);
            }
            case BIT_NOR: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                return ~(*a);
            }
            case L_SHIFT: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) << (*b);
            }
            case R_SHIFT: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                return (*a) >> (*b);
            }
            case L_DOUBLE_PLUS: {
                std::string var = tree->at(0)->text();
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIntValue b = std::make_shared<IntValue>(1);
                p->set(var, (*a) + (*b));
                return p->get(var);
            }
            case R_DOUBLE_PLUS: {
                std::string var = tree->at(0)->text();
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIntValue b = std::make_shared<IntValue>(1);
                p->set(var, (*a) + (*b));
                return a;
            }
            case L_DOUBLE_MINUS: {
                std::string var = tree->at(0)->text();
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIntValue b = std::make_shared<IntValue>(1);
                p->set(var, (*a) - (*b));
                return p->get(var);
            }
            case R_DOUBLE_MINUS: {
                std::string var = tree->at(0)->text();
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIntValue b = std::make_shared<IntValue>(1);
                p->set(var, (*a) - (*b));
                return a;
            }
            case ASSIGN: {
                std::string var = tree->at(0)->text();
                SIValue val = Runtime::GetValue(tree->at(1), p);
                p->set(var, val);
                return val;
            }
            case DEF: {
                for (int i = 0; i < tree->size(); i++) {
                    std::string var = tree->at(i)->text();
                    p->define_param(var);
                    SIValue val = xlang::null_val;
                    if (tree->at(i)->size()) {
                        val = Runtime::GetValue(tree->at(i)->at(0), p);
                    }
                    p->set(var, val);
                }
                return xlang::null_val;
            }
            case FUNC_CALL: {
                auto func = p->get(tree->at(0)->text());
                return func->run(p, tree->at(1));
            }
            default : {
                throw std::runtime_error("tree type is not expr!");
            }
        }
        return xlang::null_val;
    }
    
    SIValue BlockMaster::run() {
        if (tree->type() != BLOCK) {
            throw std::runtime_error("tree type is not block!");
        }
        p = std::make_shared<Parameter>(p);
        for (int i = 0, I = tree->size(); i < I; i++) {
            auto child_tree = tree->at(i);
            Runtime::GetValue(child_tree, p);
        }
        p = p->next();
        return xlang::null_val;
    }
 
    SIValue ConditionMaster::run() {
        switch (tree->type()) {
            case OR: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                if (a->isTrue()) return xlang::true_val;
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if (b->isTrue()) return xlang::true_val;
                return xlang::false_val;
            }
            case AND: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                if (a->isFalse()) return xlang::false_val;
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if (b->isTrue()) return xlang::true_val;
                return xlang::false_val;
            } 
            case GE: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) >= (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            case GT: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) > (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            case LE: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) <= (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            case LITTLE: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) < (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            case EQ: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) == (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            case NE: {
                SIValue a = Runtime::GetValue(tree->at(0), p);
                SIValue b = Runtime::GetValue(tree->at(1), p);
                if ((*a) != (*b)) return xlang::true_val;
                return xlang::false_val;
            }
            default: {
                throw std::runtime_error("tree type is not condition!");
            }
        }
        return xlang::false_val;
    }
    
    SIValue ControlMaster::run() {
        switch (tree->type()) {
            case IF: {
                SIValue cond_val = Runtime::GetValue(tree->at(0), p);
                if (cond_val->isTrue()) {
                    Runtime::GetValue(tree->at(1), p);
                } else if (tree->size() == 3) {
                    Runtime::GetValue(tree->at(2), p);
                }
                return xlang::null_val;
            }
            case FOR: {
                p = std::make_shared<Parameter>(p);
                Runtime::GetValue(tree->at(0), p);
                while (Runtime::GetValue(tree->at(1), p)->isTrue()) {
                    Runtime::GetValue(tree->at(3), p);
                    Runtime::GetValue(tree->at(2), p);
                }
                p = p->next();
                return xlang::null_val;
            }
            case WHILE: {
                while (Runtime::GetValue(tree->at(0), p)->isTrue()) {
                    Runtime::GetValue(tree->at(1), p);
                }
                return xlang::null_val;   
            }
            case DOWHILE: {
                do {
                    Runtime::GetValue(tree->at(1), p);
                } while (Runtime::GetValue(tree->at(0), p)->isTrue());
                return xlang::null_val;
            }
            default: {
                throw std::runtime_error("tree type is not constrol code!");
            }
        }
        return xlang::null_val;
    }
}
