#include "KS/SRC/guidance_sys.h"

// 0x002B9480 get_type__15guidance_system
guidance_system::eGuidanceSysType guidance_system::get_type()
{
    return GUIDANCE_GENERIC;
}

// 0x002B9488 frame_advance__15guidance_systemf
void guidance_system::frame_advance(float time_inc)
{
}

// 0x002B9508 get_type__19rocket_guidance_sys
guidance_system::eGuidanceSysType rocket_guidance_sys::get_type()
{
    return GUIDANCE_ROCKET;
}
