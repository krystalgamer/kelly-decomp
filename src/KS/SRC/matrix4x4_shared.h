#ifndef KELLY_DECOMP_MATRIX4X4_SHARED_H
#define KELLY_DECOMP_MATRIX4X4_SHARED_H

class matrix_vector4 {
public:
    float x;
    float y;
    float z;
    float w;

    inline matrix_vector4 &operator=(
        const matrix_vector4 &other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
};

class matrix4x4 {
    matrix_vector4 x __attribute__((aligned(16)));
    matrix_vector4 y;
    matrix_vector4 z;
    matrix_vector4 w;

public:
    inline matrix4x4 &operator=(const matrix4x4 &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
    matrix4x4 Cof();
    matrix4x4 transpose();
    matrix4x4 adjugate();
};

__asm__(".equ Cof__9matrix4x4, 0x001DF788");
__asm__(".equ transpose__9matrix4x4, 0x001DF548");

#endif
