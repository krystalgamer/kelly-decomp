// Matching decompilation blocks selected by generated build shims.

// 0x0030F440 SaveScoringButton__FP9MenuEntryi
#include "KS/SRC/ks/menu_scoring.h"
bool SaveScoringButton(MenuEntry *entry, int button_id)
{
    bool file_locked = os_file_system_locked;
    if (file_locked)
        os_file_system_locked = false;
    SaveScoringSystem();
    if (file_locked)
        os_file_system_locked = true;
    return true;
}

// 0x0030F490 LoadScoringButton__FP9MenuEntryi
extern "C" bool mem_locked() __asm__("mem_malloc_locked__Fv");extern "C" void mem_lock(bool) __asm__("mem_lock_malloc__Fb");extern "C" void load_scoring() __asm__("LoadScoringSystem__Fv");__asm__(".equ mem_malloc_locked__Fv,0x002AC4B8");__asm__(".equ mem_lock_malloc__Fb,0x002AC438");__asm__(".equ LoadScoringSystem__Fv,0x0024A560");extern bool file_locked;__asm__(".equ file_locked,0x0040E3A0");extern "C" bool load_button(void*,int) __asm__("LoadScoringButton__FP9MenuEntryi");bool load_button(void*,int){bool memlocked=mem_locked();bool filelocked=file_locked;mem_lock(false);if(filelocked)file_locked=false;load_scoring();mem_lock(memlocked);if(filelocked)file_locked=true;return true;}

// Source implementation boundary.
// 0x00314100 __tf9TrickMenu
#include "KS/SRC/rtti.h"
extern "C" void **TrickMenuBaseRtti() __asm__("__tf4Menu");
extern "C" void *trick_menu_type[] __asm__("__ti9TrickMenu");
extern "C" const char trick_menu_name[];
extern "C" void *trick_menu_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti9TrickMenu, 0x005A4210");
__asm__(".equ trick_menu_name, 0x00508B10");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **TrickMenuRtti() __asm__("__tf9TrickMenu");
void **TrickMenuRtti()
{
    if (!trick_menu_type[0]) {
        TrickMenuBaseRtti();
        __rtti_si(trick_menu_type, trick_menu_name, trick_menu_base_type);
    }
    return trick_menu_type;
}

// 0x00314158 _$_9TrickMenu
extern "C" void close_menu(void *,bool) __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int) __asm__("Resize__4Menui");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub,0x0023E470"); __asm__(".equ Resize__4Menui,0x0023E2B0");
__asm__(".equ __builtin_delete,0x002AC6B0"); __asm__(".equ menu_vtable,0x004D5D48");
struct M{char p[0x1c];const void*v;};
extern "C" void d(M*s,int f) __asm__("_$_9TrickMenu");
void d(M*s,int f){s->v=menu_vtable;close_menu(s,true);resize_menu(s,0);if(f&1){object_delete(s);__asm__ __volatile__("" : : : "memory");}}
