#include "KS/SRC/capsule.h"
#include "KS/SRC/entity.h"

// 0x002FF328 get_abs_position__C18collision_geometry
const vector3d &collision_geometry::get_abs_position() const
{
    return owner->get_abs_position();
}

// 0x002D89C0 xform__18collision_geometryRC2po
void collision_geometry::xform(const po &transform)
{
    valid = true;
}

// 0x002FF2B8 apply_radius_scale__18collision_geometryf
void collision_geometry::apply_radius_scale(float scale)
{
}

// 0x002FF2C0 split_xform__18collision_geometryRC2poT1i
void collision_geometry::split_xform(
    const po &first,
    const po &second,
    int second_start)
{
}

// 0x002FF3A0 is_pivot_valid__C18collision_geometry
bool collision_geometry::is_pivot_valid() const
{
    return false;
}

// 0x002FF3A8 is_entity_collision__C18collision_geometry
bool collision_geometry::is_entity_collision() const
{
    return true;
}

// 0x002FF3B0 is_camera_collision__C18collision_geometry
bool collision_geometry::is_camera_collision() const
{
    return false;
}

// 0x002FF388 get_pivot__C18collision_geometry
extern const vector3d ZEROVEC_005787F0;

const vector3d &collision_geometry::get_pivot() const
{
    return ZEROVEC_005787F0;
}

// 0x002D9FA8 get_type__C7cg_mesh
unsigned int cg_mesh::get_type() const
{
    return 2;
}

// 0x002DC2B0 get_type__C7cg_none
unsigned int cg_none::get_type() const
{
    return 0;
}
