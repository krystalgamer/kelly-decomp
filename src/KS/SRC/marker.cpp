// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028CBF8)
// 0x0028CBF8 point_inside__11cube_markerRC8vector3d
#include "KS/SRC/marker_shared.h"

bool cube_marker::point_inside(const vector3d &pt)
{
    vector3d d = pt - get_abs_position();
    return(__builtin_fabsf(dot(get_abs_po().get_x_facing(), d)) <= x_rad && __builtin_fabsf(dot(get_abs_po().get_z_facing(), d)) <= z_rad && __builtin_fabsf(dot(get_abs_po().get_y_facing(), d)) <= y_rad);
}
#endif
