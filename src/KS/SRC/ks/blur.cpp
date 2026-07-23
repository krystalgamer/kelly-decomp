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

#if defined(KELLY_DECOMP_FUNCTION_00307FC0)
// 0x00307FC0 RoundUpToPowerOf2__FUi
extern const unsigned int power_checks[5];
__asm__(".equ power_checks, 0x004F5B20");

unsigned int RoundUpToPowerOf2(unsigned int value)
{
    register unsigned int masked;

    --value;
    if ((masked = (power_checks[0] & value)) != 0) value = masked;
    if ((masked = (power_checks[1] & value)) != 0) value = masked;
    if ((masked = (power_checks[2] & value)) != 0) value = masked;
    if ((masked = (power_checks[3] & value)) != 0) value = masked;
    if ((masked = (power_checks[4] & value)) != 0) value = masked;
    value <<= 1;

    return value;
}
#endif
