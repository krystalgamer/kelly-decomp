#ifndef KELLY_DECOMP_SPHERE_SHARED_H
#define KELLY_DECOMP_SPHERE_SHARED_H

#include "KS/SRC/vector3d_shared.h"

class sphere {
    vector3d center;
    float radius;

public:
    inline const vector3d &get_center() const { return center; }
    inline float get_radius() const { return radius; }
};

#endif
