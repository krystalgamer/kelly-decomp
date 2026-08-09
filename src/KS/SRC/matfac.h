#ifndef MATFAC_H
#define MATFAC_H

#include "KS/SRC/material.h"
#include "NGL/PS2/ngl_ps2.h"

class __attribute__((aligned(8))) mat_fac {
public:
    mat_fac();
    mat_fac(const mat_fac &other);
    virtual ~mat_fac();
    mat_fac &operator=(const mat_fac &other);
    int get_anim_length() const;
    bool is_translucent() const;
    bool has_texture() const;
    int get_original_width(
        int frame,
        map_e map = MAP_DIFFUSE) const;
    int get_original_height(
        int frame,
        map_e map = MAP_DIFFUSE) const;
    void set_blend_mode(unsigned int mode, int map);

private:
    nglMaterial material;
};

#endif
