#ifndef SCRIPT_LIB_CORE_H
#define SCRIPT_LIB_CORE_H

#pragma interface

#include "KS/SRC/script_library_class.h"

class slf_play_movie_t : public script_library_class::function {
public:
    struct parms_t {
        vm_str_t movie_name;
        vm_num_t continue_level;
    };

    virtual bool operator()(vm_stack &stack, entry_t entry);
};

#endif
