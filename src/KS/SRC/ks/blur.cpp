// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00308260)
// 0x00308260 BLUR_TurnOff__Fv
extern bool blur_enabled;
__asm__(".equ blur_enabled, 0x0046ABF4");
void BLUR_TurnOff() { blur_enabled = false; }
#endif
