// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001561D8)
// 0x001561D8 SetSpecialColor__11FEMenuEntryG7color32T1
class color32 { public: unsigned int value; };
class FEMenuEntry { char padding[0x34]; color32 special_color; color32 special_color_high; bool has_special_color; public: void SetSpecialColor(color32 color, color32 high); };
void FEMenuEntry::SetSpecialColor(color32 color, color32 high) { special_color = color; special_color_high = high; has_special_color = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001575E8)
// 0x001575E8 AddSubmenu__6FEMenuP6FEMenu
class FEMenu { char padding_to_submenus[0x5C]; FEMenu* submenus; char padding_to_parent[0x4]; FEMenu* parent; char padding_to_next[0x8]; FEMenu* next_sub; public: void AddSubmenu(FEMenu* sub); };
void FEMenu::AddSubmenu(FEMenu* sub) { sub->next_sub = submenus; submenus = sub; sub->parent = this; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001577B0)
// 0x001577B0 OnSelect__6FEMenui
class FEMenu {
public:
    void OnSelect(int controller);
};

void FEMenu::OnSelect(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157B10)
// 0x00157B10 Draw__8FrontEnd
class PanelFile { public: void Draw(int layer); };
__asm__(".equ Draw__9PanelFilei, 0x001530B8");
class FrontEnd { char padding[0x80]; PanelFile panel; public: void Draw(); };
void FrontEnd::Draw() { panel.Draw(0); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00156258)
// 0x00156258 AddEntity__11FEMenuEntryP6entityG7color32T2
struct color32 { unsigned int value; };
struct entity { char padding[0x1d8]; color32 render_color; };
class FEMenuEntry { char padding0[0x10]; void *text; char padding1[4]; entity *attached_entity; color32 highlight_color; color32 normal_color; public: void AddEntity(entity *value, color32 highlighted, color32 normal); };
void FEMenuEntry::AddEntity(entity *value, color32 highlighted, color32 normal) { attached_entity = value; highlight_color = highlighted; normal_color = normal; if (text) value->render_color = highlighted; else value->render_color = normal; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157B78)
// 0x00157B78 Load__20FEGraphicalMenuEntryP9PanelQuadT1
class PanelQuad { char padding[0x110]; bool added; public: void AddedToMenu() { added = true; } };
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad *pq; PanelQuad *pq_high; public: void Load(PanelQuad *normal, PanelQuad *highlighted); };
void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelQuad *highlighted) { pq = normal; pq_high = highlighted; pq->AddedToMenu(); if (pq_high) pq_high->AddedToMenu(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157BA0)
// 0x00157BA0 Load__20FEGraphicalMenuEntryP9PanelQuadP13PanelAnimFileP16PanelAnimManagerT1
class PanelQuad { char padding[0x110]; bool added; public: void AddedToMenu() { added = true; } };
class PanelAnimFile;
class PanelAnimManager;
class FEGraphicalMenuEntry { char padding[0x64]; PanelQuad *pq; PanelQuad *pq_high; PanelAnimFile *highlight_paf; PanelAnimManager *pam; public: void Load(PanelQuad *normal, PanelAnimFile *animation, PanelAnimManager *manager, PanelQuad *highlighted); };
void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelAnimFile *animation, PanelAnimManager *manager, PanelQuad *highlighted) { pq = normal; pq->AddedToMenu(); pq_high = highlighted; if (pq_high) pq_high->AddedToMenu(); highlight_paf = animation; pam = manager; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001577B8)
// 0x001577B8 OnStart__6FEMenui
struct menu_vtable {
    char padding[0x90];
    short adjustment;
    short padding2;
    void (*on_start)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class FEMenu {
    char padding[0x60];
    menu_layout *active;

public:
    void OnStart(int controller);
};

void FEMenu::OnStart(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_start((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001581B0)
// 0x001581B0 Select__15FEGraphicalMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class FEGraphicalMenu {
    char padding[0x60];
    menu_layout *active;

public:
    void Select(int entry);
};

void FEGraphicalMenu::Select(int entry)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->select((char *)menu + table->adjustment, entry);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001569B0)
// 0x001569B0 Select__6FEMenu
struct menu_system_vtable {
    char padding[0x40];
    short adjustment;
    short padding2;
    void (*select)(void *self, int menu, int entry);
};

struct menu_system_layout {
    char padding[0x8C];
    menu_system_vtable *vtable;
};

struct menu_entry_layout {
    int entry_num;
};

class FEMenu {
    char padding0[0x14];
    int menu_num;
    char padding1[0x34];
    menu_entry_layout *highlighted;
    menu_system_layout *system;

public:
    void Select();
};

void FEMenu::Select()
{
    menu_system_layout *menu_system = system;
    menu_system_vtable *table = menu_system->vtable;
    table->select(
        (char *)menu_system + table->adjustment,
        menu_num,
        highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157B30)
// 0x00157B30 Update__8FrontEndf
class PanelAnimManager { public: void UpdateAnims(float time); };
class PanelFile { public: void Update(float time); };
asm(".equ Update__9PanelFilef, 0x001531B8"); asm(".equ UpdateAnims__16PanelAnimManagerf, 0x00155710");
class FrontEnd { PanelAnimManager pam; char padding[0x7f]; PanelFile panel; public: void Update(float time); };
void FrontEnd::Update(float time)
{
    panel.Update(time);
    pam.UpdateAnims(time);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00158090)
// 0x00158090 Init__15FEGraphicalMenu
struct FEMenuEntry {};
struct FEGraphicalMenuVTable {
    char padding[24];
    short adjustment;
    short reserved;
    void (*setHigh)(void*, FEMenuEntry*, bool);
};
class FEGraphicalMenu {
    char padding0[24];
    int init;
    char padding1[36];
    FEMenuEntry* entries;
    char padding2[48];
    FEGraphicalMenuVTable* vtable;
public:
    void Init();
};
void FEGraphicalMenu::Init()
{
    if (entries) {
        void* self = (char*)this + vtable->adjustment;
        vtable->setHigh(self, entries, true);
    }
    init = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00156DC8)
// 0x00156DC8 Update__6FEMenuf
struct menu_entry_vtable {
    char padding[0x40];
    short update_adjust;
    short reserved;
    void (*update)(void *self, float time_inc);
};

class FEMenuEntry {
    char padding[4];

public:
    FEMenuEntry *next;

private:
    char vtable_padding[0x58];
    menu_entry_vtable *vtable;

public:
    void Update(float time_inc)
    {
        vtable->update((char *)this + vtable->update_adjust, time_inc);
    }
};

class FEMenu {
    char padding[0x40];
    FEMenuEntry *entries;

public:
    void Update(float time_inc);
};

void FEMenu::Update(float time_inc)
{
    FEMenuEntry *entry = entries;
    while (entry)
    {
        entry->Update(time_inc);
        entry = entry->next;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001566B8)
// 0x001566B8 Add__6FEMenuP11FEMenuEntry
class FEMenu;
struct FEMenuEntry {
    int entry_num;
    FEMenuEntry *next;
    FEMenuEntry *previous;
    FEMenu *menu;
};
class FEMenu {
    char padding[8];
    int num_entries;
    char padding2[0x34];
    FEMenuEntry *entries;
public:
    void Add(FEMenuEntry *entry);
};
void FEMenu::Add(FEMenuEntry *entry) {
    if (entries) {
        if (entries->previous) {
            entries->previous->next=entry;
            entry->previous=entries->previous;
        } else {
            entries->next=entry;
            entry->previous=entries;
        }
        entries->previous=entry;
    } else {
        entries=entry;
        entry->previous=0;
    }
    entry->next=0;
    entry->entry_num=num_entries;
    num_entries++;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157CD0)
// 0x00157CD0 TurnOn__20FEGraphicalMenuEntryb
struct panel_vtable { char padding[24]; short adjustment; short reserved; void (*turn_on)(void *, bool); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
class FEGraphicalMenuEntry { char padding[100]; PanelQuad *pq; PanelQuad *pq_high; public: void TurnOn(bool on); };
void FEGraphicalMenuEntry::TurnOn(bool on)
{
    if(pq) { panel_vtable *table=pq->vtable; table->turn_on((char *)pq+table->adjustment,on); }
    if(pq_high) { panel_vtable *table=pq_high->vtable; table->turn_on((char *)pq_high+table->adjustment,on); }
}
#endif
