#ifndef _SHARED_TYPE_H
#define _SHARED_TYPE_H

#include <memory>

namespace xlang {
    class ASTree;
    class Parameter;
    class IValue;
    class IntValue;
    class FloatValue;
    class StringValue;
    class ListValue;
    class FuncValue;
    class DFA;
    class IDFANode;
    using SIValue = std::shared_ptr<IValue>;
    using SIntValue = std::shared_ptr<IntValue>;
    using SFloatValue = std::shared_ptr<FloatValue>;
    using SStringValue = std::shared_ptr<StringValue>;
    using SFunctionValue = std::shared_ptr<FuncValue>;
    using SListValue = std::shared_ptr<ListValue>;
    using SParameter = std::shared_ptr<Parameter>;
}

#endif