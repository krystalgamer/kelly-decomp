#ifndef KELLY_DECOMP_CAPSULE_SHARED_H
#define KELLY_DECOMP_CAPSULE_SHARED_H

#include "KS/SRC/po_shared.h"
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
    virtual void split_xform(
        const po &first,
        const po &second,
        const po &third,
        int second_start,
        int third_start);
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
    const capsule &get_abs_capsule() const {
        return absolute_capsule;
    }
};

class cg_mesh : public collision_geometry {
};

#endif
