// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DC668)
// 0x001DC668 Select__11OptionsMenu
class OptionsMenu {
public:
    void Select();
};

void OptionsMenu::Select() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC670)
// 0x001DC670 GetPointer__11OptionsMenuPCc
class PanelQuad;
class PanelFile { public: PanelQuad *GetPointer(const char *name); };
__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");
class OptionsMenu { char padding[0x100]; PanelFile panel; public: PanelQuad *GetPointer(const char *name); };
PanelQuad *OptionsMenu::GetPointer(const char *name) { PanelQuad *result = panel.GetPointer(name); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC690)
// 0x001DC690 _$_15MultiplayerMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void MultiplayerMenuDtor(void *self) __asm__("_$_15MultiplayerMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void MultiplayerMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DC978)
// 0x001DC978 _$_12FreesurfMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void FreesurfMenuDtor(void *self) __asm__("_$_12FreesurfMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void FreesurfMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
