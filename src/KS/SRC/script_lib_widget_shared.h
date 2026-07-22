#ifndef KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H

#include "KS/SRC/script_library_class_shared.h"
#include "KS/SRC/widget_shared.h"

class slf_widget_scale_to2_t : public script_library_class::function {
public:
    struct parms_t {
        widget *me;
        vm_num_t wt;
        vm_num_t dur;
        vm_num_t val;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

class bitmap_widget : public widget {
};

class fluid_bar : public widget {
};

class vector3d {
public:
    rational_t x;
    rational_t y;
    rational_t z;
};

#endif
