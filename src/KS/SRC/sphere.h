#ifndef SPHERE_H
#define SPHERE_H

#include "KS/SRC/algebra.h"

class sphere {
    vector3d center;
    float radius;

public:
    inline const vector3d &get_center() const { return center; }
    inline float get_radius() const { return radius; }
};

#endif
