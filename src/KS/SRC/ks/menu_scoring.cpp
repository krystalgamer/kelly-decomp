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
#include "KS/SRC/ks/menu_scoring.h"

bool mem_malloc_locked();
void mem_lock_malloc(bool locked);
__asm__(".equ mem_malloc_locked__Fv,0x002AC4B8");
__asm__(".equ mem_lock_malloc__Fb,0x002AC438");

bool LoadScoringButton(MenuEntry *, int)
{
    bool memlocked = mem_malloc_locked();
    bool filelocked = os_file_system_locked;
    mem_lock_malloc(false);
    if (filelocked)
        os_file_system_locked = false;
    LoadScoringSystem();
    mem_lock_malloc(memlocked);
    if (filelocked)
        os_file_system_locked = true;
    return true;
}

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
