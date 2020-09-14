#include <stdexcept>
#include <cassert>
#include <tree.h>

namespace xlang {
    ASTree::ASTree(pANTLR3_BASE_TREE tree) : tree(tree) {
        pANTLR3_COMMON_TOKEN token = tree->getToken(tree);
        __type = token->type;
        __size = tree->getChildCount(tree);
        for (int i = 0; i < __size; i++) {
            this->child.push_back(new ASTree((pANTLR3_BASE_TREE)(tree->getChild(tree, i))));
        }
    }
    
    int ASTree::type() const {
        return this->__type;
    }

    int ASTree::size() const {
        return this->__size;
    }

    ASTree *ASTree::at(int ind) {
        if (this->__size <= ind) {
            throw std::runtime_error("ASTree Error, there is no enough nodes!");
        }
        return this->child[ind];
    }
    
    std::string ASTree::text() const {
        return (const char*)tree->getText(tree)->chars;
    }
}
