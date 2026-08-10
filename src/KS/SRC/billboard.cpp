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

#if defined(KELLY_DECOMP_FUNCTION_002C0760)
// 0x002C0760 _$_12vr_billboard
extern "C" void destroy_mat(void *,int) __asm__("_$_7mat_fac");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char billboard_vtable[];
extern const char visual_vtable[];
__asm__(".equ _$_7mat_fac, 0x002BC998");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ billboard_vtable, 0x004F4750");
__asm__(".equ visual_vtable, 0x004F4820");
struct billboard_layout {
    char padding[0x10]; const void *vtable;
    char padding2[4]; char material[1];
};
extern "C" void destroy_billboard(
    billboard_layout *self,int flags
) __asm__("_$_12vr_billboard");
void destroy_billboard(billboard_layout *self,int flags) {
    self->vtable=billboard_vtable;
    destroy_mat(self->material,2);
    self->vtable=visual_vtable;
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
