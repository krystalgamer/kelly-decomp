// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EF390)
// 0x002EF390 CompleteGoal0Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal0Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(0); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EF3C0)
// 0x002EF3C0 CompleteGoal1Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal1Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(1); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EF3F0)
// 0x002EF3F0 CompleteGoal2Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal2Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(2); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EF420)
// 0x002EF420 CompleteGoal3Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal3Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(3); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EF450)
// 0x002EF450 CompleteGoal4Button__FP9MenuEntryi
class MenuEntry; class beach { public: void complete_goal(int goal); };
extern beach *beach_ptr;
__asm__(".equ beach_ptr, 0x0043F710");
__asm__(".equ complete_goal__5beachi, 0x001ED340");
bool CompleteGoal4Button(MenuEntry *entry, int button) { if (beach_ptr) beach_ptr->complete_goal(4); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302AD0)
// 0x00302AD0 __tf9MenuCheat
#include "KS/SRC/rtti_shared.h"
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

#if defined(KELLY_DECOMP_FUNCTION_00302B28)
// 0x00302B28 _$_9MenuCheat
extern "C" void close_menu(void *,bool) __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int) __asm__("Resize__4Menui");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub,0x0023E470"); __asm__(".equ Resize__4Menui,0x0023E2B0");
__asm__(".equ __builtin_delete,0x002AC6B0"); __asm__(".equ menu_vtable,0x004D5D48");
struct M{char p[0x1c];const void*v;};
extern "C" void d(M*s,int f) __asm__("_$_9MenuCheat");
void d(M*s,int f) {
    s->v=menu_vtable; close_menu(s,true); resize_menu(s,0);
    if(f&1) { object_delete(s); __asm__ __volatile__("" : : : "memory"); }
}
#endif
