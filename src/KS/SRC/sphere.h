#ifndef SPHERE_H
#define SPHERE_H

#include "KS/SRC/algebra.h"

class sphere {
    vector3d center;
    float radius;

public:
    inline sphere() : center(0.0f, 0.0f, 0.0f), radius(0.0f) {}
    inline sphere(const vector3d &origin, float value)
      : center(origin), radius(value)
    {
    }
    inline const vector3d &get_center() const { return center; }
    inline float get_radius() const { return radius; }
    inline void set_center(const vector3d &origin) { center = origin; }
    inline void set_radius(float value) { radius = value; }
};

#endif
