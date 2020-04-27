#ifndef _FACTORY_H
#define _FACTORY_H

#include <master.h>

namespace xlang {
    class PrintFactory : public IMaster::IFactory {
        virtual IMaster *create(ASTree *, SParameter);
    };

    class ExprFactory : public IMaster::IFactory {
        virtual IMaster *create(ASTree *, SParameter);
    };

    class BlockFactory : public IMaster::IFactory {
        virtual IMaster *create(ASTree *, SParameter);
    };

    class ConditionFactory : public IMaster::IFactory {
        virtual IMaster *create(ASTree *, SParameter);
    };

    class ControlFactory : public IMaster::IFactory {
        virtual IMaster *create(ASTree *, SParameter);
    };
}

#endif