#ifndef BILLBOARD_H
#define BILLBOARD_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/matfac.h"
#include "KS/SRC/visrep.h"

struct instance_render_info;
struct nglMesh;

class vr_billboard : public visual_rep {
    char material_alignment_padding[4];
    mat_fac my_material;
    vector3d axis_lock;
    float width;
    float height;
    float z_push_factor;
    unsigned int flags;

public:
    vr_billboard();
    virtual ~vr_billboard();
    virtual void render_instance(
        nglMesh *mesh,
        int *num_quads,
        render_flavor_t flavor,
        instance_render_info *info,
        short *lookup = 0);
    virtual void render_batch(
        nglMesh *mesh,
        int *num_quads,
        render_flavor_t flavor,
        instance_render_info *info,
        int num_instances,
        short *lookup = 0);
    virtual void render_instance(
        render_flavor_t flavor,
        instance_render_info *info,
        short *lookup = 0);
    virtual void render_batch(
        render_flavor_t flavor,
        instance_render_info *info,
        int num_instances,
        short *lookup = 0);
    virtual const vector3d &get_center(float delta_t) const;
    void flush();
    virtual float get_radius(float delta_t) const;
    virtual float compute_xz_radius_rel_center(const po &transform);
    virtual float get_ending_time() const;
    virtual float time_value_to_frame(float time);
    virtual int get_anim_length() const;
    virtual render_flavor_t render_passes_needed() const;
};

#endif
