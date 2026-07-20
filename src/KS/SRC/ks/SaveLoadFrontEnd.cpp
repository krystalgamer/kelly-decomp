// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0019B668)
// 0x0019B668 getActiveCard__16SaveLoadFrontEnd
class NamesMenu {
    char padding[0x1FC];
    int active_card;
public:
    int ActiveCard() {
        return active_card;
    }
};

class SaveLoadFrontEnd {
    char padding[0x32F4];
    NamesMenu* NameMenu;
public:
    int getActiveCard();
};

int SaveLoadFrontEnd::getActiveCard() {
    return NameMenu->ActiveCard();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0019BF38)
// 0x0019BF38 DialogActive__16SaveLoadFrontEnd
class FEMenu;
class SaveLoadFrontEnd { char padding_to_active[0x60]; FEMenu* active; char padding_to_dialog[0x3298]; FEMenu* dialogMenu; public: bool DialogActive(); };
bool SaveLoadFrontEnd::DialogActive() { return active == dialogMenu; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0019EDD8)
// 0x0019EDD8 Init__9NamesMenu
class NamesMenu {
    char padding_to_parent[0x64];
    void* parent;
    char padding_to_sl_parent[0x108];
    void* sl_parent;
public:
    void Init();
};

void NamesMenu::Init() {
    sl_parent = parent;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A0808)
// 0x001A0808 FindAdjusted__9NamesMenui
class NamesMenu {
public:
    static int FindAdjusted(int active);
};

int NamesMenu::FindAdjusted(int active) {
    return active;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A0810)
// 0x001A0810 FindActive__9NamesMenui
class NamesMenu {
public:
    static int FindActive(int adjusted);
};

int NamesMenu::FindActive(int adjusted) {
    return adjusted;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A1CF8)
// 0x001A1CF8 Init__12KeyboardMenu
class KeyboardMenu {
    char padding_to_parent[0x64];
    void* parent;
    char padding_to_sl_parent[0x1A4];
    void* sl_parent;
public:
    void Init();
};

void KeyboardMenu::Init() {
    sl_parent = parent;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A07B0)
// 0x001A07B0 ActiveFile__9NamesMenu
struct FEMenuEntry { int entry_num; };
class NamesMenu { char padding0[0x4c]; FEMenuEntry *highlighted; char padding1[0x108]; FEMenuEntry *secondary_cursor; public: int ActiveFile(); };
int NamesMenu::ActiveFile() { if (!highlighted) return -1; else return secondary_cursor->entry_num; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A2B30)
// 0x001A2B30 OnUnactivate__12KeyboardMenuP6FEMenu
class FEMenu;
class KeyboardMenu { public: void TurnPQ(bool value); void OnUnactivate(FEMenu *menu); };
__asm__(".equ TurnPQ__12KeyboardMenub, 0x001A1C10");
void KeyboardMenu::OnUnactivate(FEMenu *menu) { TurnPQ(false); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0019B738)
// 0x0019B738 ReadyToAccess__16SaveLoadFrontEndii
class SaveLoadFrontEnd { public: void SetDState(int state, bool ready, bool failed); void ReadyToAccess(int ignored, int state); };
__asm__(".equ SetDState__16SaveLoadFrontEndibb, 0x0019B760");
void SaveLoadFrontEnd::ReadyToAccess(int ignored, int state) { SetDState(state, true, false); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
