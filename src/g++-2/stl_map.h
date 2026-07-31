#ifndef __SGI_STL_INTERNAL_MAP_H
#define __SGI_STL_INTERNAL_MAP_H

extern void *__default_alloc_free_list[16];
extern "C" void *__default_alloc_refill(
    unsigned int size
) __asm__("_S_refill__t27__my_default_alloc_template2b0i0Ui");

__asm__(".equ __default_alloc_free_list, 0x003E5628");
__asm__(".equ _S_refill__t27__my_default_alloc_template2b0i0Ui, 0x0010DAE0");

template<class T>
struct less {
    char state;

    inline less() : state(0) {}
};

struct _Rb_tree_node_base {
    int color;
    _Rb_tree_node_base *parent;
    _Rb_tree_node_base *left;
    _Rb_tree_node_base *right;
};

template<class Key, class T>
struct _Map_value {
    Key first;
    T second;
};

template<class Value>
struct _Rb_tree_node : public _Rb_tree_node_base {
    Value value_field;
};

template<class Value>
class _Rb_tree_base {
    typedef _Rb_tree_node<Value> node_type;

protected:
    node_type *header;

    inline node_type *get_node()
    {
        const unsigned int node_size = (sizeof(node_type) + 7) & ~7;
        const unsigned int index = node_size / 8 - 1;
        void *result = __default_alloc_free_list[index];
        if (result == 0)
            result = __default_alloc_refill(node_size);
        else
            __default_alloc_free_list[index] = *(void **)result;
        return (node_type *)result;
    }

public:
    inline _Rb_tree_base() : header(0)
    {
        header = get_node();
    }
};

template<class Key, class T, class Compare>
class _Rb_tree : public _Rb_tree_base<_Map_value<Key, T> > {
    unsigned int node_count;
    Compare key_compare;

public:
    inline _Rb_tree(const Compare &compare)
      : _Rb_tree_base<_Map_value<Key, T> >(),
        node_count(0),
        key_compare(compare)
    {
        header->color = 0;
        header->parent = 0;
        header->left = header;
        header->right = header;
    }
};

template<class Key, class T, class Compare = less<Key> >
class map {
    _Rb_tree<Key, T, Compare> tree;

public:
    inline map() : tree(Compare()) {}
};

#endif
