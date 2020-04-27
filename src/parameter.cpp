#include <iostream>
#include <stdexcept>
#include <cassert>
#include <parameter.h>
#include <debug.h>
#include <type.h>

namespace xlang {
    Parameter::Parameter(SParameter next, int pos) : __next(next), __pos(pos) {}
    
    int Parameter::pos() { return this->__pos; }

    void Parameter::define_param(std::string name) {
        if (memory.find(name) != memory.end()) {
            throw std::runtime_error("redefined param: " + name);
        }
        this->memory[name] = xlang::null_val;
        return ;
    }
    
    SIValue Parameter::get(std::string name) const {
        if (memory.find(name) == memory.end()) {
            if (this->next() == nullptr) {
                throw std::runtime_error("undefined param: " + name);
            }
            return this->next()->get(name);
        }
        return this->memory[name];
    }
    
    void Parameter::set(std::string name, SIValue val) {
        if (memory.find(name) == memory.end()) {
            if (this->next() == nullptr) {
                throw std::runtime_error("undefined param: " + name);
            }
            this->next()->set(name, val);
            return ;
        }
        this->memory[name] = val;
        return ;
    }
    
    SParameter Parameter::next() const { return this->__next; }
}
