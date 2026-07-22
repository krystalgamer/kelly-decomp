// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0013ABD8)
// 0x0013ABD8 init__8polytube
#include "KS/SRC/polytube_shared.h"
void polytube::init() {
    my_material = 0;
    tiles_per_meter = 1.0f;
    num_sides = 5;
    tube_radius = 0.025f;
    use_spline = true;
    entity::set_flag(EFLAG_GRAPHICS, true);
    max_length = -1.0f;
}
#endif
