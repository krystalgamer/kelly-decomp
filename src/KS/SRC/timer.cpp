// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003108B0)
// 0x003108B0 TIMER_Reset__Fv
extern float timer_total;
extern float timer_level;
__asm__(".equ timer_total, 0x0046B27C");
__asm__(".equ timer_level, 0x0046B284");
void TIMER_Reset() { timer_total = 0.0f; timer_level = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00310A68)
// 0x00310A68 TIMER_NoTick__Fv
extern bool timer_no_tick;
__asm__(".equ timer_no_tick, 0x0046B280");
void TIMER_NoTick() { timer_no_tick = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00310A78)
// 0x00310A78 TIMER_SetTotalSec__Fff
extern float timer_total;
extern float timer_other;
__asm__(".equ timer_total, 0x0046B27C");
__asm__(".equ timer_other, 0x0046B280");
void TIMER_SetTotalSec(float total, float other) { timer_total = total; timer_other = other; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00310A90)
// 0x00310A90 TIMER_SetLevelSec__Ff
extern float timer_level_seconds;
__asm__(".equ timer_level_seconds, 0x0046B284");
void TIMER_SetLevelSec(float value) { timer_level_seconds = value; }
#endif
