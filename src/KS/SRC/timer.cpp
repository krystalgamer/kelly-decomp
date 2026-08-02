// Matching decompilation blocks selected by generated build shims.


// 0x003108B0 TIMER_Reset__Fv
#include "KS/SRC/timer.h"

void TIMER_Reset() { TIMER_TotalSec = 0.0f; TIMER_LevelSec = 0.0f; }

// 0x00310A78 TIMER_SetTotalSec__Fff
#include "KS/SRC/timer.h"

void TIMER_SetTotalSec(float total, float frame) { TIMER_TotalSec = total; TIMER_FrameSec = frame; }

#if defined(KELLY_DECOMP_FUNCTION_003109B0)
// 0x003109B0 TIMER_Init__Ff
extern float TIMER_LevelDuration;
extern bool TIMER_InfiniteDuration;
void TIMER_Reset();
__asm__(".equ TIMER_LevelDuration, 0x0046B288");
__asm__(".equ TIMER_InfiniteDuration, 0x0046B28C");
__asm__(".equ TIMER_Reset__Fv, 0x003108B0");

void TIMER_Init(const float duration)
{
    TIMER_LevelDuration = duration;
    if (TIMER_LevelDuration <= 0) {
        TIMER_LevelDuration = 0;
        TIMER_InfiniteDuration = true;
    } else {
        TIMER_InfiniteDuration = false;
    }

    TIMER_Reset();
    // Prevent GCC 2.95 from tail-calling the released reset call.
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
