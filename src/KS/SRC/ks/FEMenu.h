// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DA4F0)
// 0x001DA4F0 Load__11FEMenuEntry
class FEMenuEntry {
public:
    void Load();
};

void FEMenuEntry::Load() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA4F8)
// 0x001DA4F8 OnSelect__11FEMenuEntry
class FEMenuEntry {
public:
    void OnSelect();
};

void FEMenuEntry::OnSelect() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA500)
// 0x001DA500 GetDisable__11FEMenuEntry
class FEMenuEntry {
    char padding[0x14];
    bool disabled;
public:
    bool GetDisable();
};

bool FEMenuEntry::GetDisable() {
    return disabled;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA508)
// 0x001DA508 TurnOn__11FEMenuEntryb
class FEMenuEntry {
public:
    void TurnOn(bool arg0);
};

void FEMenuEntry::TurnOn(bool arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA510)
// 0x001DA510 SetNoFlash__11FEMenuEntryb
class FEMenuEntry {
    char padding[0x40];
    bool no_flash;
public:
    void SetNoFlash(bool value);
};

void FEMenuEntry::SetNoFlash(bool value) {
    no_flash = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA518)
// 0x001DA518 GetHighlightIntensity__11FEMenuEntry
class FEMenuEntry {
    char padding[0x28];
    float highlight_intensity;
public:
    float GetHighlightIntensity();
};

float FEMenuEntry::GetHighlightIntensity() {
    return highlight_intensity;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA780)
// 0x001DA780 SetColor__11FEMenuEntryG7color32
class color32 {
public:
    unsigned int value;
    color32(unsigned int initial = 0) : value(initial) {}
};

struct menu_text {
    char padding[0x48];
    color32 color;
};

class FEMenuEntry {
    char padding[0x24];
    menu_text* text;
public:
    void SetColor(color32 value);
};

void FEMenuEntry::SetColor(color32 value) {
    text->color = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA8B0)
// 0x001DA8B0 GetColor__11FEMenuEntry
class color32 {
public:
    unsigned int value;
    color32(unsigned int initial = 0) : value(initial) {}
};

struct menu_text {
    char padding[0x48];
    color32 color;
};

class FEMenuEntry {
    char padding[0x24];
    menu_text* text;
public:
    color32 GetColor();
};

color32 FEMenuEntry::GetColor() {
    return text->color;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA950)
// 0x001DA950 OnHighlight__11FEMenuEntryb
class FEMenuEntry {
public:
    void OnHighlight(bool arg0);
};

void FEMenuEntry::OnHighlight(bool arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA9A8)
// 0x001DA9A8 setBack__6FEMenuP6FEMenui
class FEMenu {
    char padding[0x54];
    FEMenu* back;
    int back_num;
public:
    void setBack(FEMenu* menu, int number);
};

void FEMenu::setBack(FEMenu* menu, int number) {
    back = menu;
    back_num = number;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA9B8)
// 0x001DA9B8 Load__6FEMenub
class FEMenu {
public:
    void Load(bool arg0);
};

void FEMenu::Load(bool arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA9F0)
// 0x001DA9F0 DrawTop__6FEMenu
class FEMenu {
public:
    void DrawTop();
};

void FEMenu::DrawTop() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA9F8)
// 0x001DA9F8 UpdateInScene__6FEMenu
class FEMenu {
public:
    void UpdateInScene();
};

void FEMenu::UpdateInScene() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAA28)
// 0x001DAA28 OnUnactivate__6FEMenuP6FEMenu
class FEMenu;

class FEMenu {
public:
    void OnUnactivate(FEMenu* arg0);
};

void FEMenu::OnUnactivate(FEMenu* arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAD0)
// 0x001DAAD0 OnLeft__6FEMenui
class FEMenu {
public:
    void OnLeft(int arg0);
};

void FEMenu::OnLeft(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAD8)
// 0x001DAAD8 OnRight__6FEMenui
class FEMenu {
public:
    void OnRight(int arg0);
};

void FEMenu::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAE0)
// 0x001DAAE0 OnSquare__6FEMenui
class FEMenu {
public:
    void OnSquare(int arg0);
};

void FEMenu::OnSquare(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAE8)
// 0x001DAAE8 OnCircle__6FEMenui
class FEMenu {
public:
    void OnCircle(int arg0);
};

void FEMenu::OnCircle(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAF0)
// 0x001DAAF0 OnL1__6FEMenui
class FEMenu {
public:
    void OnL1(int arg0);
};

void FEMenu::OnL1(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAAF8)
// 0x001DAAF8 OnR1__6FEMenui
class FEMenu {
public:
    void OnR1(int arg0);
};

void FEMenu::OnR1(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB00)
// 0x001DAB00 OnL2__6FEMenui
class FEMenu {
public:
    void OnL2(int arg0);
};

void FEMenu::OnL2(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB08)
// 0x001DAB08 OnR2__6FEMenui
class FEMenu {
public:
    void OnR2(int arg0);
};

void FEMenu::OnR2(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB10)
// 0x001DAB10 OnAnyButtonPress__6FEMenuii
class FEMenu {
public:
    void OnAnyButtonPress(int arg0, int arg1);
};

void FEMenu::OnAnyButtonPress(int arg0, int arg1) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB18)
// 0x001DAB18 OnButtonRelease__6FEMenuii
class FEMenu {
public:
    void OnButtonRelease(int arg0, int arg1);
};

void FEMenu::OnButtonRelease(int arg0, int arg1) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB20)
// 0x001DAB20 GetActive__6FEMenu
class FEMenu {
    char padding[0x60];
    FEMenu* active;
public:
    FEMenu* GetActive();
};

FEMenu* FEMenu::GetActive() {
    return active;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB28)
// 0x001DAB28 Select__6FEMenui
class FEMenu {
public:
    void Select(int arg0);
};

void FEMenu::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DADD8)
// 0x001DADD8 GetPanel__8FrontEnd
struct PanelFile {};

class FrontEnd {
    char padding[0x80];
    PanelFile panel;
public:
    PanelFile* GetPanel();
};

PanelFile* FrontEnd::GetPanel() {
    return &panel;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAE50)
// 0x001DAE50 SetPQIndices__8FrontEnd
class FrontEnd {
public:
    void SetPQIndices();
};

void FrontEnd::SetPQIndices() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAF50)
// 0x001DAF50 SetPQ__20FEGraphicalMenuEntryP9PanelQuad
class PanelQuad {
    char padding[0x110];
    bool on_menu;

public:
    void AddedToMenu() {
        on_menu = true;
    }
};
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad* pq; public: void SetPQ(PanelQuad* value); };
void FEGraphicalMenuEntry::SetPQ(PanelQuad* value) {
    pq = value;
    value->AddedToMenu();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAF60)
// 0x001DAF60 SetPQHigh__20FEGraphicalMenuEntryP9PanelQuad
class PanelQuad {
    char padding[0x110];
    bool on_menu;

public:
    void AddedToMenu() {
        on_menu = true;
    }
};
class FEGraphicalMenuEntry { char padding[0x68]; PanelQuad* pq_high; public: void SetPQHigh(PanelQuad* value); };
void FEGraphicalMenuEntry::SetPQHigh(PanelQuad* value) {
    pq_high = value;
    value->AddedToMenu();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB528)
// 0x001DB528 setVis__15FETextMultiMenuP11FEMenuEntry
class FEMenuEntry;

class FETextMultiMenu {
public:
    void setVis(FEMenuEntry* arg0);
};

void FETextMultiMenu::setVis(FEMenuEntry* arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB530)
// 0x001DB530 Init__15FETextMultiMenu
class FETextMultiMenu {
public:
    void Init();
};

void FETextMultiMenu::Init() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB970)
// 0x001DB970 Exit__12FEMenuSystem
class FEMenuSystem {
public:
    void Exit();
};

void FEMenuSystem::Exit() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB978)
// 0x001DB978 startDraw__12FEMenuSystemib
class FEMenuSystem {
public:
    void startDraw(int arg0, bool arg1);
};

void FEMenuSystem::startDraw(int arg0, bool arg1) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB980)
// 0x001DB980 endDraw__12FEMenuSystemb
class FEMenuSystem {
public:
    void endDraw(bool arg0);
};

void FEMenuSystem::endDraw(bool arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB988)
// 0x001DB988 GetActiveMenu__12FEMenuSystem
class FEMenu;
class FEMenuSystem { char padding[0x74]; FEMenu** menus; char padding_to_active[0x4]; int active; public: FEMenu* GetActiveMenu(); };
FEMenu* FEMenuSystem::GetActiveMenu() { return menus[active]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA830)
// 0x001DA830 GetWidth__11FEMenuEntry
class MultiLineString { public: float getWidth(); };
__asm__(".equ getWidth__15MultiLineString, 0x00148C08");
class FEMenuEntry { char padding[0x24]; MultiLineString *text; public: float GetWidth(); };
float FEMenuEntry::GetWidth() { float result = text->getWidth(); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DADB8)
// 0x001DADB8 LoadPanel__8FrontEndb
class PanelFile { public: void Load(bool floating); };
__asm__(".equ Load__9PanelFileb, 0x00152510");
class FrontEnd { char padding[0x80]; PanelFile panel; public: void LoadPanel(bool floating); };
void FrontEnd::LoadPanel(bool floating) { panel.Load(floating); __asm__ volatile(""); }
#endif
