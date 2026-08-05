// Matching decompilation blocks selected by generated build shims.

// 0x00270EE0 __tf14surfer_ai_goal
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/kellyslater_ai_goals.h"

extern "C" void **surfer_ai_goal_base_rtti() __asm__("__tf7ai_goal");
extern "C" void *surfer_ai_goal_type[] __asm__("__ti14surfer_ai_goal");
extern "C" const char surfer_ai_goal_name[];
extern "C" void *surfer_ai_goal_base_type[] __asm__("__ti7ai_goal");

__asm__(".equ __tf7ai_goal, 0x00112F90");
__asm__(".equ __ti14surfer_ai_goal, 0x005A3D30");
__asm__(".equ surfer_ai_goal_name, 0x004E51C8");
__asm__(".equ __ti7ai_goal, 0x00511FA0");

extern "C" void **surfer_ai_goal_rtti() __asm__("__tf14surfer_ai_goal");
void **surfer_ai_goal_rtti()
{
    if (!surfer_ai_goal_type[0]) {
        surfer_ai_goal_base_rtti();
        __rtti_si(
            surfer_ai_goal_type,
            surfer_ai_goal_name,
            surfer_ai_goal_base_type
        );
    }
    return surfer_ai_goal_type;
}

// 0x0020BD28 calculate_priority__14surfer_ai_goalf
#include "KS/SRC/ks/kellyslater_ai_goals.h"
float surfer_ai_goal::calculate_priority(float time) { priority = 1.0f; return priority; }

// 0x0020BD08 frame_advance__14surfer_ai_goalf
#include "KS/SRC/ks/kellyslater_ai_goals.h"
float surfer_ai_goal::frame_advance(float time) { return ai_goal::frame_advance(time); }
