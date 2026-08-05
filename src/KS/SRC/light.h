#ifndef LIGHT_H
#define LIGHT_H

#pragma interface

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
    inline const color &get_color() const { return diffuse_color; }
    inline const color &get_additive_color() const {
        return additive_color;
    }
    inline float get_near_range() const { return near_range; }
    inline float get_cutoff_range() const { return cutoff_range; }
    inline unsigned int get_lightcat() const { return lightcat; }
    void set_near_range(float range);
    void set_cutoff_range(float range);
    inline void set_lightcat(unsigned int value) { lightcat = value; }

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
    virtual void add_me_to_region(region *value);
    virtual void remove_me_from_region(region *value);
    virtual bool is_a_light_source() const;
    virtual void frame_advance(float time_inc);
    float get_dist(const sphere &bounds) const;
    virtual const color &get_color() const;
    virtual const color &get_additive_color() const;
    virtual float get_near_range() const;
    virtual void set_near_range(float range);
    virtual unsigned int get_lightcat() const;
    virtual void set_lightcat(unsigned int value);
    virtual float get_cutoff_range() const;
    virtual void set_cutoff_range(float range);
    float terrain_radius() const;
    inline const light_properties &get_properties() const {
        return *properties;
    }
};

extern "C" float sqrtf(float value);
__asm__(".equ sqrtf, 0x003C7058");

#endif
