// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00235E28)
// 0x00235E28 ProfButton__FP9MenuEntryi
class MenuEntry;
extern unsigned char profiler_enabled;
__asm__(".equ profiler_enabled, 0x00431AFF");
bool ProfButton(MenuEntry* entry, int button) { profiler_enabled = 1; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00235E40)
// 0x00235E40 particles_test__FP9MenuEntryi
class MenuEntry;

bool particles_test(MenuEntry* entry, int buttonid) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236688)
// 0x00236688 ReplayFwdButton__FP9MenuEntryi
class MenuEntry;

bool ReplayFwdButton(MenuEntry* entry, int buttonid) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236690)
// 0x00236690 ReplayRewButton__FP9MenuEntryi
class MenuEntry;

bool ReplayRewButton(MenuEntry* entry, int buttonid) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00235B90)
// 0x00235B90 OnClose__10KSMainMenub
class Menu { public: void OnClose(bool toparent); };
__asm__(".equ OnClose__4Menub, 0x0023EB70");
class KSMainMenu : public Menu { public: void OnClose(bool toparent); };
void KSMainMenu::OnClose(bool toparent) { Menu::OnClose(toparent); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
