#ifndef KELLY_DECOMP_LINEAR_ANIM_SHARED_H
#define KELLY_DECOMP_LINEAR_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/mbi_shared.h"
#include "KS/SRC/rtti_shared.h"

template <class animatable_t>
class linear_key {
    float timestamp;
    animatable_t key_value;

public:
    const animatable_t &get_value() const
    {
        return key_value;
    }

    animatable_t interpolate(
        const linear_key &other,
        float ratio
    ) const;

    animatable_t get_value(float time, const linear_key &other) const
    {
        float length = other.get_time() - get_time();
        float delta = time - get_time();
        return interpolate(
            other,
            length > 0.0001f ? delta / length : 1.0f
        );
    }

    float get_time() const
    {
        return timestamp;
    }
};

template <class animatable_t>
class linear_track {
public:
    typedef linear_key<animatable_t> key_t;
    typedef key_t *iterator;

    int num_keys;
    key_t *m_keys;
};

template <class animatable_t>
class linear_anim
    : public key_anim<animatable_t,
                      linear_key<animatable_t>,
                      linear_track<animatable_t> > {
public:
    static bool meminit;
    static bool *allocated;
    static void *membuffer;
    static int current_allocation;
    static void *mem_init_func;
    static void *mem_free_func;
    static void check_mem_init();
    static void mem_cleanup();
};

#endif
