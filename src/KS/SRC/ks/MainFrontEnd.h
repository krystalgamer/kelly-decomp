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
PanelQuad *OptionsMenu::GetPointer(const char *name) { PanelQuad *result = panel.GetPointer(name); __asm__ volatile(""); return result; }
#endif
