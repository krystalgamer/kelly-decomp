#ifndef __SGI_STL_INTERNAL_UNINITIALIZED_H
#define __SGI_STL_INTERNAL_UNINITIALIZED_H

#include "KS/SRC/archalloc.h"

struct __false_type {
};

template<class Iterator>
struct __stl_value_type;

template<class T>
struct __stl_value_type<T *> {
    typedef T value_type;
};

template<class InputIterator, class ForwardIterator>
ForwardIterator __uninitialized_copy_aux(
    InputIterator first,
    InputIterator last,
    ForwardIterator result,
    __false_type)
{
    typedef typename __stl_value_type<ForwardIterator>::value_type value_type;
    for (; first != last; ++first, ++result) {
        if (result)
            new((void *)result) value_type(*first);
    }
    return result;
}

template<class ForwardIterator, class Size, class T>
ForwardIterator __uninitialized_fill_n_aux(
    ForwardIterator first,
    Size count,
    const T &value,
    __false_type)
{
    typedef typename __stl_value_type<ForwardIterator>::value_type value_type;
    ForwardIterator result = first;
    for (; count > 0; --count, ++result) {
        if (result)
            new((void *)result) value_type(value);
    }
    return result;
}

#endif
