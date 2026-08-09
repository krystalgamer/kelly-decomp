#ifndef SCRIPT_LIB_ANIM_KILL_H
#define SCRIPT_LIB_ANIM_KILL_H

#pragma interface

#include "KS/SRC/entity_anim.h"
#include "KS/SRC/script_library_class.h"

class slf_anim_kill_anim_t :
    public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *animation;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
