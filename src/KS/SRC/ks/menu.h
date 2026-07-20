// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002704F8)
// 0x002704F8 OnTick__9MenuEntryf
class MenuEntry {
public:
    void OnTick(float arg0);
};

void MenuEntry::OnTick(float arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270500)
// 0x00270500 OnButtonPress__9MenuEntryi
class MenuEntry {
public:
    void OnButtonPress(int arg0);
};

void MenuEntry::OnButtonPress(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270508)
// 0x00270508 OnButtonRelease__9MenuEntryi
class MenuEntry {
public:
    void OnButtonRelease(int arg0);
};

void MenuEntry::OnButtonRelease(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270510)
// 0x00270510 OnHide__9MenuEntry
class MenuEntry {
public:
    void OnHide();
};

void MenuEntry::OnHide() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270518)
// 0x00270518 OnShow__9MenuEntry
class MenuEntry {
public:
    void OnShow();
};

void MenuEntry::OnShow() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270520)
// 0x00270520 OnEnable__9MenuEntry
class MenuEntry {
public:
    void OnEnable();
};

void MenuEntry::OnEnable() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270528)
// 0x00270528 OnDisable__9MenuEntry
class MenuEntry {
public:
    void OnDisable();
};

void MenuEntry::OnDisable() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270530)
// 0x00270530 OnActivate__9MenuEntry
class MenuEntry {
public:
    void OnActivate();
};

void MenuEntry::OnActivate() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270538)
// 0x00270538 OnDeactivate__9MenuEntry
class MenuEntry {
public:
    void OnDeactivate();
};

void MenuEntry::OnDeactivate() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270540)
// 0x00270540 MenuText__9MenuEntryPci
class MenuEntry { public: int MenuText(char* text, int length); };
int MenuEntry::MenuText(char* text, int length) { if (length > 0) *text = 0; return 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270918)
// 0x00270918 SetValue__26MenuEntryFunctionFloatEditf
class MenuEntryFunctionFloatEdit {
    char padding[0xC];
    float* tfloat;
public:
    void SetValue(float value);
};

void MenuEntryFunctionFloatEdit::SetValue(float value) {
    *tfloat = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270928)
// 0x00270928 GetValue__26MenuEntryFunctionFloatEdit
class MenuEntryFunctionFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFunctionFloatEdit::GetValue() { return value ? *value : 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270A68)
// 0x00270A68 OnMenuClose__7Submenu
class Submenu {
    char padding[0x10];
    void* parent;
    void* system;
public:
    void OnMenuClose();
};

void Submenu::OnMenuClose() {
    parent = 0;
    system = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270BB8)
// 0x00270BB8 GetValue__16MenuEntryIntEdit
class MenuEntryIntEdit { char padding[0xC]; int* value; public: int GetValue(); };
int MenuEntryIntEdit::GetValue() { return value ? *value : 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270CD8)
// 0x00270CD8 SetValue__18MenuEntryFloatEditf
class MenuEntryFloatEdit {
    char padding[0xC];
    float* tfloat;
public:
    void SetValue(float value);
};

void MenuEntryFloatEdit::SetValue(float value) {
    *tfloat = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270CE8)
// 0x00270CE8 GetValue__18MenuEntryFloatEdit
class MenuEntryFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFloatEdit::GetValue() { return value ? *value : 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002706D0)
// 0x002706D0 Enable__14MenuEntryTitle
class MenuEntry { public: void Disable(); };
__asm__(".equ Disable__9MenuEntry, 0x0023EE50");
class MenuEntryTitle : public MenuEntry { public: void Enable(); };
void MenuEntryTitle::Enable() { MenuEntry::Disable(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002706F0)
// 0x002706F0 Disable__14MenuEntryTitle
class MenuEntry { public: void Disable(); };
__asm__(".equ Disable__9MenuEntry, 0x0023EE50");
class MenuEntryTitle : public MenuEntry { public: void Disable(); };
void MenuEntryTitle::Disable() { MenuEntry::Disable(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002707E8)
// 0x002707E8 OnButtonPress__17MenuEntryFunctioni
class MenuEntry;
typedef bool MenuEntryButtonFunction(MenuEntry *entry, int button);
class MenuEntryFunction { char padding[0x0c]; MenuEntryButtonFunction *fn; public: void OnButtonPress(int button); };
void MenuEntryFunction::OnButtonPress(int button) { if (fn) (*fn)((MenuEntry *)this, button); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002708E8)
// 0x002708E8 OnMenuOpen__26MenuEntryFunctionFloatEditP4MenuP10MenuSystem
class Menu; class MenuSystem;
class MenuEntry { public: void OnMenuOpen(Menu *menu, MenuSystem *system); };
__asm__(".equ OnMenuOpen__9MenuEntryP4MenuP10MenuSystem, 0x0023EF90");
class MenuEntryFunctionFloatEdit : public MenuEntry { public: void OnMenuOpen(Menu *menu, MenuSystem *system); void FixValue(); };
__asm__(".equ FixValue__26MenuEntryFunctionFloatEdit, 0x0023FF48");
void MenuEntryFunctionFloatEdit::OnMenuOpen(Menu *menu, MenuSystem *system) { MenuEntry::OnMenuOpen(menu, system); FixValue(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270B50)
// 0x00270B50 OnMenuOpen__16MenuEntryIntEditP4MenuP10MenuSystem
class Menu; class MenuSystem;
class MenuEntry { public: void OnMenuOpen(Menu *menu, MenuSystem *system); };
__asm__(".equ OnMenuOpen__9MenuEntryP4MenuP10MenuSystem, 0x0023EF90");
class MenuEntryIntEdit : public MenuEntry { public: void OnMenuOpen(Menu *menu, MenuSystem *system); void FixValue(); };
__asm__(".equ FixValue__16MenuEntryIntEdit, 0x0023F4D8");
void MenuEntryIntEdit::OnMenuOpen(Menu *menu, MenuSystem *system) { MenuEntry::OnMenuOpen(menu, system); FixValue(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
