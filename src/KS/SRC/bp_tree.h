#ifndef BP_TREE_H
#define BP_TREE_H

template<class Partition, class Portion>
class bp_tree {
public:
    class branch {
        int omitted;
        branch *left;
        branch *right;

    public:
        branch(const branch &other)
          : left(other.left),
            right(other.right)
        {
        }
    };
};

#endif
