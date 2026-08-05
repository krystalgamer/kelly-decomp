#ifndef PORTAL_H
#define PORTAL_H

#include "KS/SRC/pmesh.h"
#include "KS/SRC/sphere.h"

class region_node;

class portal : public vr_pmesh {
public:
    portal();
    portal(region_node *front, region_node *back);
    virtual ~portal();

    region_node *get_front() const { return front; }
    region_node *get_back() const { return back; }
    const vector3d &get_effective_center() const {
        return bound.get_center();
    }
    float get_effective_radius() const {
        return bound.get_radius();
    }
    const sphere &get_bound_sphere() const { return bound; }
    const vector3d &get_cylinder_normal() const {
        return normal;
    }
    float get_cylinder_depth() const { return cylinder_depth; }
    vector3d get_normal(bool use_front) const {
        return use_front ? normal : -normal;
    }
    float get_non_planar_fudge_factor() const {
        return nonplanarfudgefactor;
    }
    bool touches_sphere(const sphere &value) const;
    bool touches_segment(
        const vector3d &first,
        const vector3d &second) const;
    bool is_active() const { return !inactive; }
    void set_active(bool active) { inactive = !active; }

protected:
    virtual void compute_info();
    sphere bound;
    float cylinder_depth;
    vector3d normal;
    float nonplanarfudgefactor;
    region_node *front;
    region_node *back;
    bool inactive;
};

#endif
