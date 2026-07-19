// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001AA2E8)
// 0x001AA2E8 Select__14SoundMenuClassi
class SoundMenuClass {
public:
    void Select(int entry_index);
};

void SoundMenuClass::Select(int entry_index) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001ACBF0)
// 0x001ACBF0 Select__14TrickMenuClassi
class TrickMenuClass {
public:
    void Select(int controller);
};

void TrickMenuClass::Select(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001ACBF8)
// 0x001ACBF8 OnCross__14TrickMenuClassi
class TrickMenuClass {
public:
    void OnCross(int controller);
};

void TrickMenuClass::OnCross(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0310)
// 0x001B0310 OnCircle__17PlaylistMenuClassi
class PlaylistMenuClass {
public:
    void OnCircle(int controller);
};

void PlaylistMenuClass::OnCircle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0730)
// 0x001B0730 OnL2__15ReplayMenuClassi
class ReplayMenuClass {
public:
    void OnL2(int controller);
};

void ReplayMenuClass::OnL2(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B0A20)
// 0x001B0A20 OnCircle__15ReplayMenuClassi
class ReplayMenuClass {
public:
    void OnCircle(int controller);
};

void ReplayMenuClass::OnCircle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C08)
// 0x001B1C08 OnUp__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnUp(int controller);
};

void GoalsMenuClass::OnUp(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C10)
// 0x001B1C10 OnDown__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnDown(int controller);
};

void GoalsMenuClass::OnDown(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B1C18)
// 0x001B1C18 OnCross__14GoalsMenuClassi
class GoalsMenuClass {
public:
    void OnCross(int controller);
};

void GoalsMenuClass::OnCross(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B4BD8)
// 0x001B4BD8 IsDebugMenuDisplayed__Fv
struct MenuSystem { char padding[0x470]; bool active; };
extern MenuSystem* menus;
__asm__(".equ menus, 0x00424EE8");
bool IsDebugMenuDisplayed() { return menus->active != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5880)
// 0x001A5880 OnStart__14PauseMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class PauseMenuClass : public FEMenu { public: void OnStart(int command); };
void PauseMenuClass::OnStart(int command) { FEMenu::OnStart(command); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A5FD8)
// 0x001A5FD8 OnStart__24TimeAttackPauseMenuClassi
class FEMenu { public: void OnStart(int command); };
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class TimeAttackPauseMenuClass : public FEMenu { public: void OnStart(int command); };
void TimeAttackPauseMenuClass::OnStart(int command) { FEMenu::OnStart(command); __asm__ volatile(""); }
#endif
