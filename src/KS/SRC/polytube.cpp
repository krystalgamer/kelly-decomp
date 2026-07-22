// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0013AD58)
#include "KS/SRC/polytube_shared.h"

__asm__(".equ is_translucent__C7mat_fac, 0x002BD178");

// 0x0013AD58 render_passes_needed__C8polytube
render_flavor_t polytube::render_passes_needed() const
{
    render_flavor_t passes = 0;

    if ((my_material && my_material->is_translucent()) ||
        render_color.get_alpha() < 0xFF)
        passes |= RENDER_TRANSLUCENT_PORTION;
    else
        passes |= RENDER_OPAQUE_PORTION;

    return passes;
}
#endif

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
