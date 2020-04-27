#ifndef _DFA_H
#define _DFA_H

#include <vector>
#include <stack>
#include <map>
#include <shared_type.h>

namespace xlang {
    class IDFANode {
    public:
        IDFANode(ASTree *, int);
        virtual IDFANode *next(SParameter &) = 0;
        IDFANode *&at(int);
    protected:
        ASTree *tree;
        std::vector<IDFANode *> child;
    };
    
    class DFA {
    public:
        DFA(ASTree *);
        void run(SParameter &);
    private:
        DFA();
        static DFA *build(ASTree *);
        IDFANode *head, *tail;
        static std::stack<IDFANode *> breakPoint;
        static std::stack<IDFANode *> continuePoint;
        static std::stack<IDFANode *> returnPoint;
        static int blockPosition;
    };

    class DFANode_1 : public IDFANode {
    public:
        DFANode_1(ASTree *);
        virtual IDFANode *next(SParameter &) = 0;
    };

    class DFANode_2 : public IDFANode {
    public:
        DFANode_2(ASTree *);
        virtual IDFANode *next(SParameter &) = 0;
    };

    class ExprDFANode : public DFANode_1 {
    public:
        ExprDFANode(ASTree *);
        virtual IDFANode *next(SParameter &);
    };

    class BlockBeginDFANode : public DFANode_1 {
    public:
        BlockBeginDFANode(int);
        virtual IDFANode *next(SParameter &);
        int pos();
    private:
        int __pos;
    };

    class BlockEndDFANode : public DFANode_1 {
    public:
        BlockEndDFANode(int);
        virtual IDFANode *next(SParameter &);
        int pos();
    private:
        int __pos;
    };

    class ConditionDFANode : public DFANode_2 {
    public:
        ConditionDFANode(ASTree *);
        virtual IDFANode *next(SParameter &);
    };

    class NopeDFANode : public DFANode_1 {
    public:
        NopeDFANode(int = 0);
        virtual IDFANode *next(SParameter &);
        void set_pos(int);
    private:
        int pos;
    };

    class JumpDFANode : public DFANode_1 {
    public:
        JumpDFANode(IDFANode *);
        virtual IDFANode *next(SParameter &);
    private:
        IDFANode *direct_node;
    };

    class DefFuncDFANode : public DFANode_1 {
    public:
        DefFuncDFANode(ASTree *, DFA *);
        virtual IDFANode *next(SParameter &);
    private:
        SFunctionValue func;
    };

    class ReturnDFANode : public JumpDFANode {
    public:  
        ReturnDFANode(IDFANode *, ASTree *);
        virtual IDFANode *next(SParameter &);
    private:
        ASTree *tree;
    };

    /*class SwitchDFANode : public IDFANode {
    public:
        SwitchDFANode(IDFANode *, );
        virtual IDFANode *next(SParameter &);
    private:
        std::map<SIValue, DFA *> opt;
    };*/
}

#endif