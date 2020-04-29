#ifndef _HANDLER_H
#define _HANDLER_H

namespace xlang {
    class ASTree;
    class PrintFactory;
    class ExprFactory;
    class BlockFactory;
    class ConditionFactory;
    class ControlFactory;

    class FactoryHandler {
    public:
        static void init_factory(ASTree *);
        static FactoryHandler *get();
        virtual bool is_valid(ASTree *) = 0;
        virtual void do_factory(ASTree *) = 0;    
    protected:
        static FactoryHandler *head;
        FactoryHandler *next;
    };

    class PrintFactoryHandler : public FactoryHandler {
    public:
        virtual bool is_valid(ASTree *);
        virtual void do_factory(ASTree *);
    private:
        static PrintFactory *factory;
    };

    class ExprFactoryHandler : public FactoryHandler {
    public:
        virtual bool is_valid(ASTree *);
        virtual void do_factory(ASTree *);
    private:
        static ExprFactory *factory;
    };

    class BlockFactoryHandler : public FactoryHandler {
    public:
        virtual bool is_valid(ASTree *);
        virtual void do_factory(ASTree *);
    private:
        static BlockFactory *factory;
    };

    class ConditionFactoryHandler : public FactoryHandler {
    public:
        virtual bool is_valid(ASTree *);
        virtual void do_factory(ASTree *);
    private:
        static ConditionFactory *factory;
    };

    class ControlFactoryHandler : public FactoryHandler {
    public:
        virtual bool is_valid(ASTree *);
        virtual void do_factory(ASTree *);
    private:
        static ControlFactory *factory;
    };
}

#endif
