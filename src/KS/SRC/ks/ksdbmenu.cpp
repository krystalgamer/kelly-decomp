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

#if defined(KELLY_DECOMP_FUNCTION_00235B70)
// 0x00235B70 OnOpen__10KSMainMenuP4MenuP10MenuSystem
class MenuSystem;
class Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
__asm__(".equ OnOpen__4MenuP4MenuP10MenuSystem, 0x0023EAE0");
class KSMainMenu : public Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
void KSMainMenu::OnOpen(Menu *previous, MenuSystem *system) { register char *globals __asm__("$2") = (char *)0x00420000; __asm__ volatile("" : "+r"(globals)); *(int *)(globals + 0x4ed8) = 0; Menu::OnOpen(previous, system); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236630)
// 0x00236630 ToggleShowRumble__FP9MenuEntryi
struct rumble_manager_layout { char padding[0x10]; bool draw_state; };
extern rumble_manager_layout rumbleMan;
__asm__(".equ rumbleMan, 0x004253C0");
class MenuEntry;
bool ToggleShowRumble(MenuEntry *entry, int button) { if (button == 7) rumbleMan.draw_state = !rumbleMan.draw_state; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236600)
// 0x00236600 WriteRumbleButton__FP9MenuEntryi
class MenuEntry;
extern char callback_object[];
void CallbackMethod(void *self) __asm__("writeLevels__13rumbleManager");
__asm__(".equ callback_object, 0x004253C0");
__asm__(".equ writeLevels__13rumbleManager, 0x00242810");
bool WriteRumbleButton(MenuEntry *entry, int button) { if (button == 7) CallbackMethod(callback_object); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236658)
// 0x00236658 ReplayPlayButton__FP9MenuEntryi
class MenuEntry;
extern char callback_object[];
void CallbackMethod(void *self) __asm__("Play__8KSReplay");
__asm__(".equ callback_object, 0x004252A8");
__asm__(".equ Play__8KSReplay, 0x0023C6A0");
bool ReplayPlayButton(MenuEntry *entry, int button) { if (button == 7) CallbackMethod(callback_object); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236698)
// 0x00236698 ReplaySlowButton__FP9MenuEntryi
class MenuEntry;
extern char callback_object[];
void CallbackMethod(void *self) __asm__("SpeedSlow__8KSReplay");
__asm__(".equ callback_object, 0x004252A8");
__asm__(".equ SpeedSlow__8KSReplay, 0x0023CA38");
bool ReplaySlowButton(MenuEntry *entry, int button) { if (button == 7) CallbackMethod(callback_object); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002367C0)
// 0x002367C0 ReplayRestartButton__FP9MenuEntryi
class MenuEntry;
extern char callback_object[];
void CallbackMethod(void *self) __asm__("Restart__8KSReplay");
__asm__(".equ callback_object, 0x004252A8");
__asm__(".equ Restart__8KSReplay, 0x0023C978");
bool ReplayRestartButton(MenuEntry *entry, int button) { if (button == 7) CallbackMethod(callback_object); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236948)
// 0x00236948 MemoryScreen__FP9MenuEntryi
class MenuEntry;

struct debug_flags {
    bool flag0 : 1;
    bool flag1 : 1;
    bool flag2 : 1;
    bool flag3 : 1;
    bool flag4 : 1;
    bool flag5 : 1;
    bool flag6 : 1;
    bool flag7 : 1;
    bool mem_free_screen : 1;
};

extern debug_flags g_debug;
__asm__(".equ g_debug, 0x00431898");

bool MemoryScreen(MenuEntry *entry, int button)
{
    if (button == 7) {
        if (g_debug.mem_free_screen)
            g_debug.mem_free_screen = 0;
        else
            g_debug.mem_free_screen = 1;
    }
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00236980)
// 0x00236980 ExitLevel__FP9MenuEntryi
class MenuEntry;
class MenuSystem { public: void CloseAllMenus(); };
class game { public: void end_level(); };
class app {
    char padding[0x10];
    game *the_game;
public:
    game *get_game() { return the_game; }
};
extern MenuSystem *menus;
extern app *application;
asm(".equ menus, 0x00424EE8");
asm(".equ application, 0x0046AC18");
asm(".equ CloseAllMenus__10MenuSystem, 0x00241060");
asm(".equ end_level__4game, 0x00283598");
bool ExitLevel(MenuEntry *entry, int buttonid)
{
    if (buttonid == 7) {
        menus->CloseAllMenus();
        application->get_game()->end_level();
    }
    return true;
}
#endif
