#ifndef SCRIPT_LIB_BEAM_DECL_H
#define SCRIPT_LIB_BEAM_DECL_H

#pragma interface

#include "KS/SRC/beam.h"
#include "KS/SRC/script_library_class.h"

#define DECLARE_BEAM_FLAG_FUNCTION(name) \
class name : public script_library_class::function { \
public: \
    struct parms_t { \
        beam *me; \
        vm_num_t torf; \
    }; \
    virtual bool operator()(vm_stack &stack, entry_t entry); \
}

DECLARE_BEAM_FLAG_FUNCTION(slf_beam_set_detect_stealth_t);
DECLARE_BEAM_FLAG_FUNCTION(slf_beam_set_collide_hero_t);
DECLARE_BEAM_FLAG_FUNCTION(slf_beam_set_collide_world_t);
DECLARE_BEAM_FLAG_FUNCTION(slf_beam_set_collide_beamable_t);

#undef DECLARE_BEAM_FLAG_FUNCTION

#endif
