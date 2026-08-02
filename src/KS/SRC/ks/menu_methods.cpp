// menu inline definitions extracted by generated one-function shims.


// 0x002704F8 OnTick__9MenuEntryf
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnTick(float arg0) {
}

// 0x00270500 OnButtonPress__9MenuEntryi
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnButtonPress(int arg0) {
}

// 0x00270508 OnButtonRelease__9MenuEntryi
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnButtonRelease(int arg0) {
}

// 0x00270510 OnHide__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnHide() {
}

// 0x00270518 OnShow__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnShow() {
}

// 0x00270520 OnEnable__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnEnable() {
}

// 0x00270528 OnDisable__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnDisable() {
}

// 0x00270530 OnActivate__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnActivate() {
}

// 0x00270538 OnDeactivate__9MenuEntry
#include "KS/SRC/ks/menu.h"

void MenuEntry::OnDeactivate() {
}

// 0x00270540 MenuText__9MenuEntryPci
#include "KS/SRC/ks/menu.h"

int MenuEntry::MenuText(char* text, int length) { if (length > 0) *text = 0; return 0; }

// 0x00270918 SetValue__26MenuEntryFunctionFloatEditf
#include "KS/SRC/ks/menu.h"

void MenuEntryFunctionFloatEdit::SetValue(float value) {
    *target = value;
}

// 0x00270928 GetValue__26MenuEntryFunctionFloatEdit
class MenuEntryFunctionFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFunctionFloatEdit::GetValue() { return value ? *value : 0.0f; }

// 0x00270A68 OnMenuClose__7Submenu
#include "KS/SRC/ks/menu.h"

void Submenu::OnMenuClose() {
    parent = 0;
    system = 0;
}

// 0x00270BB8 GetValue__16MenuEntryIntEdit
class MenuEntryIntEdit { char padding[0xC]; int* value; public: int GetValue(); };
int MenuEntryIntEdit::GetValue() { return value ? *value : 0; }

// 0x00270CD8 SetValue__18MenuEntryFloatEditf
#include "KS/SRC/ks/menu.h"

void MenuEntryFloatEdit::SetValue(float value) {
    *target = value;
}

// 0x00270CE8 GetValue__18MenuEntryFloatEdit
class MenuEntryFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFloatEdit::GetValue() { return value ? *value : 0.0f; }

// 0x002706D0 Enable__14MenuEntryTitle
#include "KS/SRC/ks/menu.h"

__asm__(".equ Disable__9MenuEntry, 0x0023EE50");
void MenuEntryTitle::Enable() { MenuEntry::Disable(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002706F0 Disable__14MenuEntryTitle
#include "KS/SRC/ks/menu.h"

__asm__(".equ Disable__9MenuEntry, 0x0023EE50");
void MenuEntryTitle::Disable() { MenuEntry::Disable(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002707E8 OnButtonPress__17MenuEntryFunctioni
#include "KS/SRC/ks/menu.h"

void MenuEntryFunction::OnButtonPress(int button) { if (function) (*function)(this, button); }

// 0x002708E8 OnMenuOpen__26MenuEntryFunctionFloatEditP4MenuP10MenuSystem
#include "KS/SRC/ks/menu.h"

__asm__(".equ OnMenuOpen__9MenuEntryP4MenuP10MenuSystem, 0x0023EF90");
__asm__(".equ FixValue__26MenuEntryFunctionFloatEdit, 0x0023FF48");
void MenuEntryFunctionFloatEdit::OnMenuOpen(Menu *menu, MenuSystem *system) { MenuEntry::OnMenuOpen(menu, system); FixValue(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00270B50 OnMenuOpen__16MenuEntryIntEditP4MenuP10MenuSystem
#include "KS/SRC/ks/menu.h"

__asm__(".equ OnMenuOpen__9MenuEntryP4MenuP10MenuSystem, 0x0023EF90");
__asm__(".equ FixValue__16MenuEntryIntEdit, 0x0023F4D8");
void MenuEntryIntEdit::OnMenuOpen(Menu *menu, MenuSystem *system) { MenuEntry::OnMenuOpen(menu, system); FixValue(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00270CA8 OnMenuOpen__18MenuEntryFloatEditP4MenuP10MenuSystem
#include "KS/SRC/ks/menu.h"

__asm__(".equ OnMenuOpen__9MenuEntryP4MenuP10MenuSystem, 0x0023EF90");
__asm__(".equ FixValue__18MenuEntryFloatEdit, 0x0023FB98");
void MenuEntryFloatEdit::OnMenuOpen(Menu *menu, MenuSystem *system) { MenuEntry::OnMenuOpen(menu, system); FixValue(); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x002704B8 _$_9MenuEntry
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_9MenuEntry");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002705C8 _$_14MenuEntryLabel
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_14MenuEntryLabel");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002706A0 _$_14MenuEntryTitle
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_14MenuEntryTitle");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002707B8 _$_17MenuEntryFunction
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17MenuEntryFunction");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002708B8 _$_26MenuEntryFunctionFloatEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_26MenuEntryFunctionFloatEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002709F0 _$_7Submenu
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_7Submenu");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270B20 _$_16MenuEntryIntEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_16MenuEntryIntEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270D60 __tf17MenuEntryEnumEdit
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/menu.h"

extern "C" void **menu_entry_enum_base_rtti()
    __asm__("__tf17MenuEntryListEdit");
extern "C" void *menu_entry_enum_type[]
    __asm__("__ti17MenuEntryEnumEdit");
extern "C" const char menu_entry_enum_name[];
extern "C" void *menu_entry_enum_base_type[]
    __asm__("__ti17MenuEntryListEdit");

__asm__(".equ __tf17MenuEntryListEdit, 0x0026E800");
__asm__(".equ __ti17MenuEntryEnumEdit, 0x005A3D10");
__asm__(".equ menu_entry_enum_name, 0x004E51A0");
__asm__(".equ __ti17MenuEntryListEdit, 0x005A3CF0");

extern "C" void **menu_entry_enum_rtti()
    __asm__("__tf17MenuEntryEnumEdit");
void **menu_entry_enum_rtti()
{
    if (!menu_entry_enum_type[0]) {
        menu_entry_enum_base_rtti();
        __rtti_si(
            menu_entry_enum_type,
            menu_entry_enum_name,
            menu_entry_enum_base_type
        );
    }
    return menu_entry_enum_type;
}

// 0x00270C78 _$_18MenuEntryFloatEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_18MenuEntryFloatEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270D00 _$_17MenuEntryListEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17MenuEntryListEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270D30 _$_24MenuEntryStringxListEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_24MenuEntryStringxListEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270DB0 _$_17MenuEntryEnumEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17MenuEntryEnumEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00270B80 SetValue__16MenuEntryIntEditi
class MenuEntryIntEdit {
    char padding[0x0C];
    int *tint;
    int lo;
    int hi;

public:
    void SetValue(int value);
};

void MenuEntryIntEdit::SetValue(int value)
{
    if (tint && value >= lo && value <= hi)
        *tint = value;
}

// 0x002703D0 __tf4Menu
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120F8"); asm(".equ type_name, 0x004E50A8");
extern "C" void *GetTypeInfo() __asm__("__tf4Menu");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00270470 __tf9MenuEntry
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512100"); asm(".equ type_name, 0x004E50B0");
extern "C" void *GetTypeInfo() __asm__("__tf9MenuEntry");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x00270410 _$_4Menu
extern "C" void close_menu(void *,bool)
    __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int)
    __asm__("Resize__4Menui");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub, 0x0023E470");
__asm__(".equ Resize__4Menui, 0x0023E2B0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ menu_vtable, 0x004D5D48");
struct menu_layout { char padding[0x1c]; const void *vtable; };
extern "C" void destroy_menu(menu_layout *self,int flags)
    __asm__("_$_4Menu");
void destroy_menu(menu_layout *self,int flags) {
    self->vtable=menu_vtable;
    close_menu(self,true);
    resize_menu(self,0);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
