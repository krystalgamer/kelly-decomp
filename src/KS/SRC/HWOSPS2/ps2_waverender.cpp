// Matching decompilation blocks selected by generated build shims.


// 0x001E7400 WAVERENDER_SetWaveDarkParams__Fff
extern float DarkAlphaScale;
extern float DarkAlphaOffset;

void WAVERENDER_SetWaveDarkParams(float scale, float offset) {
    DarkAlphaScale = scale;
    DarkAlphaOffset = offset;
}

#if defined(KELLY_DECOMP_FUNCTION_001E7978)
// 0x001E7978 nglVif1AddWaveFoam__FRPUiRUiP11nglMaterialUib
#include "NGL/PS2/ngl_ps2_internal.h"

__asm__(".equ _$nglWaveFoamAddr, 0x00001AD0");
__asm__(".equ _$nglBaseAddr, 0x00000000");
extern char nglWaveFoamAddr asm("_$nglWaveFoamAddr");
void nglVif1AddWaveFoam(u_int *&_Packet, u_int &_CmdListDataPtr, nglMaterial *Material, u_int MaterialFlags, bool standalone) { u_int *Packet = _Packet; u_int CmdListDataPtr = _CmdListDataPtr; nglVif1AddCommandListProgram(Packet, CmdListDataPtr, &nglWaveFoamAddr); _Packet = Packet; _CmdListDataPtr = CmdListDataPtr; }
#endif
