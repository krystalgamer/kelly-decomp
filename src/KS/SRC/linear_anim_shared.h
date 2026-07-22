#ifndef KELLY_DECOMP_LINEAR_ANIM_SHARED_H
#define KELLY_DECOMP_LINEAR_ANIM_SHARED_H

#include "KS/SRC/anim_shared.h"
#include "KS/SRC/rtti_shared.h"

class quaternion;
class vector3d;

template <class animatable_t>
class linear_key {
    float timestamp;
    animatable_t key_value;
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
};

#endif
