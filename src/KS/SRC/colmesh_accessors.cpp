#include "KS/SRC/capsule.h"

// 0x002FFAE0 get_radius__C7cg_mesh
float cg_mesh::get_radius() const
{
    return radius;
}

// 0x002FFAE8 get_pivot__C7cg_mesh
const vector3d &cg_mesh::get_pivot() const
{
    return pivot;
}

// 0x002FFAF8 is_pivot_valid__C7cg_mesh
bool cg_mesh::is_pivot_valid() const
{
    return flags & 1;
}

// 0x002FFB08 is_entity_collision__C7cg_mesh
bool cg_mesh::is_entity_collision() const
{
    return (flags >> 2) & 1;
}

// 0x002FFB18 is_camera_collision__C7cg_mesh
bool cg_mesh::is_camera_collision() const
{
    return (flags >> 3) & 1;
}
