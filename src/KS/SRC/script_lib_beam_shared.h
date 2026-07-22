#ifndef KELLY_DECOMP_SCRIPT_LIB_BEAM_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_BEAM_SHARED_H

#include "beam_shared.h"
#include "script_library_class_shared.h"

class slf_beam_kill_all_effects_t : public script_library_class::function {
public:
    struct parms_t {
        beam *me;
        vm_num_t apply_target_vals;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

#endif
