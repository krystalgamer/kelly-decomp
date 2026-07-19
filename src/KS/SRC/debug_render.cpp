// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C69C8)
// 0x002C69C8 debug_render_init__Fv
extern void *global_cap_base;
extern void *global_cap_mid;
extern void *global_cap_end;
__asm__(".equ global_cap_base, 0x00432820");
__asm__(".equ global_cap_mid, 0x00432824");
__asm__(".equ global_cap_end, 0x00432828");
bool debug_render_init() { global_cap_base = 0; global_cap_mid = 0; global_cap_end = 0; return true; }
#endif
