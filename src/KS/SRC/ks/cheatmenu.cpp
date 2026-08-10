// Matching decompilation blocks selected by generated build shims.


// 0x002EF390 CompleteGoal0Button__FP9MenuEntryi
#include "KS/SRC/ks/beach.h"

class MenuEntry;
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal0Button(MenuEntry *entry, int button) { if (g_beach_ptr) g_beach_ptr->complete_goal(0); return true; }

// 0x002EF3C0 CompleteGoal1Button__FP9MenuEntryi
#include "KS/SRC/ks/beach.h"

class MenuEntry;
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal1Button(MenuEntry *entry, int button) { if (g_beach_ptr) g_beach_ptr->complete_goal(1); return true; }

// 0x002EF3F0 CompleteGoal2Button__FP9MenuEntryi
#include "KS/SRC/ks/beach.h"

class MenuEntry;
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal2Button(MenuEntry *entry, int button) { if (g_beach_ptr) g_beach_ptr->complete_goal(2); return true; }

// 0x002EF420 CompleteGoal3Button__FP9MenuEntryi
#include "KS/SRC/ks/beach.h"

class MenuEntry;
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal3Button(MenuEntry *entry, int button) { if (g_beach_ptr) g_beach_ptr->complete_goal(3); return true; }

// 0x002EF450 CompleteGoal4Button__FP9MenuEntryi
#include "KS/SRC/ks/beach.h"

class MenuEntry;
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal4Button(MenuEntry *entry, int button) { if (g_beach_ptr) g_beach_ptr->complete_goal(4); return true; }

#if defined(KELLY_DECOMP_FUNCTION_00302AD0)
// 0x00302AD0 __tf9MenuCheat
#include "KS/SRC/rtti.h"
extern "C" void **MenuCheatBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_cheat_type[] __asm__("__ti9MenuCheat");
extern "C" const char menu_cheat_name[];
extern "C" void *menu_cheat_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti9MenuCheat, 0x005A4110");
__asm__(".equ menu_cheat_name, 0x004F4E10");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuCheatRtti() __asm__("__tf9MenuCheat");
void **MenuCheatRtti()
{
    if (!menu_cheat_type[0]) {
        MenuCheatBaseRtti();
        __rtti_si(menu_cheat_type, menu_cheat_name, menu_cheat_base_type);
    }
    return menu_cheat_type;
}
#endif
