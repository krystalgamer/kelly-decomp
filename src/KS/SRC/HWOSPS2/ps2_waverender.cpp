// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E7400)
// 0x001E7400 WAVERENDER_SetWaveDarkParams__Fff
extern float wave_dark_a;
extern float wave_dark_b;
__asm__(".equ wave_dark_a, 0x0042E67C");
__asm__(".equ wave_dark_b, 0x0042E680");
void WAVERENDER_SetWaveDarkParams(float a, float b) { wave_dark_a = a; wave_dark_b = b; }
#endif
