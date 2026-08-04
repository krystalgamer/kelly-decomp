// Matching decompilation blocks selected by generated build shims.


// 0x0036EE90 WATER_Normal__FffRfN22
#include "KS/SRC/ks/water.h"

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

// 0x00372870 WATER_GetDrawFar__Fv
#include "KS/SRC/ks/water.h"

bool WATER_GetDrawFar() { return (WaterDebug >> 6) & 1; }

// 0x003728B0 WATER_GetDrawHorizon__Fv
#include "KS/SRC/ks/water.h"

bool WATER_GetDrawHorizon() { return (WaterDebug >> 9) & 1; }

// 0x00372900 WATER_GetDrawSeam__Fv
#include "KS/SRC/ks/water.h"

bool WATER_GetDrawSeam() { return (WaterDebug >> 3) & 1; }

#if defined(KELLY_DECOMP_FUNCTION_00372940)
// 0x00372940 WATER_GetDrawWave__Fv
#include "KS/SRC/ks/water.h"

bool WAVE_GetDraw();
__asm__(".equ WAVE_GetDraw__Fv, 0x0037DC20");
bool WATER_GetDrawWave() { return WAVE_GetDraw(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00372888)
// 0x00372888 WATER_SetDrawFar__Fb
extern unsigned long long WaterDebugFlags;
__asm__(".equ WaterDebugFlags, 0x00484618");
void WATER_SetDrawFar(bool enabled) { WaterDebugFlags = (WaterDebugFlags & ~(1ULL << 6)) | ((unsigned long long)(enabled & 1) << 6); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003728C8)
// 0x003728C8 WATER_SetDrawHorizon__Fb
extern unsigned long long WaterDebugFlags;
__asm__(".equ WaterDebugFlags, 0x00484618");
void WATER_SetDrawHorizon(bool enabled) { WaterDebugFlags = (WaterDebugFlags & ~(1ULL << 9)) | ((unsigned long long)(enabled & 1) << 9); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00372918)
// 0x00372918 WATER_SetDrawSeam__Fb
extern unsigned long long WaterDebugFlags;
__asm__(".equ WaterDebugFlags, 0x00484618");
void WATER_SetDrawSeam(bool enabled) { WaterDebugFlags = (WaterDebugFlags & ~(1ULL << 3)) | ((unsigned long long)(enabled & 1) << 3); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0036E888)
// 0x0036E888 WATER_Cleanup__Fv
extern void WAVE_Cleanup();
extern void WAVETEX_FreeWaveMesh(unsigned id);
extern unsigned SeamWaterMeshID, FarWaterMeshID, HorizonWaterMeshID;
__asm__(".equ WAVE_Cleanup__Fv, 0x00373758");
__asm__(".equ WAVETEX_FreeWaveMesh__FUi, 0x00380EA0");
__asm__(".equ SeamWaterMeshID, 0x0058EA34");
__asm__(".equ FarWaterMeshID, 0x0058EA38");
__asm__(".equ HorizonWaterMeshID, 0x0058EA3C");
void WATER_Cleanup()
{
    WAVE_Cleanup();
    WAVETEX_FreeWaveMesh(SeamWaterMeshID);
    WAVETEX_FreeWaveMesh(FarWaterMeshID);
    WAVETEX_FreeWaveMesh(HorizonWaterMeshID);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
