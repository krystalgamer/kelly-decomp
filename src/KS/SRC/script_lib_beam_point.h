#ifndef SCRIPT_LIB_BEAM_POINT_H
#define SCRIPT_LIB_BEAM_POINT_H

#pragma interface

#include "KS/SRC/beam.h"
#include "KS/SRC/script_library_class.h"

class slf_beam_set_point_to_point_t :
    public script_library_class::function {
public:
    struct parms_t {
        beam *me;
        vector3d start;
        vector3d end;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
