// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028CD48)
// 0x0028CD48 frame_advance__3micf
#include "KS/SRC/mic.h"

asm(".equ frame_advance__6entityf, 0x00132408");
extern "C" void advance_entity(entity *value, float time)
    __asm__("frame_advance__6entityf");

void mic::frame_advance(float time_inc)
{
    vector3d *destination = &last_position;
    const vector3d *position = &get_abs_position();
    destination->x = position->x;
    destination->y = position->y;
    destination->z = position->z;
    void (*advance)(entity *, float) = advance_entity;
    advance(this, time_inc);
}
#endif
