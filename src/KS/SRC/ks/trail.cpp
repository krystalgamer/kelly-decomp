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

#if defined(KELLY_DECOMP_FUNCTION_00364450)
// 0x00364450 create_chophop_splash__5trailR8vector3d
struct vector3d;
void ks_fx_add_splash(unsigned int type, const vector3d &position, float scale);
__asm__(".equ ks_fx_add_splash__FUiRC8vector3df, 0x0036C3D0");
class trail { public: void create_chophop_splash(vector3d &position); };
void trail::create_chophop_splash(vector3d &position) { ks_fx_add_splash(13, position, 1.0f); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003643E8)
// 0x003643E8 create_big_landing_splash__5trail
extern float extra_splash_power_amount;
__asm__(".equ extra_splash_power_amount, 0x0047ED84");
struct spray_layout { char padding[0xca8]; float extra_splash_power[2]; };
class trail { char padding[0xcd78]; spray_layout *my_spray; public: void create_big_landing_splash(); };
void trail::create_big_landing_splash() { if (my_spray) my_spray->extra_splash_power[0] = my_spray->extra_splash_power[1] = extra_splash_power_amount; }
#endif
