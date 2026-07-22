#ifndef KELLY_DECOMP_STL_LIST_SHARED_H
#define KELLY_DECOMP_STL_LIST_SHARED_H

template<class T>
struct _List_node {
    void *_M_next;
    void *_M_prev;
    T _M_data;
};

struct __my_default_alloc_template {
    void *_S_free_list[16];
};

extern __my_default_alloc_template allocator_pool;
__asm__(".equ allocator_pool, 0x003E5628");

template<class T>
struct my_allocator {
};

struct _List_iterator_base {
    void *_M_node;

    _List_iterator_base() {}
    explicit _List_iterator_base(void *node) : _M_node(node) {}

    void _M_incr()
    {
        _M_node = *static_cast<void **>(_M_node);
    }

    bool operator==(const _List_iterator_base &other) const
    {
        return _M_node == other._M_node;
    }

    bool operator!=(const _List_iterator_base &other) const
    {
        return _M_node != other._M_node;
    }
};

template<class T>
class _List_iterator : public _List_iterator_base {
public:
    typedef _List_node<T> node_type;

    _List_iterator() {}
    explicit _List_iterator(node_type *node) : _List_iterator_base(node) {}

    T &operator*() const
    {
        return static_cast<node_type *>(_M_node)->_M_data;
    }

    _List_iterator &operator++()
    {
        _M_incr();
        return *this;
    }
};

template<class T, class Allocator = my_allocator<T> >
class list {
public:
    typedef _List_iterator<T> iterator;
    typedef _List_node<T> node_type;

    node_type *_M_node;

    iterator begin()
    {
        return iterator(static_cast<node_type *>(_M_node->_M_next));
    }

    iterator end()
    {
        return iterator(_M_node);
    }
};

#endif
