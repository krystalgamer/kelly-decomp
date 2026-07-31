#ifndef SCRIPT_LIB_TRIGGER_H
#define SCRIPT_LIB_TRIGGER_H

#include "KS/SRC/script_library_class.h"
#include "KS/SRC/trigger.h"

class slf_trigger_set_active_t :
    public script_library_class::function {
public:
    struct parms_t {
        trigger *me;
        vm_num_t torf;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

#endif
