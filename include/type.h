#ifndef _TYPE_H
#define _TYPE_H

#include <string>
#include <vector>
#include <shared_type.h>

namespace xlang {
    class IValue {
    public:
        class IVisitor {
        public :
            virtual void visit(IntValue *) = 0;
            virtual void visit(FloatValue *) = 0;
            virtual void visit(StringValue *) = 0;
            virtual void visit(ListValue *) = 0;
            virtual void visit(FuncValue *) = 0;
        };
        IValue(std::string);
        std::string type();
        virtual void accept(IVisitor *) = 0;
        virtual bool isTrue() = 0;
        virtual bool isFalse();
        virtual SIValue run(SParameter &, ASTree *);
        virtual SIValue at(SIValue &);
        virtual void assign(SIValue &, SIValue &);
        virtual SIValue operator+(IValue &);
        virtual SIValue operator-(IValue &);
        virtual SIValue operator*(IValue &);
        virtual SIValue operator/(IValue &);
        virtual SIValue operator%(IValue &);
        virtual SIValue operator&(IValue &);
        virtual SIValue operator|(IValue &);
        virtual SIValue operator^(IValue &);
        virtual SIValue operator<<(IValue &);
        virtual SIValue operator>>(IValue &);
        virtual bool operator<(IValue &);
        virtual bool operator>(IValue &);
        virtual bool operator<=(IValue &);
        virtual bool operator>=(IValue &);
        virtual bool operator==(IValue &);
        virtual bool operator!=(IValue &);
        void operator_plus_error(IValue &);
        void operator_minus_error(IValue &);
        void operator_times_error(IValue &);
        void operator_div_error(IValue &);
        void operator_mod_error(IValue &);
        void operator_and_error(IValue &);
        void operator_or_error(IValue &);
        void operator_xor_error(IValue &);
        void operator_lshift_error(IValue &);
        void operator_rshift_error(IValue &);
        void operator_compare_error(IValue &);
    protected:
        std::string __type;
    };

    class IntValue : public IValue {
    public:
        IntValue(int = 0);
        virtual void accept(IVisitor *);
        virtual bool isTrue();
        virtual SIValue operator+(IValue &);
        virtual SIValue operator-(IValue &);
        virtual SIValue operator*(IValue &);
        virtual SIValue operator/(IValue &);
        virtual SIValue operator%(IValue &);
        virtual SIValue operator&(IValue &);
        virtual SIValue operator|(IValue &);
        virtual SIValue operator^(IValue &);
        virtual SIValue operator<<(IValue &);
        virtual SIValue operator>>(IValue &);
        virtual bool operator<(IValue &);
        int val();
    private:
        int __val;
    };

    class FloatValue : public IValue {
    public:
        FloatValue(double = 0.0);
        virtual void accept(IVisitor *);
        virtual bool isTrue();
        virtual SIValue operator+(IValue &);
        virtual SIValue operator-(IValue &);
        virtual SIValue operator*(IValue &);
        virtual SIValue operator/(IValue &);
        virtual bool operator<(IValue &);
        double val();
    private:
        double __val;
    };

    class StringValue : public IValue {
    public:
        StringValue(std::string = "");
        virtual void accept(IVisitor *);
        virtual bool isTrue();
        virtual SIValue operator+(IValue &);
        virtual SIValue operator*(IValue &);
        virtual bool operator<(IValue &);
        std::string val();
    private: 
        std::string __val;
    };

    class ListValue : public IValue {
    public:
        ListValue(std::vector<SIValue>);
        virtual void accept(IVisitor *);
        virtual bool isTrue();
        virtual SIValue operator+(IValue &);
        virtual SIValue operator*(IValue &);
        virtual SIValue at(SIValue &);
        virtual void assign(SIValue &, SIValue &);
        std::vector<SIValue> &val();
    private:
        std::vector<SIValue> __val;
    };
    
    class FuncValue : public IValue {
    public:
        FuncValue(ASTree *, DFA *);
        virtual void accept(IVisitor *);
        virtual bool isTrue();
        virtual SIValue run(SParameter &, ASTree *);
        void set_param(SParameter);
        std::string name();
        std::string val();
    private:
        void convert(ASTree *);
        std::string func_name;
        std::vector<std::string> param;
        SParameter init_param;
        DFA *__val;
    };

    static SIntValue null_val = std::make_shared<IntValue>(0);
    static SIntValue true_val = std::make_shared<IntValue>(1);
    static SIntValue false_val = std::make_shared<IntValue>(0);
    static std::string return_val = "return error";
}

#endif
