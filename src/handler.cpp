#include <string>
#include <stdexcept>
#include <handler.h>
#include <tree.h>
#include <factory.h>

namespace xlang {
    FactoryHandler* FactoryHandler::get() {
        if (head == nullptr) {
            head = new PrintFactoryHandler();
            head->next = new ExprFactoryHandler();
            head->next->next = new BlockFactoryHandler();
            head->next->next->next = new ConditionFactoryHandler();
            head->next->next->next->next = new ControlFactoryHandler();
        }
        return head;
    }

    void FactoryHandler::init_factory(ASTree *tree) {
        auto p = FactoryHandler::get();
        for (; p != nullptr; p = p->next) {
            if (!p->is_valid(tree)) continue;
            p->do_factory(tree);
            break;
        }
        if (p == nullptr) {
            char str[100];
            sprintf(str, "%d", tree->type());
            throw std::runtime_error(std::string("there is no handler with ") + str);
        }
        for (int i = 0; i < tree->size(); i++) {
            FactoryHandler::init_factory(tree->at(i));
        }
        return ;
    }
    
    bool PrintFactoryHandler::is_valid(ASTree *tree) {
        switch (tree->type()) {
            case PRINT: return true;
            default : return false;
        }
        return false;
    }
    
    bool ExprFactoryHandler::is_valid(ASTree *tree) {
        switch (tree->type()) {
            case INT:
            case FLOAT:
            case STRING:
            case LIST:
            case LIST_CALL:
            case LIST_DEF:
            case ID:
            case NOPE:
            case PLUS:
            case MINUS:
            case TIMES:
            case DIV:
            case MOD:
            case BIT_AND:
            case BIT_OR:
            case BIT_XOR:
            case L_SHIFT:
            case R_SHIFT:
            case L_DOUBLE_PLUS:
            case R_DOUBLE_PLUS:
            case L_DOUBLE_MINUS:
            case R_DOUBLE_MINUS:
            case ASSIGN:
            case DEF:
            case FUNC_CALL:
                return true;
            default:
                return false;
        }
        return false;
    }
    
    bool BlockFactoryHandler::is_valid(ASTree *tree) {
        switch (tree->type()) {
            case BLOCK: return true;
            default : return false;
        }
        return false;
    }
    
    bool ConditionFactoryHandler::is_valid(ASTree *tree) {
        switch (tree->type()) {
            case OR:
            case AND:
            case GE:
            case GT:
            case LE:
            case LITTLE:
            case EQ:
            case NE: return true;
            default : return false;
        }
        return false;
    }
    
    bool ControlFactoryHandler::is_valid(ASTree *tree) {
        switch (tree->type()) {
            case IF:
            case FOR:
            case BREAK:
            case CONTINUE:
            case WHILE:
            case DOWHILE:
            case SWITCH:
            case CASE:
            case DEFAULT:
            case FUNC:
            case RETURN:
            case PARAM: return true;
            default: return false;
        }
        return false;
    }

    void PrintFactoryHandler::do_factory(ASTree *tree) {  
        tree->factory = factory;
        return ;
    }
    
    void ExprFactoryHandler::do_factory(ASTree *tree) {
        tree->factory = factory;
        return ;
    }
    
    void BlockFactoryHandler::do_factory(ASTree *tree) {
        tree->factory = factory;
        return ;
    }
    
    void ConditionFactoryHandler::do_factory(ASTree *tree) {
        tree->factory = factory;
        return ;
    }
    
    void ControlFactoryHandler::do_factory(ASTree *tree) {
        tree->factory = factory;
        return ;
    }

    BlockFactory *BlockFactoryHandler::factory = new BlockFactory();
    ExprFactory *ExprFactoryHandler::factory = new ExprFactory();
    PrintFactory *PrintFactoryHandler::factory = new PrintFactory();
    ConditionFactory *ConditionFactoryHandler::factory = new ConditionFactory();
    ControlFactory *ControlFactoryHandler::factory = new ControlFactory();
    FactoryHandler *FactoryHandler::head = nullptr;
}
