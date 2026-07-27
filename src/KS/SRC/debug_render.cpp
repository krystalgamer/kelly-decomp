// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002C9148)
// 0x002C9148 render_colgeom__FPC18collision_geometryG7color32PC6entity
#include "KS/SRC/debug_render_shared.h"

void render_colgeom(
    const collision_geometry *colgeom,
    color32 color,
    const entity *target)
{
    if (colgeom)
    {
        switch (colgeom->get_type())
        {
        case collision_geometry::CAPSULE:
            render_capsule(
                ((collision_capsule *)colgeom)->get_abs_capsule(),
                color);
            break;

        case collision_geometry::MESH:
            render_cgmesh(
                (cg_mesh *)colgeom,
                target != 0
                    ? target->get_abs_po()
                    : po_identity_matrix,
                color);
            break;
        }
    }
    else if (target)
    {
        render_sphere(
            target->get_abs_position(),
            target->get_radius(),
            color);
    }
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_002C69C8)
// 0x002C69C8 debug_render_init__Fv
extern void *global_cap_base;
extern void *global_cap_mid;
extern void *global_cap_end;
__asm__(".equ global_cap_base, 0x00432820");
__asm__(".equ global_cap_mid, 0x00432824");
__asm__(".equ global_cap_end, 0x00432828");
bool debug_render_init() { global_cap_base = 0; global_cap_mid = 0; global_cap_end = 0; return true; }
#endif
