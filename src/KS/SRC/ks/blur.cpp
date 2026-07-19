// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00308260)
// 0x00308260 BLUR_TurnOff__Fv
extern bool blur_enabled;
__asm__(".equ blur_enabled, 0x0046ABF4");
void BLUR_TurnOff() { blur_enabled = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00308010)
// 0x00308010 BLUR_Init__Fv
void BLUR_TurnOff();
__asm__(".equ BLUR_TurnOff__Fv, 0x00308260");
void BLUR_Init() { BLUR_TurnOff(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00308240)
// 0x00308240 BLUR_TurnOn__Fv
extern float TIMER_TotalSec;
extern bool BLUR_Active;
extern float BLUR_StartTime;
__asm__(".equ TIMER_TotalSec, 0x0046B27C");
__asm__(".equ BLUR_Active, 0x0046ABF4");
__asm__(".equ BLUR_StartTime, 0x00589EC0");
void BLUR_TurnOn() { BLUR_Active = true; BLUR_StartTime = TIMER_TotalSec; }
#endif
