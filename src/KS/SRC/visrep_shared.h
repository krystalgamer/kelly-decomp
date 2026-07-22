#ifndef KELLY_DECOMP_VISREP_SHARED_H
#define KELLY_DECOMP_VISREP_SHARED_H

class instance_render_info;
class po;
class vector3d;

typedef float time_value_t;
typedef float rational_t;
typedef int render_flavor_t;

enum visrep_t {
    VISREP_INVALID = 0
};

class visual_rep {
    visrep_t type;
    rational_t min_detail_dist;
    rational_t max_detail_dist;
    bool instanced;

public:
    virtual ~visual_rep() {}
    virtual void render_instance(render_flavor_t, instance_render_info *, short * = 0) = 0;
    virtual void render_batch(render_flavor_t, instance_render_info *, int);
    virtual void render_skin(render_flavor_t, const instance_render_info *, const po *, int);
    virtual int get_min_faces(time_value_t = 0) const;
    virtual int get_max_faces(time_value_t = 0) const;
};

#endif
