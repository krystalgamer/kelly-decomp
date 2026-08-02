// Released billboard accessors.

#include "KS/SRC/billboard.h"

extern vector3d global_ZEROVEC;

// 0x002C1020 get_center__C12vr_billboardf
const vector3d& vr_billboard::get_center(float delta_t) const {
    return global_ZEROVEC;
}

// 0x002C1030 get_radius__C12vr_billboardf
float vr_billboard::get_radius(float delta_t) const {
    return width + height;
}

// 0x002C1040 compute_xz_radius_rel_center__12vr_billboardRC2po
float vr_billboard::compute_xz_radius_rel_center(
    const po& transform)
{
    return width + height;
}

// 0x002C10B8 time_value_to_frame__12vr_billboardf
float vr_billboard::time_value_to_frame(float time) {
    return time * 30.0f;
}
