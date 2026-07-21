// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E7400)
// 0x001E7400 WAVERENDER_SetWaveDarkParams__Fff
extern float wave_dark_a;
extern float wave_dark_b;
__asm__(".equ wave_dark_a, 0x0042E67C");
__asm__(".equ wave_dark_b, 0x0042E680");
void WAVERENDER_SetWaveDarkParams(float a, float b) { wave_dark_a = a; wave_dark_b = b; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E7978)
// 0x001E7978 nglVif1AddWaveFoam__FRPUiRUiP11nglMaterialUib
__asm__(".equ _$nglWaveFoamAddr, 0x00001AD0");
__asm__(".equ _$nglBaseAddr, 0x00000000");
typedef unsigned int u_int; struct nglMaterial {};
extern char nglWaveFoamAddr asm("_$nglWaveFoamAddr"); extern char nglBaseAddr asm("_$nglBaseAddr");
inline void nglVif1AddCommandListProgram(u_int *&Packet, u_int &DataPtr, char *Addr) { Packet[0] = 0x60010000 | DataPtr++; Packet[1] = ((u_int)Addr - (u_int)&nglBaseAddr) / 8; Packet += 2; }
void nglVif1AddWaveFoam(u_int *&_Packet, u_int &_CmdListDataPtr, nglMaterial *Material, u_int MaterialFlags, bool standalone) { u_int *Packet = _Packet; u_int CmdListDataPtr = _CmdListDataPtr; nglVif1AddCommandListProgram(Packet, CmdListDataPtr, &nglWaveFoamAddr); _Packet = Packet; _CmdListDataPtr = CmdListDataPtr; }
#endif
