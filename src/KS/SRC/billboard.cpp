// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C1000)
// 0x002C1000 get_anim_length__C12vr_billboard
#include "KS/SRC/billboard.h"

__asm__(".equ get_anim_length__C7mat_fac, 0x002BD170");
int vr_billboard::get_anim_length() const
{
    return my_material.get_anim_length();
}
#endif

// 0x002C1050 render_passes_needed__C12vr_billboard
#include "KS/SRC/billboard.h"

__asm__(".equ is_translucent__C7mat_fac, 0x002BD178");
render_flavor_t vr_billboard::render_passes_needed() const {
    return my_material.is_translucent()
        ? RENDER_TRANSLUCENT_PORTION
        : RENDER_OPAQUE_PORTION;
}

#if defined(KELLY_DECOMP_FUNCTION_002C10C8)
// 0x002C10C8 render_instance__12vr_billboardP7nglMeshPiUiP20instance_render_infoPs
#include "KS/SRC/billboard.h"

void vr_billboard::render_instance(
    nglMesh *mesh,
    int *num_quads,
    render_flavor_t flavor,
    instance_render_info *info,
    short *lookup
) {
    render_batch(mesh, num_quads, flavor, info, 1, lookup);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C10F8)
// 0x002C10F8 render_instance__12vr_billboardUiP20instance_render_infoPs
#include "KS/SRC/billboard.h"

void vr_billboard::render_instance(
    render_flavor_t flavor,
    instance_render_info *info,
    short *lookup
) {
    render_batch(flavor, info, 1, lookup);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C07C0)
// 0x002C07C0 __12vr_billboardR10chunk_fileb
#include "KS/SRC/billboard.h"

__asm__(".equ internal_serial_in__12vr_billboardR10chunk_file, 0x002C08A8");

vr_billboard::vr_billboard(chunk_file &file, bool instanced)
  : visual_rep(VISREP_BILLBOARD, instanced)
{
    internal_serial_in(file);
}
#endif
