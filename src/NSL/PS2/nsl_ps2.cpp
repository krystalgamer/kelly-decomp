// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00390B30)
// 0x00390B30 nslPreInitProviewModePS2__Fb
struct nslState { char padding[0x15884]; bool proview; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitProviewModePS2(bool value) { nsl.proview = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390B48)
// 0x00390B48 nslPreInitCdDvdModePS2__F15nslPs2CdDvdMode
enum nslPs2CdDvdMode { NSL_MODE_ZERO };
struct nslState { char padding[0x15870]; nslPs2CdDvdMode cd_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitCdDvdModePS2(nslPs2CdDvdMode value) { nsl.cd_mode = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390C28)
// 0x00390C28 nslGetSpeakerMode__Fv
struct nslState { char padding[0x15864]; int speaker_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
int nslGetSpeakerMode() { return nsl.speaker_mode; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00390DA8)
// 0x00390DA8 _nslResetInternal__F18_nslClearBehaviour
enum _nslClearBehaviour { NSL_CLEAR_DEFAULT };
void _nslClearSystemData(_nslClearBehaviour behavior);
__asm__(".equ _nslClearSystemData__F18_nslClearBehaviour, 0x00390DC8");
void _nslResetInternal(_nslClearBehaviour behavior) { _nslClearSystemData(behavior); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
