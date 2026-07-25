#ifndef KELLY_DECOMP_STL_VECTOR_SHARED_H
#define KELLY_DECOMP_STL_VECTOR_SHARED_H

template<class T>
class vector {
    T *_M_start;
    T *_M_finish;
    T *_M_end_of_storage;
};

template<class T>
struct greater {
    bool operator()(const T &left, const T &right) const
    {
        return left > right;
    }
};

#endif
