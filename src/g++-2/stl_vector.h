#ifndef __SGI_STL_INTERNAL_VECTOR_H
#define __SGI_STL_INTERNAL_VECTOR_H

#include "KS/SRC/custom_stl.h"

extern "C" void *memmove(
    void *destination,
    const void *source,
    unsigned int size
);

template<class T>
inline T *__copy_trivial(const T *first, const T *last, T *result)
{
    memmove(result, first, sizeof(T) * (last - first));
    return result + (last - first);
}

template<class T>
inline T *copy(const T *first, const T *last, T *result)
{
    return __copy_trivial(first, last, result);
}

template<class Iterator>
inline void destroy(Iterator first, Iterator last)
{
}

template<class T, class Allocator>
class _Vector_base {
protected:
    T *_M_start;
    T *_M_finish;
    T *_M_end_of_storage;

    inline _Vector_base()
      : _M_start(0), _M_finish(0), _M_end_of_storage(0)
    {
    }
};

template<class T, class Allocator = my_allocator<T> >
class vector : protected _Vector_base<T, Allocator> {

public:
    typedef T *iterator;
    typedef const T *const_iterator;

    inline vector() : _Vector_base<T, Allocator>() {}

    iterator begin()
    {
        return _M_start;
    }

    const_iterator begin() const
    {
        return _M_start;
    }

    iterator end()
    {
        return _M_finish;
    }

    const_iterator end() const
    {
        return _M_finish;
    }

    T &operator[](unsigned int index)
    {
        return _M_start[index];
    }

    const T &operator[](unsigned int index) const
    {
        return _M_start[index];
    }

    unsigned int size() const
    {
        return _M_finish - _M_start;
    }

    bool empty() const
    {
        return _M_start == _M_finish;
    }

    T &back()
    {
        return *(_M_finish - 1);
    }

    const T &back() const
    {
        return *(_M_finish - 1);
    }

    void pop_back()
    {
        --_M_finish;
    }

    iterator erase(iterator first, iterator last)
    {
        memmove(first, last, (_M_finish - last) * sizeof(T));
        _M_finish -= last - first;
        return first;
    }

    void insert(iterator position, unsigned int count, const T &value);

    void resize(unsigned int new_size)
    {
        T value = T();
        unsigned int old_size = size();
        if (new_size < old_size)
            erase(begin() + new_size, end());
        else
            insert(end(), new_size - old_size, value);
    }
};

template<class T>
struct greater {
    bool operator()(const T &left, const T &right) const
    {
        return left > right;
    }
};

#endif
