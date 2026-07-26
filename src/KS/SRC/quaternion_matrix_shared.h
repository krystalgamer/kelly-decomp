#ifndef KELLY_DECOMP_QUATERNION_MATRIX_SHARED_H
#define KELLY_DECOMP_QUATERNION_MATRIX_SHARED_H

typedef float rational_t;

struct algebra_vector4d
{
    float x;
    float y;
    float z;
    float w;
};

class matrix4x4
{
public:
    algebra_vector4d x;
    algebra_vector4d y;
    algebra_vector4d z;
    algebra_vector4d w;
};

class quaternion
{
public:
    rational_t a;
    rational_t b;
    rational_t c;
    rational_t d;

    void to_matrix(matrix4x4 *matrix) const;
};

#endif
