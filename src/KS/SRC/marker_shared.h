#ifndef KELLY_DECOMP_MARKER_SHARED_H
#define KELLY_DECOMP_MARKER_SHARED_H

#include "KS/SRC/entity.h"

class marker_po : public po {
public:
    inline const vector3d &get_x_facing() const {
        return *(const vector3d *)((const char *)this + 0x00);
    }
    inline const vector3d &get_y_facing() const {
        return *(const vector3d *)((const char *)this + 0x10);
    }
    inline const vector3d &get_z_facing() const {
        return *(const vector3d *)((const char *)this + 0x20);
    }
};

inline float dot(const vector3d &a, const vector3d &b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

class marker : public entity {
public:
    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    virtual bool is_a_marker() const;
    virtual bool possibly_active() const;
    virtual bool possibly_aging() const;

    inline const marker_po &get_abs_po() const {
        return (const marker_po &)entity::get_abs_po();
    }
    inline const vector3d &get_abs_position() const {
        return get_abs_po().get_position();
    }
};

class rectangle_marker : public marker {
public:
    float x_rad;
    float z_rad;

    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    virtual bool is_a_rectangle_marker() const;
    virtual bool point_inside(const vector3d &point);
    virtual bool parse_instance(
        const stringx &flavor,
        chunk_file &file);
};

class cube_marker : public rectangle_marker {
public:
    float y_rad;

    virtual entity *make_instance(
        const entity_id &id,
        unsigned int flags) const;
    virtual bool is_a_cube_marker() const;
    virtual bool point_inside(const vector3d &point);
    virtual bool parse_instance(
        const stringx &flavor,
        chunk_file &file);
};

#endif
