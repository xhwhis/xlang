#ifndef _PARAMETER_H
#define _PARAMETER_H

#include <map>
#include <string>
#include <shared_type.h>

namespace xlang {
    class Parameter {
    public:
        Parameter(SParameter, int = 0);
        void define_param(std::string);
        SIValue get(std::string) const;
        void set(std::string, SIValue);
        SParameter next() const;
        int pos();
    private:
        mutable std::map<std::string, SIValue> memory;
        SParameter __next;
        int __pos;
    };
}

#endif