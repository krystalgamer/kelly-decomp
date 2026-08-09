#ifndef SCRIPT_LIB_SCENE_ANIM_DECL_H
#define SCRIPT_LIB_SCENE_ANIM_DECL_H

#pragma interface

#include "KS/SRC/script_library_class.h"

class slf_scene_anim_kill_anim_t :
    public script_library_class::function {
public:
    struct parms_t {
        unsigned int animation;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_load_scene_anim_t :
    public script_library_class::function {
public:
    struct parms_t {
        vm_str_t name;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
