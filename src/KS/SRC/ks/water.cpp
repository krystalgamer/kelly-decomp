// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0036EE80)
// 0x0036EE80 WATER_Altitude__Fff
float WATER_Altitude(float x, float z) { return 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036EE90)
// 0x0036EE90 WATER_Normal__FffRfN22
void WATER_Normal(
    float x,
    float z,
    float& nx,
    float& ny,
    float& nz
) asm("WATER_Normal__FffRfN22");

void WATER_Normal(
    float x,
    float z,
    float& nx,
    float& ny,
    float& nz
) {
    nx = 0.0f;
    ny = 1.0f;
    nz = 0.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00372870)
// 0x00372870 WATER_GetDrawFar__Fv
extern int water_flags;
__asm__(".equ water_flags, 0x00484618");
bool WATER_GetDrawFar() { return (water_flags >> 6) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003728B0)
// 0x003728B0 WATER_GetDrawHorizon__Fv
extern int water_flags;
__asm__(".equ water_flags, 0x00484618");
bool WATER_GetDrawHorizon() { return (water_flags >> 9) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00372900)
// 0x00372900 WATER_GetDrawSeam__Fv
extern int water_flags;
__asm__(".equ water_flags, 0x00484618");
bool WATER_GetDrawSeam() { return (water_flags >> 3) & 1; }
#endif
