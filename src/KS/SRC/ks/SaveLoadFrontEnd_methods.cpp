// Matching decompilation blocks selected by generated build shims.


// 0x001DCDF0 OnTriangle__10DialogMenui
#include "KS/SRC/ks/SaveLoadFrontEnd.h"

void DialogMenu::OnTriangle(int command) {
}

// 0x001DCDF8 OnUnactivate__10DialogMenuP6FEMenu
class FEMenu;
extern "C" void turn_dialog_pq(void *self, bool value)
    __asm__("TurnPQ__10DialogMenub");
extern "C" void unactivate_dialog(void *self, FEMenu *menu)
    __asm__("OnUnactivate__10DialogMenuP6FEMenu");
__asm__(".equ TurnPQ__10DialogMenub, 0x0019DA00");
void unactivate_dialog(void *self, FEMenu *menu) {
    turn_dialog_pq(self, false);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001DCE70 OnTriangle__12KeyboardMenui
extern "C" void previous_keyboard_menu(void *self)
    __asm__("go_to_previous_menu__12KeyboardMenu");
extern "C" void keyboard_triangle(void *self, int command)
    __asm__("OnTriangle__12KeyboardMenui");
__asm__(".equ go_to_previous_menu__12KeyboardMenu, 0x001A2420");
void keyboard_triangle(void *self, int command) {
    previous_keyboard_menu(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001DCCE8 __tf16SaveLoadFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCCE8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCCE8[] __asm__("__ti16SaveLoadFrontEnd");
extern const char name_001DCCE8[];
extern void *base_type_001DCCE8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti16SaveLoadFrontEnd, 0x005A2CA8");
__asm__(".equ name_001DCCE8, 0x004DDD28");
__asm__(".equ base_type_001DCCE8, 0x004DDC48");
extern "C" void **Rtti_001DCCE8() __asm__("__tf16SaveLoadFrontEnd");
void **Rtti_001DCCE8()
{
    if (!type_001DCCE8[0]) {
        BaseRtti_001DCCE8();
        __rtti_class(type_001DCCE8, name_001DCCE8, base_type_001DCCE8, 1);
    }
    return type_001DCCE8;
}

// 0x001DCD40 __tf9NamesMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD40() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD40[] __asm__("__ti9NamesMenu");
extern const char name_001DCD40[];
extern void *base_type_001DCD40[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti9NamesMenu, 0x005A2CB8");
__asm__(".equ name_001DCD40, 0x004DDD40");
__asm__(".equ base_type_001DCD40, 0x004DDC48");
extern "C" void **Rtti_001DCD40() __asm__("__tf9NamesMenu");
void **Rtti_001DCD40()
{
    if (!type_001DCD40[0]) {
        BaseRtti_001DCD40();
        __rtti_class(type_001DCD40, name_001DCD40, base_type_001DCD40, 1);
    }
    return type_001DCD40;
}

// 0x001DCD98 __tf10DialogMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD98() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD98[] __asm__("__ti10DialogMenu");
extern const char name_001DCD98[];
extern void *base_type_001DCD98[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti10DialogMenu, 0x005A2CC8");
__asm__(".equ name_001DCD98, 0x004DDD50");
__asm__(".equ base_type_001DCD98, 0x004DDC48");
extern "C" void **Rtti_001DCD98() __asm__("__tf10DialogMenu");
void **Rtti_001DCD98()
{
    if (!type_001DCD98[0]) {
        BaseRtti_001DCD98();
        __rtti_class(type_001DCD98, name_001DCD98, base_type_001DCD98, 1);
    }
    return type_001DCD98;
}

// 0x001DCE18 __tf12KeyboardMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCE18() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCE18[] __asm__("__ti12KeyboardMenu");
extern const char name_001DCE18[];
extern void *base_type_001DCE18[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti12KeyboardMenu, 0x005A2CD8");
__asm__(".equ name_001DCE18, 0x004DDD60");
__asm__(".equ base_type_001DCE18, 0x004DDC48");
extern "C" void **Rtti_001DCE18() __asm__("__tf12KeyboardMenu");
void **Rtti_001DCE18()
{
    if (!type_001DCE18[0]) {
        BaseRtti_001DCE18();
        __rtti_class(type_001DCE18, name_001DCE18, base_type_001DCE18, 1);
    }
    return type_001DCE18;
}
