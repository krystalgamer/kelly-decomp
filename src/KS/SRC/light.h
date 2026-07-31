#ifndef LIGHT_H
#define LIGHT_H

#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"
#include "KS/SRC/sphere.h"

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
    inline light_flavor_t get_flavor() const { return flavor; }

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

class light_source : public entity {
    light_properties *properties;

public:
    float get_dist(const sphere &bounds) const;
    inline const light_properties &get_properties() const {
        return *properties;
    }
};

extern "C" float sqrtf(float value);
__asm__(".equ sqrtf, 0x003C7058");

#endif
