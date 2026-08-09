#ifndef SCRIPT_LIB_ANIM_H
#define SCRIPT_LIB_ANIM_H

#pragma interface

#include "KS/SRC/entity_anim.h"
#include "KS/SRC/script_library_class.h"
#include "KS/SRC/wds.h"

class slf_anim_play_t : public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *me;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

class slf_anim_pause_t : public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *me;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

class slf_anim_set_timescale_t :
    public script_library_class::function {
public:
    struct parms_t {
        entity_anim_tree *me;
        vm_num_t speed;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
