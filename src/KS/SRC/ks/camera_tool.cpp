// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EDD90)
// 0x002EDD90 AddCamButton__FP9MenuEntryi
class MenuEntry;

bool AddCamButton(MenuEntry* entry, int buttonid) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EEA80)
// 0x002EEA80 DestroyCameraList__Fv
class camera_list { public: void DestroyCameraList(); };
extern camera_list *CameraList;
__asm__(".equ CameraList, 0x00434960");
__asm__(".equ DestroyCameraList__11camera_list, 0x002EE2C0");
void DestroyCameraList() { CameraList->DestroyCameraList(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
