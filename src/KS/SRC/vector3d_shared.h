#ifndef KELLY_DECOMP_VECTOR3D_SHARED_H
#define KELLY_DECOMP_VECTOR3D_SHARED_H

class vector3d {
public:
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
    inline vector3d &operator=(const vector3d &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
    inline float length2() const {
        return x * x + y * y + z * z;
    }
};

inline vector3d operator-(const vector3d &left, const vector3d &right)
{
    return vector3d(
        left.x - right.x,
        left.y - right.y,
        left.z - right.z);
}

inline vector3d operator/(const vector3d &value, float divisor)
{
    float reciprocal = 1.0f / divisor;
    return vector3d(
        value.x * reciprocal,
        value.y * reciprocal,
        value.z * reciprocal);
}

#endif
