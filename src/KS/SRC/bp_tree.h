#ifndef BP_TREE_H
#define BP_TREE_H

template<class Partition, class Portion>
class bp_tree {
public:
    class iterator {
        char empty_base[4];
        void *node;

    public:
        explicit iterator(void *value) : node(value) {}
        iterator(const iterator &other) : node(other.node) {}
    };

    class branch {
        iterator parent;
        int child;

    public:
        explicit branch(const iterator &value)
          : parent(value),
            child(2)
        {
        }
        branch(const branch &other)
          : parent(other.parent),
            child(other.child)
        {
        }
    };

private:
    char data_before_root[0x10];
    void *root;

public:
    iterator begin() { return iterator(root); }
};

#endif
