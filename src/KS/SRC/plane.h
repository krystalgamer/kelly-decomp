#ifndef PLANE_H
#define PLANE_H

#include "KS/SRC/algebra.h"

class plane {
public:
    float odistance;
    vector3d unit_normal;
};

struct __false_type {
};

#ifndef PLACEMENT_NEW_DEFINED
#define PLACEMENT_NEW_DEFINED
inline void *operator new(unsigned int, void *location) {
    return location;
}
#endif

template <class T>
inline void construct(T *location, const T &value) {
    if (location)
        new (location) T(value);
}

#endif
