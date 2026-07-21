// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028CD88)
// 0x0028CD88 adjust_listener__3mic
class mic {
public:
    void adjust_listener();
};

void mic::adjust_listener() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028CD48)
// 0x0028CD48 frame_advance__3micf
#include "decomp_annotations.h"
struct vector3d { float x, y, z; };
struct position_source { char padding[0x30]; vector3d position; };
class entity { char padding[0x50]; protected: position_source *source; public: void frame_advance(float); };
class mic : public entity { char padding2[0x1ac]; vector3d last_position; public: void frame_advance(float); };
asm(".equ frame_advance__6entityf, 0x00132408");
void mic::frame_advance(float time_inc)
{
    vector3d *destination = &last_position;
    const vector3d *position = &source->position;
    destination->x = position->x;
    destination->y = position->y;
    destination->z = position->z;
    entity::frame_advance(time_inc);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
