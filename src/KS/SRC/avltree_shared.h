#ifndef KELLY_DECOMP_AVLTREE_SHARED_H
#define KELLY_DECOMP_AVLTREE_SHARED_H

template<class T>
class TreeNode {
    TreeNode *l;
    TreeNode *r;
    TreeNode *p;
    T *d;
    char h;

public:
    inline TreeNode *parent() {
        return p;
    }

    inline TreeNode *left() {
        return l;
    }

    inline TreeNode *right() {
        return r;
    }

    inline T *data() {
        return d;
    }
};

#endif
