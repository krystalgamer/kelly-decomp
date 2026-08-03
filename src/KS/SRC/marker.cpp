// marker definitions extracted by generated one-function shims.


// 0x0028CBF8 point_inside__11cube_markerRC8vector3d
#include "KS/SRC/marker.h"

bool cube_marker::point_inside(const vector3d &pt)
{
    vector3d d = pt - get_abs_position();
    return(__builtin_fabsf(dot(get_abs_po().get_x_facing(), d)) <= x_rad && __builtin_fabsf(dot(get_abs_po().get_z_facing(), d)) <= z_rad && __builtin_fabsf(dot(get_abs_po().get_y_facing(), d)) <= y_rad);
}

// Source implementation boundary.
// 0x002B91C8 is_a_marker__C6marker
#include "KS/SRC/marker.h"

bool marker::is_a_marker() const {
    return true;
}

// 0x002B91D0 possibly_active__C6marker
#include "KS/SRC/marker.h"

bool marker::possibly_active() const {
    return false;
}

// 0x002B91D8 possibly_aging__C6marker
#include "KS/SRC/marker.h"

bool marker::possibly_aging() const {
    return false;
}

// 0x002B9288 is_a_rectangle_marker__C16rectangle_marker
#include "KS/SRC/marker.h"

bool rectangle_marker::is_a_rectangle_marker() const {
    return true;
}

// 0x002B9370 is_a_cube_marker__C11cube_marker
#include "KS/SRC/marker.h"

bool cube_marker::is_a_cube_marker() const {
    return true;
}

// 0x002B9170 __tf6marker
#include "KS/SRC/rtti.h"
extern "C" void **MarkerBaseRtti() __asm__("__tf6entity");
extern "C" void *marker_type[] __asm__("__ti6marker");
extern "C" const char marker_name[];
extern "C" void *marker_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti6marker, 0x005A3E60");
__asm__(".equ marker_name, 0x004FE5B8");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **MarkerRtti() __asm__("__tf6marker");
void **MarkerRtti()
{
    if (!marker_type[0]) {
        MarkerBaseRtti();
        __rtti_si(marker_type, marker_name, marker_base_type);
    }
    return marker_type;
}
