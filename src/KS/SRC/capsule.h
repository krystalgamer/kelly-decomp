#ifndef CAPSULE_H
#define CAPSULE_H

#pragma interface

#include "KS/SRC/po.h"
#include "KS/SRC/algebra.h"

class entity;

class capsule {
public:
    vector3d base;
    vector3d end;
    float radius;
};

class collision_geometry {
public:
    enum type_t {
        NONE,
        CAPSULE,
        MESH
    };

    collision_geometry();
    virtual ~collision_geometry();
    virtual collision_geometry *make_instance(entity *owner) const = 0;
    virtual void xform(const po &transform);
    virtual void apply_radius_scale(float scale);
    virtual void split_xform(
        const po &first,
        const po &second,
        int second_start);
    virtual float get_radius() const;
    virtual float get_core_radius() const;
    virtual const vector3d &get_abs_position() const;
    virtual void estimate_physical_properties(
        entity *body,
        float density) = 0;
    virtual void get_closest_point_along_dir(
        vector3d *target,
        const vector3d &axis) const = 0;
    virtual void get_min_extent(vector3d *value) const;
    virtual void get_max_extent(vector3d *value) const;
    virtual const vector3d &get_pivot() const;
    virtual unsigned int get_type() const = 0;
    virtual bool is_pivot_valid() const;
    virtual bool is_entity_collision() const;
    virtual bool is_camera_collision() const;

    inline bool is_valid() const { return valid; }
    inline void invalidate() { valid = false; }

protected:
    entity *owner;
    bool valid;
};

class collision_capsule : public collision_geometry {
    capsule relative_capsule;
    capsule absolute_capsule;
    vector3d lag_point;

public:
    collision_capsule(entity *owner);
    virtual ~collision_capsule();
    void compute_dimensions();
    void render() const;
    virtual float get_core_radius() const;
    virtual unsigned int get_type() const;
    virtual void estimate_physical_properties(
        entity *body,
        float density);
    const capsule &get_abs_capsule() const {
        return absolute_capsule;
    }
};

class cg_mesh : public collision_geometry {
public:
    virtual unsigned int get_type() const;
};

class cg_none : public collision_geometry {
public:
    virtual unsigned int get_type() const;
};

#endif
