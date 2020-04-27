#include <runtime.h>
#include <parameter.h>
#include <handler.h>
#include <master.h>
#include <tree.h>
#include <shared_type.h>
#include <dfa.h>

namespace xlang {
    Runtime::Runtime(ASTree *tree) : tree(tree) {}
    
    void Runtime::run() {
        SParameter p = std::make_shared<Parameter>(nullptr);
        FactoryHandler::init_factory(tree);
        DFA program(tree);
        program.run(p);
        return ;
    }
    
    SIValue Runtime::GetValue(ASTree *tree, SParameter p) {
        IMaster *m = tree->factory->create(tree, p);
        SIValue val = m->run();
        tree->factory->destory(m);
        return val;
    }
}