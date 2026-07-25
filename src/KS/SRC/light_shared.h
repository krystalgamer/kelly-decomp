#ifndef KELLY_DECOMP_LIGHT_SHARED_H
#define KELLY_DECOMP_LIGHT_SHARED_H

#include "KS/SRC/color_shared.h"

enum light_flavor_t {
    LIGHT_FLAVOR_POINT,
    LIGHT_FLAVOR_SPOT,
    LIGHT_FLAVOR_DIRECTIONAL,
    LIGHT_FLAVOR_PARALLELPOINT,
    NUM_LIGHT_FLAVORS
};

class light_properties {
public:
    light_properties();

protected:
    light_flavor_t flavor;
    color diffuse_color;
    color additive_color;
    float near_range;
    float cutoff_range;
    float recip_cutoff_minus_near;
    unsigned int lightcat;
    unsigned int flags;

    inline void recompute_range()
    {
        if (cutoff_range <= near_range * 1.001f)
            recip_cutoff_minus_near = 1e10f;
        else
            recip_cutoff_minus_near =
                1.0f / (cutoff_range - near_range);
    }
};

#endif
