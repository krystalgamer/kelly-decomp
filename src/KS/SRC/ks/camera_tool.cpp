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

#if defined(KELLY_DECOMP_FUNCTION_002EDD98)
// 0x002EDD98 ChangePOButton__26ChangeCamMenuEntryFunctioni
struct MenuSystemVTable { char padding[0x18]; short adjustment; short padding2; void (*close_menu)(void *self); };
class MenuSystem { public: char padding[0x458]; MenuSystemVTable *vtable; public: void CloseMenu(); };
extern MenuSystem *menus;
asm(".equ menus, 0x00424EE8");
class ChangeCamMenuEntryFunction { public: bool ChangePOButton(int buttonid); };
bool ChangeCamMenuEntryFunction::ChangePOButton(int buttonid)
{
    if (buttonid == 7) {
        MenuSystemVTable *table = menus->vtable;
        table->close_menu((char *)menus + table->adjustment);
    }
    return true;
}
#endif
