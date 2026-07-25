#ifndef KELLY_DECOMP_STL_VECTOR_SHARED_H
#define KELLY_DECOMP_STL_VECTOR_SHARED_H

extern "C" void *memmove(
    void *destination,
    const void *source,
    unsigned int size
);

template<class T>
struct my_allocator {
};

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
};

template<class T, class Allocator = my_allocator<T> >
class vector : protected _Vector_base<T, Allocator> {

public:
    typedef T *iterator;
    typedef const T *const_iterator;

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

    unsigned int size() const
    {
        return _M_finish - _M_start;
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
