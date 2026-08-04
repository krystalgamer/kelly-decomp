#ifndef SCRIPT_LIB_BEAM_H
#define SCRIPT_LIB_BEAM_H

#pragma interface

#include "KS/SRC/beam.h"
#include "KS/SRC/script_library_class.h"

class slf_beam_kill_all_effects_t :
    public script_library_class::function {
public:
    struct parms_t {
        beam *me;
        vm_num_t apply_target_vals;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

#endif
