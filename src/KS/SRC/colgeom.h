// Matching decompilation blocks selected by generated build shims.


// 0x002FF430 get_closest_point_along_dir__C7cg_noneP8vector3dRC8vector3d
#include "KS/SRC/capsule.h"

extern const vector3d colgeom_zero_vector;
void cg_none::get_closest_point_along_dir(vector3d *target, const vector3d &direction) const { *target = colgeom_zero_vector; }

// 0x002FF300 get_core_radius__C18collision_geometry
#include "KS/SRC/capsule.h"

float collision_geometry::get_core_radius() const
{
    return get_radius();
}

// 0x002FF338 get_min_extent__C18collision_geometryP8vector3d
#include "KS/SRC/capsule.h"

void collision_geometry::get_min_extent(vector3d *value) const
{
    *value = vector3d(0.0f, 0.0f, 0.0f);
}

// 0x002FF360 get_max_extent__C18collision_geometryP8vector3d
#include "KS/SRC/capsule.h"

void collision_geometry::get_max_extent(vector3d *value) const
{
    *value = vector3d(0.0f, 0.0f, 0.0f);
}

#if defined(KELLY_DECOMP_FUNCTION_002FF2D0)
// 0x002FF2D0 get_radius__C18collision_geometry
#include "KS/SRC/capsule.h"
#include "KS/SRC/entity.h"

float collision_geometry::get_radius() const {
    return owner->get_radius();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF278)
// 0x002FF278 __tf18collision_geometry
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512170"); asm(".equ type_name, 0x004F4B88");
extern "C" void *GetTypeInfo() __asm__("__tf18collision_geometry");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
