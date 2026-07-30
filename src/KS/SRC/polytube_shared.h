#ifndef KELLY_DECOMP_POLYTUBE_SHARED_H
#define KELLY_DECOMP_POLYTUBE_SHARED_H

#include "KS/SRC/entity.h"
#include "KS/SRC/matfac_shared.h"

#pragma interface

class b_spline {
    char spline_data[36];
};

class polytube : public entity {
    bool use_spline;
    b_spline spline;
    mat_fac *my_material;
    rational_t tube_radius;
    int num_sides;
    rational_t tiles_per_meter;
    rational_t max_length;

public:
    void init();
    render_flavor_t render_passes_needed() const;
};

#endif
