#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <visitor.h>

namespace xlang {
    void ConvertStringVisitor::visit(IntValue *obj) {
        char str[100];
        sprintf(str, "%d", obj->val());
        this->result = str;
        return ;
    }
    
    void ConvertStringVisitor::visit(FloatValue *obj) {
        char str[100];
        sprintf(str, "%lf", obj->val());
        this->result = str;
        return ;
    }
    
    void ConvertStringVisitor::visit(StringValue *obj) {
        this->result = obj->val();
        return ;
    }
    
    void ConvertStringVisitor::visit(FuncValue *obj) {
        this->result = obj->val();
        return ;
    }
    
    void ConvertStringVisitor::visit(ListValue *obj) {
        std::string ret = "[";
        for (int i = 0; i < obj->val().size(); i++) {
            if (i) ret += ", ";
            ConvertStringVisitor vis;
            obj->val()[i]->accept(&vis);
            ret += vis.result;
        }
        ret += "]";
        this->result = ret;
        return ;
    }
    
    // value operator
    ValueOperator::ValueOperator(IValue *lvalue, op_type op) : lvalue(lvalue), op(op) {}
    
    void ValueOperator::visit(IntValue *obj) {
        (lvalue->*op)(*obj);
    }
    
    void ValueOperator::visit(FloatValue *obj) {
        (lvalue->*op)(*obj);
    }
    
    void ValueOperator::visit(StringValue *obj) {
        (lvalue->*op)(*obj);
    }
    
    void ValueOperator::visit(FuncValue *obj) {
        (lvalue->*op)(*obj);
    }
    
    void ValueOperator::visit(ListValue *obj) {
        (lvalue->*op)(*obj);
    }

    // type value operator
    IntValueOperator::IntValueOperator(IntValue *left, ValueOperator::op_type op) : ValueOperator(left, op), left(left) {}
    
    FloatValueOperator::FloatValueOperator(FloatValue *left, ValueOperator::op_type op) : ValueOperator(left, op), left(left) {}
    
    StringValueOperator::StringValueOperator(StringValue *left, ValueOperator::op_type op) : ValueOperator(left, op), left(left) {}
    
    ListValueOperator::ListValueOperator(ListValue *left, ValueOperator::op_type op) : ValueOperator(left, op), left(left) {}
    
    // IntValue operator
    // IntValue operator+
    IntValuePlusOpVisitor::IntValuePlusOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_plus_error) {}
    
    void IntValuePlusOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() + obj->val());
        return ;
    }
    
    void IntValuePlusOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() + obj->val());
        return ;
    }
    
    // IntValue operator-
    IntValueMinusOpVisitor::IntValueMinusOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_minus_error) {}
    
    void IntValueMinusOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() - obj->val());
        return ;
    }
    
    void IntValueMinusOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() - obj->val());
        return ;
    }

    // IntValue operator*
    IntValueTimesOpVisitor::IntValueTimesOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_times_error) {}
    
    void IntValueTimesOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() * obj->val());
        return ;
    }
    
    void IntValueTimesOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() * obj->val());
        return ;
    }
    
    void IntValueTimesOpVisitor::visit(StringValue *obj) {
        std::string ret = ""; 
        for (int i = 0, I = left->val(); i < I; i++) {
            ret += obj->val();
        }
        this->result = std::make_shared<StringValue>(ret);
        return ;
    }
    
    void IntValueTimesOpVisitor::visit(ListValue *obj) {
        std::vector<SIValue> ret;
        for (int i = 0, I = left->val(); i < I; i++) {
            ret.insert(ret.end(), obj->val().begin(), obj->val().end());
        }
        this->result = std::make_shared<ListValue>(ret);
        return ;
    }
    
    // IntValue operator/
    IntValueDivOpVisitor::IntValueDivOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_div_error) {}
    
    void IntValueDivOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() / obj->val());
        return ;
    }
    
    void IntValueDivOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() / obj->val());
        return ;
    }
    
    // IntValue operator%
    IntValueModOpVisitor::IntValueModOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_mod_error) {}
    
    void IntValueModOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() % obj->val());
        return ;
    }
    
    // IntValue operator&
    IntValueAndOpVisitor::IntValueAndOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_and_error) {}
    
    void IntValueAndOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() & obj->val());
        return ;
    }
    
    // IntValue operator|
    IntValueOrOpVisitor::IntValueOrOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_or_error) {}
    
    void IntValueOrOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() | obj->val());
        return ;
    }
    
    // IntValue operator^
    IntValueXorOpVisitor::IntValueXorOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_xor_error) {}
    
    void IntValueXorOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() ^ obj->val());
        return ;
    }
    
    // IntValue operator<<
    IntValueLShiftOpVisitor::IntValueLShiftOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_lshift_error) {}
    
    void IntValueLShiftOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() << obj->val());
        return ;
    }
    
    // IntValue operator>>
    IntValueRShiftOpVisitor::IntValueRShiftOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_rshift_error) {}
    
    void IntValueRShiftOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<IntValue>(left->val() >> obj->val());
        return ;
    }
    
    // IntValue operator<
    IntValueLittleOpVisitor::IntValueLittleOpVisitor(IntValue *left) : IntValueOperator(left, &IValue::operator_compare_error){}
    
    void IntValueLittleOpVisitor::visit(IntValue *obj) {
        this->result = xlang::false_val;
        if ((left->val() < obj->val())) {
            this->result = xlang::true_val;
        }
        return ;
    }
    
    void IntValueLittleOpVisitor::visit(FloatValue *obj) {
        this->result = xlang::false_val;
        if ((left->val() < obj->val())) {
            this->result = xlang::true_val;
        }
        return ;
    }

    // FloatValue operator
    // FloatValue operator+
    FloatValuePlusOpVisitor::FloatValuePlusOpVisitor(FloatValue *left) : FloatValueOperator(left, &IValue::operator_plus_error) {}
    
    void FloatValuePlusOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() + obj->val());
        return ;
    }
    
    void FloatValuePlusOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() + obj->val());
        return ;
    }

    // FloatValue operator-
    FloatValueMinusOpVisitor::FloatValueMinusOpVisitor(FloatValue *left) : FloatValueOperator(left, &IValue::operator_minus_error) {}
    void FloatValueMinusOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() - obj->val());
        return ;
    }
    
    void FloatValueMinusOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() - obj->val());
        return ;
    }

    // FloatValue operator*
    FloatValueTimesOpVisitor::FloatValueTimesOpVisitor(FloatValue *left) : FloatValueOperator(left, &IValue::operator_times_error) {}
    
    void FloatValueTimesOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() * obj->val());
        return ;
    }
    
    void FloatValueTimesOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() * obj->val());
        return ;
    }

    // FloatValue operator/
    FloatValueDivOpVisitor::FloatValueDivOpVisitor(FloatValue *left) : FloatValueOperator(left, &IValue::operator_div_error) {}
    
    void FloatValueDivOpVisitor::visit(IntValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() / obj->val());
        return ;
    }
    
    void FloatValueDivOpVisitor::visit(FloatValue *obj) {
        this->result = std::make_shared<FloatValue>(left->val() / obj->val());
        return ;
    }
    
    // FloatValue operator<
    FloatValueLittleOpVisitor::FloatValueLittleOpVisitor(FloatValue *left) : FloatValueOperator(left, &IValue::operator_compare_error){}
    
    void FloatValueLittleOpVisitor::visit(IntValue *obj) {
        this->result = xlang::false_val;
        if ((left->val() < obj->val())) {
            this->result = xlang::true_val;
        }
        return ;
    }
    
    void FloatValueLittleOpVisitor::visit(FloatValue *obj) {
        this->result = xlang::false_val;
        if ((left->val() < obj->val())) {
            this->result = xlang::true_val;
        }
        return ;
    }
    
    // StringValue operator
    // StringValue operator+
    StringValuePlusOpVisitor::StringValuePlusOpVisitor(StringValue *left) : StringValueOperator(left, &IValue::operator_plus_error) {}
    
    void StringValuePlusOpVisitor::visit(StringValue *obj) {
        this->result = std::make_shared<StringValue>(left->val() + obj->val());
        return ;
    }

    // StringValue operator*
    StringValueTimesOpVisitor::StringValueTimesOpVisitor(StringValue *left) : StringValueOperator(left, &IValue::operator_times_error) {}
    
    void StringValueTimesOpVisitor::visit(IntValue *obj) {
        std::string ret = ""; 
        for (int i = 0, I = obj->val(); i < I; i++) {
            ret += left->val();
        }
        this->result = std::make_shared<StringValue>(ret);
        return ;
    }

    // StringValue operator<
    StringValueLittleOpVisitor::StringValueLittleOpVisitor(StringValue *left) : StringValueOperator(left, &IValue::operator_compare_error) {}
    
    void StringValueLittleOpVisitor::visit(StringValue *obj) {
        this->result = xlang::false_val;
        if ((left->val() < obj->val())) {
            this->result = xlang::true_val;
        }
        return ;
    }
    
    // ListValue operator
    // ListValue operator+
    ListValuePlusOpVisitor::ListValuePlusOpVisitor(ListValue *left) : ListValueOperator(left, &IValue::operator_plus_error) {}
    
    void ListValuePlusOpVisitor::visit(ListValue *obj) {
        std::vector<SIValue> ret = left->val();
        ret.insert(ret.end(), obj->val().begin(), obj->val().end());
        this->result = std::make_shared<ListValue>(ret);
        return ;
    }

    // ListValue operator*
    ListValueTimesOpVisitor::ListValueTimesOpVisitor(ListValue *left) : ListValueOperator(left, &IValue::operator_times_error) {}
    
    void ListValueTimesOpVisitor::visit(IntValue *obj) {
        std::vector<SIValue> ret;
        for (int i = 0, I = obj->val(); i < I; i++) {
            ret.insert(ret.end(), left->val().begin(), left->val().end());
        }
        this->result = std::make_shared<ListValue>(ret);
        return ;
    }
}
