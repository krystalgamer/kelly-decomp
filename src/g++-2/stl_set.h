#ifndef __SGI_STL_INTERNAL_SET_H
#define __SGI_STL_INTERNAL_SET_H

#include "g++-2/stl_map.h"

template<class T>
struct set_less {
    char state;
    inline set_less() : state(0) {}
};

template<class Value>
class _Set_ctor_base {
    typedef _Rb_tree_node<Value> node_type;

protected:
    node_type *header;

    inline node_type *get_node()
    {
        const unsigned int node_size = (sizeof(node_type) + 7) & ~7;
        const unsigned int index = node_size / 8 - 1;
        register void **pool __asm__("$5") =
            __default_alloc_free_list;
        register void *free_node __asm__("$3") = pool[index];
        register void *result __asm__("$4");
        if (free_node == 0)
            result = __default_alloc_refill(node_size);
        else {
            result = free_node;
            pool[index] = *(void **)free_node;
        }
        return (node_type *)result;
    }

public:
    inline _Set_ctor_base() : header(0)
    {
        header = get_node();
    }
};

template<class Value, class Compare = set_less<Value> >
class set : public _Set_ctor_base<Value> {
    unsigned int node_count;
    Compare compare;

public:
    inline set(const Compare &value = Compare())
      : _Set_ctor_base<Value>(), node_count(0), compare(value)
    {
        header->color = 0;
        header->parent = 0;
        header->left = header;
        header->right = header;
    }
};

#endif
