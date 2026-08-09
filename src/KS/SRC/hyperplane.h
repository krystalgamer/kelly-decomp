#ifndef HYPERPLANE_H
#define HYPERPLANE_H

#include "KS/SRC/algebra.h"

template <class SpatialType>
class hyperplane {
protected:
    float d;
    SpatialType normal;

public:
    hyperplane() {}
    hyperplane(const hyperplane &other)
      : normal(other.normal)
    {
        d = other.d;
    }
};

#endif
