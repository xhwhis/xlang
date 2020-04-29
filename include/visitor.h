#ifndef _VISITOR_H
#define _VISITOR_H

#include <type.h>

namespace xlang {
    class ConvertStringVisitor : public IValue::IVisitor {
    public:
        void visit(IntValue *);
        void visit(FloatValue *);
        void visit(StringValue *);
        void visit(ListValue *);
        void visit(FuncValue *);
        std::string result;
    };

    class ValueOperator : public IValue::IVisitor {
    public:
        typedef void (IValue::*op_type)(IValue &);
        ValueOperator(IValue *, op_type);
        void visit(IntValue *);
        void visit(FloatValue *);
        void visit(StringValue *);
        void visit(ListValue *);
        void visit(FuncValue *);
        op_type op;
        IValue *lvalue;
        SIValue result;
    };

    class IntValueOperator : public ValueOperator {
    public:
        IntValueOperator(IntValue *, op_type);
        IntValue *left;
    };

    class FloatValueOperator : public ValueOperator {
    public:
        FloatValueOperator(FloatValue *, op_type);
        FloatValue *left;
    };

    class StringValueOperator : public ValueOperator {
    public:
        StringValueOperator(StringValue *, op_type);
        StringValue *left;
    };

    class ListValueOperator : public ValueOperator {
    public:
        ListValueOperator(ListValue *, op_type);
        ListValue *left;
    };

    class IntValuePlusOpVisitor : public IntValueOperator {
    public:
        IntValuePlusOpVisitor(IntValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class IntValueMinusOpVisitor : public IntValueOperator {
    public:
        IntValueMinusOpVisitor(IntValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class IntValueTimesOpVisitor : public IntValueOperator {
    public:
        IntValueTimesOpVisitor(IntValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
        void visit(StringValue *);
        void visit(ListValue *);
    };

    class IntValueDivOpVisitor : public IntValueOperator {
    public:
        IntValueDivOpVisitor(IntValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class IntValueModOpVisitor : public IntValueOperator {
    public:
        IntValueModOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueAndOpVisitor : public IntValueOperator {
    public:
        IntValueAndOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueOrOpVisitor : public IntValueOperator {
    public:
        IntValueOrOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueXorOpVisitor : public IntValueOperator {
    public:
        IntValueXorOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueNorOpVisitor : public IntValueOperator {
    public:
        IntValueNorOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueLShiftOpVisitor : public IntValueOperator {
    public:
        IntValueLShiftOpVisitor(IntValue *);
        void visit(IntValue *);
    };
    
    class IntValueRShiftOpVisitor : public IntValueOperator {
    public:
        IntValueRShiftOpVisitor(IntValue *);
        void visit(IntValue *);
    };

    class IntValueLittleOpVisitor : public IntValueOperator {
    public:
        IntValueLittleOpVisitor(IntValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class FloatValuePlusOpVisitor : public FloatValueOperator {
    public:
        FloatValuePlusOpVisitor(FloatValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class FloatValueMinusOpVisitor : public FloatValueOperator {
    public:
        FloatValueMinusOpVisitor(FloatValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class FloatValueTimesOpVisitor : public FloatValueOperator {
    public:
        FloatValueTimesOpVisitor(FloatValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class FloatValueDivOpVisitor : public FloatValueOperator {
    public:
        FloatValueDivOpVisitor(FloatValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class FloatValueLittleOpVisitor : public FloatValueOperator {
    public:
        FloatValueLittleOpVisitor(FloatValue *);
        void visit(IntValue *);
        void visit(FloatValue *);
    };

    class StringValuePlusOpVisitor : public StringValueOperator {
    public:
        StringValuePlusOpVisitor(StringValue *);
        void visit(StringValue *);
    };

    class StringValueTimesOpVisitor : public StringValueOperator {
    public:
        StringValueTimesOpVisitor(StringValue *);
        void visit(IntValue *);
    };

    class StringValueLittleOpVisitor : public StringValueOperator {
    public:
        StringValueLittleOpVisitor(StringValue *);
        void visit(StringValue *);
    };

    class ListValuePlusOpVisitor : public ListValueOperator {
    public:
        ListValuePlusOpVisitor(ListValue *);
        void visit(ListValue *);
    };

    class ListValueTimesOpVisitor : public ListValueOperator {
    public:
        ListValueTimesOpVisitor(ListValue *);
        void visit(IntValue *);
    };
}

#endif
