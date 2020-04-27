#ifndef _TREE_H
#define _TREE_H

#include <string>
#include <vector>
#include <xLexer.h>
#include <xParser.h>
#include <master.h>

namespace xlang {
    class ASTree {
    public:
        ASTree(pANTLR3_BASE_TREE);
        int size() const;
        ASTree *at(int);
        std::string text() const;
        int type() const;
        IMaster::IFactory *factory;
    private:
        pANTLR3_BASE_TREE tree;
        int __type, __size;
        std::vector<ASTree *> child;
    };
}

#endif