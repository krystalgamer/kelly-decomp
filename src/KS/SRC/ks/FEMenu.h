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

#if defined(KELLY_DECOMP_FUNCTION_001DAA80)
// 0x001DAA80 OnDown__6FEMenui
#include "KS/SRC/ks/FEMenu_shared.h"
void FEMenu::OnDown(int command) {
    if (active)
        active->OnDown(command);
    else {
        FEMenuNextDispatchVTable *table = *(FEMenuNextDispatchVTable **)((char *)this + 0x74);
        table->next((char *)this + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB258)
// 0x001DB258 Mask__15FEGraphicalMenuP9PanelQuadf
#include "KS/SRC/ks/FEPanel_shared.h"
#define KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
#define KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#undef KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
void FEGraphicalMenu::Mask(PanelQuad *quad, float amount) {
    if (parent)
        ((FEGraphicalMenu *)parent)->Mask(quad, amount);
    else
        FrontEnd::Mask(quad, amount);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB208)
// 0x001DB208 ChangeFade__15FEGraphicalMenuP9PanelQuadbT2f
#include "KS/SRC/ks/FEPanel_shared.h"
#define KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
#define KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#undef KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
__asm__(".equ ChangeFade__9PanelQuadbT1f, 0x0014D078");
void FEGraphicalMenu::ChangeFade(
    PanelQuad *quad,
    bool start,
    bool fade_in,
    float time
) {
    if (parent)
        ((FEGraphicalMenu *)parent)->ChangeFade(quad, start, fade_in, time);
    else if (quad) {
        quad->ChangeFade(start, fade_in, time);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB1B8)
// 0x001DB1B8 ToggleOn__15FEGraphicalMenuP9PanelQuad
#include "KS/SRC/ks/FEPanel_shared.h"
#define KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
#define KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FE_PANEL_HELPERS
#undef KELLY_DECOMP_BUILT_FEMENU_VTABLE_TAIL
void FEGraphicalMenu::ToggleOn(PanelQuad *quad) {
    if (parent)
        ((FEGraphicalMenu *)parent)->ToggleOn(quad);
    else
        FrontEnd::ToggleOn(quad);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DADE0)
// 0x001DADE0 SetPanel__8FrontEndG7stringx
#include "KS/SRC/ks/FEMenu_shared.h"
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ SetFilename__9PanelFileG7stringx, 0x00152360");
void FrontEnd::SetPanel(stringx panel_path) {
    panel.SetFilename(panel_path);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA5E0)
// 0x001DA5E0 SetLocation3D__11FEMenuEntryG8vector3d
#include "KS/SRC/ks/FEPanel_shared.h"
#define KELLY_DECOMP_FULL_FEMENU_ENTRY
#include "KS/SRC/ks/FEMenu_shared.h"
#undef KELLY_DECOMP_FULL_FEMENU_ENTRY
__asm__(".equ SetLocation3D__10TextStringG8vector3d, 0x001D8770");
void FEMenuEntry::SetLocation3D(vector3d location) {
    text->SetLocation3D(location);
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
float FEMenuEntry::GetWidth() { float result = text->getWidth(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DADB8)
// 0x001DADB8 LoadPanel__8FrontEndb
class PanelFile { public: void Load(bool floating); };
__asm__(".equ Load__9PanelFileb, 0x00152510");
class FrontEnd { char padding[0x80]; PanelFile panel; public: void LoadPanel(bool floating); };
void FrontEnd::LoadPanel(bool floating) { panel.Load(floating); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB140)
// 0x001DB140 Add__15FEGraphicalMenuP11FEMenuEntry
class FEMenuEntry;
class FEMenu { public: void Add(FEMenuEntry *entry); };
__asm__(".equ Add__6FEMenuP11FEMenuEntry, 0x001566B8");
class FEGraphicalMenu : public FEMenu { public: void Add(FEMenuEntry *entry); };
void FEGraphicalMenu::Add(FEMenuEntry *entry) { FEMenu::Add(entry); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB470)
// 0x001DB470 _$_15FETextMultiMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void FETextMultiMenuDtor(void *self) __asm__("_$_15FETextMultiMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void FETextMultiMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAA00)
// 0x001DAA00 OnActivate__6FEMenui
struct MenuVTable { char padding[0x70]; short adjustment; short padding2; void (*OnActivate)(void *self); };
class FEMenu { char padding[0x74]; MenuVTable *vtable; public: void OnActivate(int submenu); };
void FEMenu::OnActivate(int submenu) { MenuVTable *table = vtable; table->OnActivate((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB538)
// 0x001DB538 OnUp__15FETextMultiMenui
struct MenuVTable { char padding[0x180]; short adjustment; short padding2; void (*call)(void *self); };
class FETextMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnUp(int command); };
void FETextMultiMenu::OnUp(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB560)
// 0x001DB560 OnDown__15FETextMultiMenui
struct MenuVTable { char padding[0x188]; short adjustment; short padding2; void (*call)(void *self); };
class FETextMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnDown(int command); };
void FETextMultiMenu::OnDown(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB588)
// 0x001DB588 OnLeft__15FETextMultiMenui
struct MenuVTable { char padding[0x190]; short adjustment; short padding2; void (*call)(void *self); };
class FETextMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnLeft(int command); };
void FETextMultiMenu::OnLeft(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB5B0)
// 0x001DB5B0 OnRight__15FETextMultiMenui
struct MenuVTable { char padding[0x198]; short adjustment; short padding2; void (*call)(void *self); };
class FETextMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnRight(int command); };
void FETextMultiMenu::OnRight(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB738)
// 0x001DB738 OnUp__11FEMultiMenui
struct MenuVTable { char padding[0x1b0]; short adjustment; short padding2; void (*call)(void *self); };
class FEMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnUp(int command); };
void FEMultiMenu::OnUp(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB760)
// 0x001DB760 OnDown__11FEMultiMenui
struct MenuVTable { char padding[0x1b8]; short adjustment; short padding2; void (*call)(void *self); };
class FEMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnDown(int command); };
void FEMultiMenu::OnDown(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB788)
// 0x001DB788 OnLeft__11FEMultiMenui
struct MenuVTable { char padding[0x1c0]; short adjustment; short padding2; void (*call)(void *self); };
class FEMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnLeft(int command); };
void FEMultiMenu::OnLeft(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB7B0)
// 0x001DB7B0 OnRight__11FEMultiMenui
struct MenuVTable { char padding[0x1c8]; short adjustment; short padding2; void (*call)(void *self); };
class FEMultiMenu { char padding[0x74]; MenuVTable *vtable; public: void OnRight(int command); };
void FEMultiMenu::OnRight(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA520)
// 0x001DA520 SetPos__11FEMenuEntryff
struct text_vtable { char padding[0x58]; short adjustment; short padding2; void (*call)(void *, float, float); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetPos(float x, float y); };
void FEMenuEntry::SetPos(float x, float y) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, x, y); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA550)
// 0x001DA550 SetZ__11FEMenuEntryi
struct text_vtable { char padding[0x70]; short adjustment; short padding2; void (*call)(void *, int); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetZ(int z); };
void FEMenuEntry::SetZ(int z) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, z); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA630)
// 0x001DA630 SetHJustify__11FEMenuEntryQ24Font9HORIZJUST
class Font { public: enum HORIZJUST { HORIZJUST_LEFT }; };
struct text_vtable { char padding[0x20]; short adjustment; short padding2; void (*call)(void *, Font::HORIZJUST); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetHJustify(Font::HORIZJUST value); };
void FEMenuEntry::SetHJustify(Font::HORIZJUST value) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, value); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA660)
// 0x001DA660 SetVJustify__11FEMenuEntryQ24Font8VERTJUST
class Font { public: enum VERTJUST { VERTJUST_TOP }; };
struct text_vtable { char padding[0x28]; short adjustment; short padding2; void (*call)(void *, Font::VERTJUST); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetVJustify(Font::VERTJUST value); };
void FEMenuEntry::SetVJustify(Font::VERTJUST value) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, value); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA690)
// 0x001DA690 SetFade__11FEMenuEntrybT1f
struct text_vtable { char padding[0x78]; short adjustment; short padding2; void (*call)(void *, bool, bool, float); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
struct FEMenuEntry { char padding[0x24]; menu_text *text; };
extern "C" void SetFadeAlias(FEMenuEntry *entry, bool start, bool fade_in, float time) __asm__("SetFade__11FEMenuEntrybT1f");
void SetFadeAlias(FEMenuEntry *entry, bool start, bool fade_in, float time) { text_vtable *table = entry->text->vtable; table->call((char *)entry->text + table->adjustment, start, fade_in, time); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA6C0)
// 0x001DA6C0 SetLineSpacing__11FEMenuEntryi
struct text_vtable { char padding[0xd8]; short adjustment; short padding2; void (*call)(void *, int); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetLineSpacing(int spacing); };
void FEMenuEntry::SetLineSpacing(int spacing) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, spacing); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA6F0)
// 0x001DA6F0 SetFont__11FEMenuEntryP4Font
class Font;
struct text_vtable { char padding[0x30]; short adjustment; short padding2; void (*call)(void *, Font *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetFont(Font *font); };
void FEMenuEntry::SetFont(Font *font) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, font); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA720)
// 0x001DA720 SetBehaviorNF__11FEMenuEntryff
struct text_vtable { char padding[0x100]; short adjustment; short padding2; void (*call)(void *, float, float); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetBehaviorNF(float x, float y); };
void FEMenuEntry::SetBehaviorNF(float x, float y) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, x, y); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA750)
// 0x001DA750 SetBehavior__11FEMenuEntryb
struct text_vtable { char padding[0x108]; short adjustment; short padding2; void (*call)(void *, bool); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetBehavior(bool value); };
void FEMenuEntry::SetBehavior(bool value) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, value); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA790)
// 0x001DA790 SetScale__11FEMenuEntryf
struct text_vtable { char padding[0x50]; short adjustment; short padding2; void (*call)(void *, float); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void SetScale(float value); };
void FEMenuEntry::SetScale(float value) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, value); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA850)
// 0x001DA850 GetX__11FEMenuEntry
struct text_vtable { char padding[0x88]; short adjustment; short padding2; float (*call)(void *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: float GetX(); };
float FEMenuEntry::GetX() { text_vtable *table = text->vtable; return table->call((char *)text + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA880)
// 0x001DA880 GetY__11FEMenuEntry
struct text_vtable { char padding[0x90]; short adjustment; short padding2; float (*call)(void *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: float GetY(); };
float FEMenuEntry::GetY() { text_vtable *table = text->vtable; return table->call((char *)text + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA8C0)
// 0x001DA8C0 getLineNum__11FEMenuEntry
struct text_vtable { char padding[0x130]; short adjustment; short padding2; int (*call)(void *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: int getLineNum(); };
int FEMenuEntry::getLineNum() { text_vtable *table = text->vtable; return table->call((char *)text + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA8F0)
// 0x001DA8F0 GetScale__11FEMenuEntry
struct text_vtable { char padding[0xa8]; short adjustment; short padding2; float (*call)(void *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: float GetScale(); };
float FEMenuEntry::GetScale() { text_vtable *table = text->vtable; return table->call((char *)text + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA920)
// 0x001DA920 AddFont__11FEMenuEntryiP4Font
class Font;
struct text_vtable { char padding[0x138]; short adjustment; short padding2; void (*call)(void *, int, Font *); };
struct menu_text { char padding[0x4c]; text_vtable *vtable; };
class FEMenuEntry { char padding[0x24]; menu_text *text; public: void AddFont(int index, Font *font); };
void FEMenuEntry::AddFont(int index, Font *font) { text_vtable *table = text->vtable; table->call((char *)text + table->adjustment, index, font); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA9C0)
// 0x001DA9C0 Load__6FEMenu
struct frontend_vtable { char padding[0x38]; short adjustment; short padding2; void (*call)(void *, void *); };
class FEMenu { char padding[0x74]; frontend_vtable *vtable; public: void Load(); };
void FEMenu::Load() { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB0D0)
// 0x001DB0D0 Load__15FEGraphicalMenu
struct frontend_vtable { char padding[0x38]; short adjustment; short padding2; void (*call)(void *, void *); };
class FEGraphicalMenu { char padding[0x74]; frontend_vtable *vtable; public: void Load(); };
void FEGraphicalMenu::Load() { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA7C0)
// 0x001DA7C0 UpdateInScene__11FEMenuEntry
struct text_vtable {
    char padding[0xe8];
    short adjustment;
    short padding2;
    void (*update_in_scene)(void *self, bool ignore_scale);
};

class TextString {
public:
    char padding[0x4c];
    text_vtable *vtable;
};

class FEMenuEntry {
    char padding[0x24];
    TextString *text;

public:
    void UpdateInScene();
};

void FEMenuEntry::UpdateInScene() {
    text_vtable *table = text->vtable;
    table->update_in_scene(
        (char *)text + table->adjustment,
        false
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB098)
// 0x001DB098 Load__15FEGraphicalMenub
struct frontend_vtable {
    char padding[0x28];
    short adjustment;
    short padding2;
    void (*load_panel)(void *self, bool floating);
};

class FEGraphicalMenu {
    char padding0[0x64];
    void *parent;
    char padding1[0xd8];
    frontend_vtable *vtable;

public:
    void Load(bool floating);
};

void FEGraphicalMenu::Load(bool floating)
{
    if (parent)
        return;

    frontend_vtable *table = vtable;
    char *frontend = (char *)this + 0x80;
    short adjustment = table->adjustment;
    void (*load_panel)(void *, bool) = table->load_panel;
    load_panel(frontend + adjustment, floating);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB930)
// 0x001DB930 Draw__12FEMenuSystem
struct menu_vtable {
    char padding[0x48];
    short adjustment;
    short unused;
    void (*draw)(void *self);
};
class FEMenu {
    char padding[0x74];
    menu_vtable *vtable;
public:
    void Draw() {
        menu_vtable *table = vtable;
        table->draw((char *)this + table->adjustment);
    }
};
class FEMenuSystem {
    char padding[0x74];
    FEMenu **menus;
    void *manager;
    int active;
public:
    void Draw();
};
void FEMenuSystem::Draw()
{
    menus[active]->Draw();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA438)
// 0x001DA438 __tf11FEMenuEntry
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512078"); asm(".equ type_name, 0x004DD970");
extern "C" void *GetTypeInfo() __asm__("__tf11FEMenuEntry");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA958)
// 0x001DA958 __tf6FEMenu
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512080"); asm(".equ type_name, 0x004DD980");
extern "C" void *GetTypeInfo() __asm__("__tf6FEMenu");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DABF0)
// 0x001DABF0 __tf8FrontEnd
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512088"); asm(".equ type_name, 0x004DD988");
extern "C" void *GetTypeInfo() __asm__("__tf8FrontEnd");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB100)
// 0x001DB100 Update__15FEGraphicalMenuf
#include "decomp_annotations.h"
class FrontEnd { public: void Update(float); };
class FEMenu { char padding[0x80]; public: void Update(float); };
class FEGraphicalMenu : public FEMenu { FrontEnd frontend; public: void Update(float); };
asm(".equ Update__8FrontEndf, 0x00157B30");
asm(".equ Update__6FEMenuf, 0x00156DC8");
void FEGraphicalMenu::Update(float time_inc)
{
    frontend.Update(time_inc);
    FEMenu::Update(time_inc);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB390)
// 0x001DB390 GetPointer__15FEGraphicalMenuPCc
class PanelFile { public: void *GetPointer(const char *); };
typedef void *(*get_pointer_handler)(void *, const char *);
struct get_pointer_slot { short adjustment; unsigned short padding; get_pointer_handler function; };
struct menu_vtable { char padding[0x198]; get_pointer_slot get_pointer; };
struct ParentMenu { char padding[0x74]; menu_vtable *vtable; };
class FEGraphicalMenu { char padding[0x64]; ParentMenu *parent; char padding2[0x98]; PanelFile panel; public: void *GetPointer(const char *); };
asm(".equ GetPointer__9PanelFilePCc, 0x00152F88");
void *FEGraphicalMenu::GetPointer(const char *name)
{
    if (!parent)
        return panel.GetPointer(name);
    get_pointer_slot &slot = parent->vtable->get_pointer;
    return slot.function((char *)parent + slot.adjustment, name);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB880)
// 0x001DB880 __tf12FEMenuSystem
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512090"); asm(".equ type_name, 0x004DDA08");
extern "C" void *GetTypeInfo() __asm__("__tf12FEMenuSystem");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAA30)
// 0x001DAA30 OnUp__6FEMenui
#include "KS/SRC/ks/FEMenu_shared.h"
void FEMenu::OnUp(int command) {
    if (active)
        active->OnUp(command);
    else {
        FEMenuPreviousDispatchVTable *table = *(FEMenuPreviousDispatchVTable **)((char *)this + 0x74);
        table->previous((char *)this + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAB30)
// 0x001DAB30 cons__6FEMenuP12FEMenuSystemiii
class FEMenuSystem;

struct color32
{
    union
    {
        struct { unsigned char b, g, r, a; } channels;
        unsigned int value;
    };
    color32(
        unsigned char red, unsigned char green,
        unsigned char blue, unsigned char alpha
    )
    {
        channels.b = blue;
        channels.g = green;
        channels.r = red;
        channels.a = alpha;
    }
    operator unsigned int() const { return value; }
};

struct menu_vtable
{
    char padding[0x138];
    short adjustment;
    short reserved;
    void (*cons)(
        void *self, FEMenuSystem *system, int x, int y,
        unsigned int normal, unsigned int high, int max_visible
    );
};

class FEMenu
{
    char padding[0x74];
    menu_vtable *vtable;

public:
    void cons(
        FEMenuSystem *system, int x, int y, int max_visible
    );
};

void FEMenu::cons(
    FEMenuSystem *system, int x, int y, int max_visible
)
{
    menu_vtable *table = vtable;
    table->cons(
        (char *)this + table->adjustment,
        system, x, y,
        color32(0, 0, 0, 0),
        color32(0, 0, 0, 0),
        max_visible
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB160)
// 0x001DB160 TurnOn__15FEGraphicalMenuP9PanelQuadb
struct graphical_vtable
{
    char padding[0x168];
    short adjustment;
    short reserved;
    void (*turn_on)(void *self, void *quad, bool on);
};

struct panel_vtable
{
    char padding[0x18];
    short adjustment;
    short reserved;
    void (*turn_on)(void *self, bool on);
};

struct panel_quad
{
    char padding[0x194];
    panel_vtable *vtable;
};

struct graphical_parent
{
    char padding[0x74];
    graphical_vtable *vtable;
};

struct graphical_menu_layout
{
    char padding[0x64];
    graphical_parent *parent;
};

extern "C" void TurnOn(
    void *self, void *quad, bool on
) __asm__("TurnOn__15FEGraphicalMenuP9PanelQuadb");

void TurnOn(void *self, void *quad_pointer, bool on)
{
    graphical_menu_layout *menu =
        (graphical_menu_layout *)self;
    panel_quad *quad = (panel_quad *)quad_pointer;
    if (menu->parent)
    {
        graphical_vtable *table = menu->parent->vtable;
        table->turn_on(
            (char *)menu->parent + table->adjustment, quad, on
        );
    }
    else if (quad)
    {
        panel_vtable *table = quad->vtable;
        table->turn_on(
            (char *)quad + table->adjustment, on
        );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB2A8)
// 0x001DB2A8 SetLayer__15FEGraphicalMenuP9PanelQuadi
struct graphical_vtable {
    char padding[0x188]; short adjustment; short reserved;
    void (*set_layer)(void *self, void *quad, int layer);
};
struct panel_vtable {
    char padding[0x20]; short adjustment; short reserved;
    void (*set_layer)(void *self, int layer);
};
struct panel_quad { char padding[0x194]; panel_vtable *vtable; };
struct graphical_parent { char padding[0x74]; graphical_vtable *vtable; };
struct graphical_menu_layout { char padding[0x64]; graphical_parent *parent; };

extern "C" void SetLayer(void *self, void *quad, int layer)
    __asm__("SetLayer__15FEGraphicalMenuP9PanelQuadi");

void SetLayer(void *self, void *quad_pointer, int layer) {
    graphical_menu_layout *menu = (graphical_menu_layout *)self;
    panel_quad *quad = (panel_quad *)quad_pointer;
    if (menu->parent) {
        graphical_vtable *table = menu->parent->vtable;
        table->set_layer((char *)menu->parent + table->adjustment, quad, layer);
    } else if (quad) {
        panel_vtable *table = quad->vtable;
        table->set_layer((char *)quad + table->adjustment, layer);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB648)
// 0x001DB648 cons__15FETextMultiMenuP12FEMenuSystemG7color32
class FEMenuSystem;
struct color32 {
    union { struct { unsigned char b,g,r,a; } channels; unsigned int value; };
    color32(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
        channels.b=blue; channels.g=green; channels.r=red; channels.a=alpha;
    }
    operator unsigned int() const { return value; }
};
struct text_menu_vtable {
    char padding[0x178]; short adjustment; short reserved;
    void (*cons)(void *self, FEMenuSystem *system,
                 unsigned int normal, unsigned int high,
                 float scale, float high_scale, int flags);
};
class FETextMultiMenu {
    char padding[0x74]; text_menu_vtable *vtable;
public:
    void cons(FEMenuSystem *system, color32 high);
};
void FETextMultiMenu::cons(FEMenuSystem *system, color32 high) {
    text_menu_vtable *table=vtable;
    table->cons((char *)this+table->adjustment, system,
                color32(0,0,0,0), high, 8.0f, 1.2f, 0);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA580)
// 0x001DA580 SetText__11FEMenuEntryG7stringx
#include "KS/SRC/stringx.h"
struct change_vtable {
    char padding[0x48]; short adjustment; short reserved;
    void (*change)(void *,stringx *);
};
struct text_layout { char padding[0x4c]; change_vtable *vtable; };
struct menu_entry_layout { char padding[0x24]; text_layout *text; };
extern "C" void copy_string(stringx *,const stringx *)
    __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(stringx *,int)
    __asm__("_$_7stringx");
extern "C" void set_menu_text(
    menu_entry_layout *,stringx *
) __asm__("SetText__11FEMenuEntryG7stringx");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
void set_menu_text(menu_entry_layout *self,stringx *value) {
    char storage[8] __attribute__((aligned(16)));
    stringx *copy=(stringx *)storage;
    copy_string(copy,value);
    text_layout *text=self->text;
    change_vtable *table=text->vtable;
    table->change((char *)text+table->adjustment,copy);
    destroy_string(value,2);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB8D0)
// 0x001DB8D0 _$_12FEMenuSystem
extern "C" void vector_delete(void *)
    __asm__("__builtin_vec_delete");
extern "C" void object_delete(void *)
    __asm__("__builtin_delete");
extern const char menu_system_vtable[];
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ menu_system_vtable, 0x004DB6A0");
struct menu_system_layout {
    char padding[0x74];
    void *menus;
    char padding2[0x14];
    const void *vtable;
};
extern "C" void destroy_menu_system(
    menu_system_layout *self,int flags
) __asm__("_$_12FEMenuSystem");
void destroy_menu_system(menu_system_layout *self,int flags) {
    self->vtable=menu_system_vtable;
    if (self->menus)
        vector_delete(self->menus);
    if (flags&1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA480)
// 0x001DA480 _$_11FEMenuEntry
extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ __builtin_delete,0x002AC6B0");extern const char entry_vtable[];__asm__(".equ entry_vtable,0x004DC018");struct text_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct text{char p0[76];text_vtable*vtable;};struct entry_layout{char p0[36];text*description;char p1[56];const void*vtable;};extern "C" void destroy_entry(entry_layout*self,int deleting) __asm__("_$_11FEMenuEntry");void destroy_entry(entry_layout*self,int deleting){self->vtable=entry_vtable;if(self->description){text*x=self->description;text_vtable*t=x->vtable;t->destroy((char*)x+t->adjustment,3);}if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DAE68)
// 0x001DAE68 _$_20FEGraphicalMenuEntry
extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ __builtin_delete,0x002AC6B0");extern const char entry_vtable[];__asm__(".equ entry_vtable,0x004DC018");struct text_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct text{char p0[76];text_vtable*vtable;};struct entry_layout{char p0[36];text*description;char p1[56];const void*vtable;};extern "C" void destroy_graphical(entry_layout*self,int deleting) __asm__("_$_20FEGraphicalMenuEntry");void destroy_graphical(entry_layout*self,int deleting){self->vtable=entry_vtable;if(self->description){text*x=self->description;text_vtable*t=x->vtable;t->destroy((char*)x+t->adjustment,3);}if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}
#endif
