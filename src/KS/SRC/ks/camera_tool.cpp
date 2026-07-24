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

#if defined(KELLY_DECOMP_FUNCTION_002EDDD8)
// 0x002EDDD8 DeleteCamButton__26DeleteCamMenuEntryFunctioni
struct menu_vtable{char padding[24];short adjustment;short reserved;void(*close)(void*);};struct menu_system{char padding[1112];menu_vtable*vtable;};extern menu_system*menus;__asm__(".equ menus,0x00424EE8");struct cam_parent{int deleted;};struct delete_layout{char padding[12];cam_parent*parent;};extern "C" bool delete_cam(delete_layout*self,int button) __asm__("DeleteCamButton__26DeleteCamMenuEntryFunctioni");bool delete_cam(delete_layout*self,int button){if(button==7){register cam_parent*p __asm__("$4")=self->parent;__asm__ __volatile__("" : : "r"(p));register char*page __asm__("$16")=(char*)0x00420000;register menu_system*m __asm__("$5")=*(menu_system**)(page+0x4ee8);__asm__ __volatile__("" : : "r"(m));register int yes __asm__("$3")=1;p->deleted=yes;menu_vtable*t=m->vtable;register void(*fn)(void*) __asm__("$3")=t->close;fn((char*)m+t->adjustment);m=*(menu_system**)(page+0x4ee8);t=m->vtable;fn=t->close;fn((char*)m+t->adjustment);}return true;}
#endif
