// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00155458)
// 0x00155458 FindObject__13PanelAnimFilePc
class PanelAnim { public: PanelAnim *FindObject(char *name); };
__asm__(".equ FindObject__9PanelAnimPc, 0x00155108");
class PanelAnimFile { PanelAnim *obs; public: PanelAnim *FindObject(char *name); };
PanelAnim *PanelAnimFile::FindObject(char *name) { if (!obs) return 0; PanelAnim *result = obs->FindObject(name); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif
