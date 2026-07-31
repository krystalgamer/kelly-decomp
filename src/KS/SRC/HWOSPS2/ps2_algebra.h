#ifndef PS2_ALGEBRA_H
#define PS2_ALGEBRA_H

typedef float rational_t;

class vector3d {
public:
    typedef float T;

    float x;
    float y;
    float z;

    inline vector3d() {}
    inline vector3d(const vector3d &other)
      : x(other.x), y(other.y), z(other.z)
    {
    }
    inline vector3d(float x_value, float y_value, float z_value)
      : x(x_value), y(y_value), z(z_value)
    {
    }
    explicit inline vector3d(float value)
      : x(value), y(value), z(value)
    {
    }
    inline vector3d &operator=(const vector3d &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
    inline vector3d &operator+=(const vector3d &other) {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }
    inline float length2() const {
        return x * x + y * y + z * z;
    }
};

inline vector3d operator+(const vector3d &left, const vector3d &right)
{
    return vector3d(
        left.x + right.x,
        left.y + right.y,
        left.z + right.z);
}

inline vector3d operator-(const vector3d &left, const vector3d &right)
{
    return vector3d(
        left.x - right.x,
        left.y - right.y,
        left.z - right.z);
}

inline vector3d operator*(float scalar, const vector3d &value)
{
    return vector3d(
        scalar * value.x,
        scalar * value.y,
        scalar * value.z);
}

inline vector3d operator*(const vector3d &value, float scalar)
{
    return scalar * value;
}

inline vector3d operator/(const vector3d &value, float divisor)
{
    float reciprocal = 1.0f / divisor;
    return vector3d(
        value.x * reciprocal,
        value.y * reciprocal,
        value.z * reciprocal);
}

class vector4d {
public:
    float x;
    float y;
    float z;
    float w;

    inline vector4d() {}
    inline vector4d(float x, float y, float z, float w)
        : x(x), y(y), z(z), w(w)
    {
    }
    inline vector4d &operator=(const vector4d &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
};

class matrix4x4 {
public:
    typedef float T;
    typedef vector4d row;

    row x __attribute__((aligned(16)));
    row y;
    row z;
    row w;

    inline matrix4x4() {}
    inline matrix4x4 &operator=(const matrix4x4 &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        w = other.w;
        return *this;
    }
    void make_translate(const vector3d &translation);
    void make_scale(const vector3d &scale);
    void scale(rational_t scale);
    matrix4x4 Cof();
    matrix4x4 transpose();
    matrix4x4 adjugate();
};

class quaternion {
public:
    float a;
    float b;
    float c;
    float d;

    inline quaternion() : a(1.0f), b(0.0f), c(0.0f), d(0.0f) {}
    inline quaternion(float a, float b, float c, float d)
        : a(a), b(b), c(c), d(d)
    {
    }
    void to_matrix(matrix4x4 *matrix) const;
};

__asm__(".equ Cof__9matrix4x4, 0x001DF788");
__asm__(".equ transpose__9matrix4x4, 0x001DF548");

#endif
