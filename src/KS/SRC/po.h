#ifndef PO_H
#define PO_H

#include "KS/SRC/algebra.h"

class vector4d {
public:
    float x;
    float y;
    float z;
    float w;

    inline vector4d() {}
    inline vector4d(const vector4d &other)
      : x(other.x), y(other.y), z(other.z), w(other.w)
    {
    }
    inline vector4d &operator=(const vector4d &other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
};

class matrix4x4 {
public:
    vector4d x __attribute__((aligned(16)));
    vector4d y;
    vector4d z;
    vector4d w;
};

class po {
    matrix4x4 m;

public:
    inline const vector3d &get_position() const {
        return *(const vector3d *)&m.w;
    }

    vector3d fast_8byte_xform(const vector3d &value) const
        __asm__("slow_xform__C2poRC8vector3d");
    void set_translate(const vector3d &translation);
    void set_scale(const vector3d &scale);
    void set_rotate_x(float radians);
    void set_rotate_y(float radians);
    void set_rotate_z(float radians);
    void add_increment(po *increment);
};

extern const matrix4x4 identity_matrix;
void fast_sin_cos_approx(
    float radians,
    float *sine,
    float *cosine);
__asm__(".equ identity_matrix, 0x0058AA30");
__asm__(
    ".equ fast_sin_cos_approx__FfPfT1, "
    "0x001E2EC8");

#endif
