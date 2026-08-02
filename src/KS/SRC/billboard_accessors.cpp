// Released billboard accessors.

#include "KS/SRC/billboard.h"

extern vector3d global_ZEROVEC;

// 0x002C1020 get_center__C12vr_billboardf
const vector3d& vr_billboard::get_center(float delta_t) const {
    return global_ZEROVEC;
}
