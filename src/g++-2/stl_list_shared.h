#ifndef KELLY_DECOMP_STL_LIST_SHARED_H
#define KELLY_DECOMP_STL_LIST_SHARED_H

#include "KS/SRC/archalloc.h"
#include "g++-2/my_allocator_shared.h"

template<class T>
struct _List_node {
    void *_M_next;
    void *_M_prev;
    T _M_data;
};

union __default_alloc_object {
    __default_alloc_object *_M_free_list_link;
    char _M_client_data[1];
};

struct __my_default_alloc_template {
    __default_alloc_object *_S_free_list[16];
};

extern __my_default_alloc_template allocator_pool;
extern void *allocator_refill(unsigned int bytes)
    __asm__(
        "_S_refill__t27__my_default_alloc_template2b0i0Ui");
__asm__(".equ allocator_pool, 0x003E5628");
__asm__(
    ".equ _S_refill__t27__my_default_alloc_template2b0i0Ui, "
    "0x0010DAE0");

template<class T1, class T2>
inline void construct(T1 *pointer, const T2 &value)
{
    new((void *)pointer) T1(value);
}

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

template<class T, class Ref = T &, class Ptr = T *>
class _List_iterator : public _List_iterator_base {
public:
    typedef _List_iterator<T, T &, T *> iterator;
    typedef _List_node<T> node_type;

    _List_iterator() {}
    _List_iterator(node_type *node) : _List_iterator_base(node) {}
    _List_iterator(const iterator &other)
      : _List_iterator_base(other._M_node)
    {
    }

    Ref operator*() const
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
    typedef _List_iterator<T, T &, T *> iterator;
    typedef _List_iterator<T, const T &, const T *> const_iterator;
    typedef _List_node<T> node_type;
    typedef unsigned int size_type;

    node_type *_M_node;

private:
    node_type *_M_create_node(
        const T &value,
        __my_default_alloc_template *pool)
    {
        __default_alloc_object **free_list =
            &pool->_S_free_list[3];
        __default_alloc_object *raw = *free_list;
        void *allocated;
        if (!raw)
            allocated = allocator_refill(sizeof(node_type));
        else
        {
            *free_list = raw->_M_free_list_link;
            allocated = raw;
        }

        node_type *node = (node_type *)allocated;
        T *data = &node->_M_data;
        if (data)
            construct(data, value);
        return node;
    }

    iterator _M_insert(
        iterator position,
        const T &value,
        __my_default_alloc_template *pool)
    {
        node_type *node = _M_create_node(value, pool);
        node->_M_next = position._M_node;
        node->_M_prev =
            static_cast<node_type *>(position._M_node)->_M_prev;
        static_cast<node_type *>(
            static_cast<node_type *>(
                position._M_node)->_M_prev)->_M_next = node;
        static_cast<node_type *>(position._M_node)->_M_prev = node;
        return node;
    }

public:
    bool empty() const
    {
        return _M_node->_M_next == _M_node;
    }

    iterator begin()
    {
        return iterator(static_cast<node_type *>(_M_node->_M_next));
    }

    iterator end()
    {
        return iterator(_M_node);
    }

    T &front()
    {
        return *begin();
    }

    void push_front(const T &value)
    {
        __my_default_alloc_template *pool = &allocator_pool;
        _M_insert(begin(), value, pool);
    }

    void insert(
        iterator position,
        size_type count,
        const T &value)
    {
        if (count == 0)
            return;

        __my_default_alloc_template *pool = &allocator_pool;
        do
        {
            _M_insert(position, value, pool);
            --count;
        }
        while (count != 0);
    }
};

#endif
