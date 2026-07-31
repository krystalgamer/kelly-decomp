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
__asm__(".equ frame_advance__7ai_goalf, 0x00106500");
float surfer_ai_goal::frame_advance(float time) { float result = ai_goal::frame_advance(time); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x0020BD38 going_into_service__14surfer_ai_goal
#include "KS/SRC/ks/kellyslater_ai_goals.h"
__asm__(".equ going_into_service__7ai_goal, 0x00106618");
void surfer_ai_goal::going_into_service() { ai_goal::going_into_service(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0020BD58 going_out_of_service__14surfer_ai_goal
#include "KS/SRC/ks/kellyslater_ai_goals.h"
__asm__(".equ going_out_of_service__7ai_goal, 0x001069C8");
void surfer_ai_goal::going_out_of_service() { ai_goal::going_out_of_service(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0020BC98 _$_14surfer_ai_goal
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_7ai_goal");
extern const char derived_vtable[];
__asm__(".equ _$_7ai_goal, 0x00106498");
__asm__(".equ derived_vtable, 0x004D53C0");
struct AIGoalLayout { char padding[0x38]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_14surfer_ai_goal");
void DerivedDtor(void *self, int deleting) { ((AIGoalLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
