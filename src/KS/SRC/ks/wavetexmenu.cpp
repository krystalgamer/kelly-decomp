// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00381218)
// 0x00381218 ReloadWaveTextures__FP9MenuEntryi
class MenuEntry;
void WAVETEX_ReloadTextureAnims();
__asm__(".equ WAVETEX_ReloadTextureAnims__Fv, 0x0037F260");
bool ReloadWaveTextures(MenuEntry *entry, int button) { if (button == 7) WAVETEX_ReloadTextureAnims(); return true; }
#endif
