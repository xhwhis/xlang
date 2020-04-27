#ifndef _RUNTIME_H
#define _RUNTIME_H

#include <shared_type.h>

namespace xlang {
    class Runtime {
    public:
        Runtime(ASTree *);
        void run();
        static SIValue GetValue(ASTree *, SParameter);
    private:
        ASTree *tree;
    };
}

#endif