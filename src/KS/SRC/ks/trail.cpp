// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00361DA0)
// 0x00361DA0 destroy__5trail
class trail { void* resource; public: void destroy(); };
void trail::destroy() { if (resource) resource = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00361A20)
// 0x00361A20 ks_fx_trail_destroy__FP5trail
class trail { public: void destroy(); };
__asm__(".equ destroy__5trail, 0x00361DA0");
void ks_fx_trail_destroy(trail *dead) { dead->destroy(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
