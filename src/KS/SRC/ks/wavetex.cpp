// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0037E728)
// 0x0037E728 WAVETEX_SetPlayer__Fi
extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
void WAVETEX_SetPlayer(int value) { wavetex_player = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037E738)
// 0x0037E738 WAVETEX_GetPlayer__Fv
extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
int WAVETEX_GetPlayer() { return wavetex_player; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380500)
// 0x00380500 WAVETEX_Width__Fii
unsigned int WAVETEX_Width(int textype, int frame) {
    return 128;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380508)
// 0x00380508 WAVETEX_Height__Fii
unsigned int WAVETEX_Height(int textype, int frame) {
    return 128;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00380D98)
// 0x00380D98 WAVETEX_SetMatPlayerShadows__Fbi
void WAVETEX_SetMatPlayerShadows(bool enabled, int material) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003810E8)
// 0x003810E8 WAVETEX_CloseWaveMesh__Fv
void WAVETEX_CloseWaveMesh() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00381100)
// 0x00381100 WAVETEX_FillWaveMesh__FUibN41
// Released signature: WAVETEX_FillWaveMesh(unsigned int, bool, bool, bool, bool, bool).
void WAVETEX_FillWaveMesh_stub() asm(
    "WAVETEX_FillWaveMesh__FUibN41"
);

void WAVETEX_FillWaveMesh_stub() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003818D8)
// 0x003818D8 WAVETEX_StaticInit__Fv
void WAVETEXMENU_StaticInit();
__asm__(".equ WAVETEXMENU_StaticInit__Fv, 0x00381240");
void WAVETEX_StaticInit() { WAVETEXMENU_StaticInit(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037F2F8)
// 0x0037F2F8 WAVETEX_SetShadowScale__Ff
extern float WAVETEX_ShadowScale;
__asm__(".equ WAVETEX_ShadowScale, 0x00484ED4");
void WAVETEX_SetShadowScale(float scale) { WAVETEX_ShadowScale = scale * 15.0f * 0.5f; }
#endif
