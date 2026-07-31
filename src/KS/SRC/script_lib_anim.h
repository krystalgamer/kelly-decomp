#ifndef SCRIPT_LIB_ANIM_H
#define SCRIPT_LIB_ANIM_H

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

#endif
