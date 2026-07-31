#ifndef VISREP_H
#define VISREP_H

class instance_render_info;
class po;
class vector3d;

typedef float time_value_t;
typedef float rational_t;
typedef unsigned int render_flavor_t;

enum visrep_t {
    VISREP_PMESH = 0,
    VISREP_BILLBOARD,
    VISREP_DROPSHADOW,
    VISREP_HIGHLIGHT = VISREP_DROPSHADOW,
    VISREP_KRMESH
};

enum light_method_t {
    LIGHT_METHOD_DIFFUSE = 0,
    LIGHT_METHOD_ADDITIVE_DYNAMIC_ONLY = 1
};

enum {
    RENDER_OPAQUE_PORTION = 0x001,
    RENDER_TRANSLUCENT_PORTION = 0x002
};

class visual_rep {
    visrep_t type;
    rational_t min_detail_dist;
    rational_t max_detail_dist;
    bool instanced;

public:
    virtual inline ~visual_rep() {}
    virtual void render_instance(render_flavor_t, instance_render_info *, short * = 0) = 0;
    virtual void render_batch(render_flavor_t, instance_render_info *, int);
    virtual void render_skin(render_flavor_t, const instance_render_info *, const po *, int);
    virtual int get_min_faces(time_value_t = 0) const;
    virtual int get_max_faces(time_value_t = 0) const;
    virtual time_value_t get_ending_time() const;
    virtual float time_value_to_frame(time_value_t);
    virtual rational_t get_radius(time_value_t = 0) const = 0;
    virtual rational_t compute_xz_radius_rel_center(const po &xform);
    virtual const vector3d &get_center(time_value_t = 0) const = 0;
    virtual bool kill_me();
    virtual void set_light_method(light_method_t);
    inline visrep_t get_type() const {
        return type;
    }
    inline bool is_instanced() const {
        return instanced;
    }
    virtual void set_distance_fade_ok(bool);
    virtual bool get_distance_fade_ok() const;
    virtual int get_anim_length() const;
    virtual bool is_uv_animated() const;
    virtual render_flavor_t render_passes_needed() const;
};

#endif
