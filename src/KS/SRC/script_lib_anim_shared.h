#ifndef KELLY_DECOMP_SCRIPT_LIB_ANIM_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_ANIM_SHARED_H

#include "KS/SRC/script_library_class_shared.h"

typedef float rational_t;

class entity_anim {
public:
    int anim_state;
};

class entity_anim_tree : public entity_anim {
public:
    virtual void set_flag(int flag);
    void set_timescale_factor(rational_t timescale_factor);
};

class world_dynamics_system {
public:
    void kill_anim(entity_anim_tree *animation);
};

extern world_dynamics_system *g_world_ptr;

#endif
