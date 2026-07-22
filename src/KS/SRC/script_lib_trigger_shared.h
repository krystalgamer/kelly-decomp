#ifndef KELLY_DECOMP_SCRIPT_LIB_TRIGGER_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_TRIGGER_SHARED_H

#include "script_library_class_shared.h"
#include "trigger_shared.h"

class slf_trigger_set_active_t : public script_library_class::function {
public:
    struct parms_t {
        trigger *me;
        vm_num_t torf;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

#endif
