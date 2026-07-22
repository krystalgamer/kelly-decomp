#ifndef KELLY_DECOMP_PLANE_SHARED_H
#define KELLY_DECOMP_PLANE_SHARED_H

class vector3d {
public:
    float x;
    float y;
    float z;

    inline vector3d(const vector3d &other)
        : x(other.x), y(other.y), z(other.z) {}
};

class plane {
public:
    float odistance;
    vector3d unit_normal;
};

struct __false_type {
};

inline void *operator new(unsigned int, void *location) {
    return location;
}

template <class T>
inline void construct(T *location, const T &value) {
    if (location)
        new (location) T(value);
}

#endif
