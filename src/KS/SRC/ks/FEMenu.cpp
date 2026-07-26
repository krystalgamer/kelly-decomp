// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00155E68)
// 0x00155E68 Disable__11FEMenuEntryb
#include "KS/SRC/ks/FEMenuEntry_disable_shared.h"

void FEMenuEntry::Disable(bool value)
{
    disabled = value;
    if (disabled)
    {
        if (has_special_color)
            text->color = special_color;
        else
            text->color = menu->color;
        reinterpret_cast<unsigned char *>(
            &text->color)[3] = disabled_alpha;
        text->no_color = false;
    }
    else
    {
        text->no_color =
            !highlight && !(menu->flags & 4);
        if (!text->no_color)
        {
            if (highlight)
            {
                if (has_special_color)
                    text->color = special_color_high;
                else
                    text->color = menu->color_high;
            }
            else
            {
                if (has_special_color)
                    text->color = special_color;
                else
                    text->color = menu->color;
            }
        }
    }
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_001576B8)
// 0x001576B8 HighlightDefault__6FEMenu
struct entry_vtable{char p0[48];short adjustment;short x0;bool(*disabled)(void*);};struct entry{char p0[4];entry*next;char p1[88];entry_vtable*vtable;};struct menu_vtable{char p0[24];short adjustment;short x0;void(*set_high)(void*,entry*,bool);};struct menu{char p0[64];entry*entries;char p1[48];menu_vtable*vtable;};extern "C" void highlight_default(menu*self) __asm__("HighlightDefault__6FEMenu");void highlight_default(menu*self){entry*tmp=self->entries;while(tmp){entry_vtable*t=tmp->vtable;if(!t->disabled((char*)tmp+t->adjustment))break;tmp=tmp->next;}if(tmp){menu_vtable*t=self->vtable;t->set_high((char*)self+t->adjustment,tmp,false);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001577F0)
// 0x001577F0 OnTriangle__6FEMenui
struct back_entry{char p0[20];int menu_num;};struct menu_vtable{char p0[32];short sys_adjust;short x0;void(*sys_make)(void*,int,int,bool);char p1[232];short parent_adjust;short x1;void(*parent_make)(void*,void*,bool);};struct system_layout{char p0[140];menu_vtable*vtable;};struct menu{char p0[80];system_layout*system;back_entry*back;int back_num;char p1[8];menu*parent;char p2[12];menu_vtable*vtable;};extern "C" void triangle(menu*self,int c) __asm__("OnTriangle__6FEMenui");void triangle(menu*self,int c){if(self->parent){menu*p=self->parent;menu_vtable*t=p->vtable;t->parent_make((char*)p+t->parent_adjust,0,true);}else if(self->back){system_layout*s=self->system;menu_vtable*t=s->vtable;t->sys_make((char*)s+t->sys_adjust,self->back->menu_num,self->back_num,true);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157C60)
// 0x00157C60 OnHighlight__20FEGraphicalMenuEntryb
struct PanelAnimFile;struct PanelAnimManager;extern "C" void play(PanelAnimManager*,PanelAnimFile*,int,int) __asm__("Play__16PanelAnimManagerP13PanelAnimFile8AnimTypei");__asm__(".equ Play__16PanelAnimManagerP13PanelAnimFile8AnimTypei,0x00155500");struct graph_entry{char p0[108];PanelAnimFile*highlight_paf;PanelAnimManager*pam;int already_playing;};extern "C" void on_highlight(graph_entry*self,bool anim) __asm__("OnHighlight__20FEGraphicalMenuEntryb");void on_highlight(graph_entry*self,bool anim){if(self->highlight_paf&&anim){register int type __asm__("$6")=0;if(self->already_playing){play(self->pam,self->highlight_paf,type,3);int dead;__asm__("" : "=r"(dead));}else{play(self->pam,self->highlight_paf,type,2);register int yes __asm__("$3")=1;self->already_playing=yes;}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00156638)
// 0x00156638 setHigh__6FEMenuP11FEMenuEntryb
struct entry_vtable{char pad[32];short adjust;short reserved;void(*highlight)(void*,bool,bool);};struct FEMenuEntry{char pad[96];entry_vtable*vtable;};struct FEMenu{char pad[76];FEMenuEntry*highlighted;};extern "C" void set_high(FEMenu*self,FEMenuEntry*e,bool anim)__asm__("setHigh__6FEMenuP11FEMenuEntryb");void set_high(FEMenu*self,FEMenuEntry*e,bool anim){if(self->highlighted){FEMenuEntry*h=self->highlighted;entry_vtable*t=h->vtable;t->highlight((char*)h+t->adjust,false,true);}entry_vtable*t=e->vtable;t->highlight((char*)e+t->adjust,true,anim);self->highlighted=e;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157860)
// 0x00157860 OnCross__6FEMenui
struct Entry;struct EntryVtable{char pad0[48];short disable_adjust;short z0;bool(*get_disable)(void*);char pad1[40];};struct ActiveVtable{char pad[184];short cross_adjust;short z;void(*on_cross)(void*,int);};struct MenuVtable{char pad[344];short select_adjust;short z;void(*select)(void*);};struct Entry{char pad[96];EntryVtable*vtable;};struct Active{char pad[116];ActiveVtable*vtable;};struct FEMenu{char pad0[76];Entry*highlighted;char pad1[16];Active*active;char pad2[16];MenuVtable*vtable;};extern "C" void on_cross(FEMenu*self,int c)__asm__("OnCross__6FEMenui");void on_cross(FEMenu*self,int c){if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_cross((char*)a+v->cross_adjust,c);}else if(self->highlighted!=0){Entry*e=self->highlighted;EntryVtable*v=e->vtable;if(!v->get_disable((char*)e+v->disable_adjust)){MenuVtable*mv=self->vtable;mv->select((char*)self+mv->select_adjust);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001581E8)
// 0x001581E8 OnActivate__15FEGraphicalMenu
struct Entry;struct EntryVtable{char pad[48];short disable_adjust;short z;bool(*get_disable)(void*);};struct Entry{char pad0[4];Entry*next;char pad1[88];EntryVtable*vtable;};struct MenuVtable{char pad[24];short set_adjust;short z;void(*set_high)(void*,Entry*,bool);};struct FEGraphicalMenu{char pad0[60];unsigned flags;Entry*entries;char pad1[28];void*active;char pad2[16];MenuVtable*vtable;};extern "C" void activate(FEGraphicalMenu*self)__asm__("OnActivate__15FEGraphicalMenu");void activate(FEGraphicalMenu*self){self->active=0;Entry*tmp=self->entries;if(!(self->flags&0x40))while(tmp){EntryVtable*v=tmp->vtable;if(!v->get_disable((char*)tmp+v->disable_adjust))break;tmp=tmp->next;}if(tmp){MenuVtable*v=self->vtable;v->set_high((char*)self+v->set_adjust,tmp,false);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001587D0)
// 0x001587D0 SetSecondaryCursor__11FEMultiMenuP11FEMenuEntryb
struct EntryVtable{char pad[32];short highlight_adjust;short z;void(*highlight)(void*,bool,bool);};struct Entry{char pad[96];EntryVtable*vtable;};struct FEMultiMenu{char pad[344];Entry*secondary_cursor;};extern "C" void set_cursor(FEMultiMenu*self,Entry*e,bool anim)__asm__("SetSecondaryCursor__11FEMultiMenuP11FEMenuEntryb");void set_cursor(FEMultiMenu*self,Entry*e,bool anim){if(self->secondary_cursor){Entry*old=self->secondary_cursor;EntryVtable*v=old->vtable;v->highlight((char*)old+v->highlight_adjust,false,true);}if(e){EntryVtable*v=e->vtable;v->highlight((char*)e+v->highlight_adjust,true,anim);}self->secondary_cursor=e;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157728)
// 0x00157728 OnActivate__6FEMenu
struct Entry;struct MenuVtable{char pad0[32];short vis_adj;short z0;void(*set_vis)(void*,Entry*);char pad1[8];short init_adj;short z1;void(*init)(void*);char pad2[48];short high_adj;short z2;void(*highlight_default)(void*);};struct FEMenu{char pad0[60];unsigned flags;char pad1[12];Entry*highlighted;char pad2[16];void*active;char pad3[16];MenuVtable*vtable;void OnActivate()__asm__("OnActivate__6FEMenu");};void FEMenu::OnActivate(){active=0;MenuVtable*v=vtable;register void(*call0)(void*) asm("$3")=v->highlight_default;call0((char*)this+v->high_adj);if(flags&1){v=vtable;register void(*call1)(void*,Entry*) asm("$3")=v->set_vis;call1((char*)this+v->vis_adj,highlighted);}else if(flags&0x400){v=vtable;register void(*call2)(void*) asm("$3")=v->init;call2((char*)this+v->init_adj);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00158C20)
// 0x00158C20 UpdateButtonDown__12FEMenuSystem
extern "C" int getButtonState(int,int)__asm__("getButtonState__Fii");class FEMenuSystem{public:bool button_down[14][2];void UpdateButtonDown()__asm__("UpdateButtonDown__12FEMenuSystem");};__asm__(".equ getButtonState__Fii,0x00159270");void FEMenuSystem::UpdateButtonDown(){for(int i=0;i<14;i++)for(int j=0;j<2;j++)button_down[i][j]=getButtonState(i,j);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157BC8)
// 0x00157BC8 Draw__20FEGraphicalMenuEntry
struct QuadVtable{char p[64];short adj;short z;void(*draw)(void*,int,float);};struct PanelQuad{char p[404];QuadVtable*vtable;};class Entry{public:char p0[16];bool highlight,disabled;char p1[76];PanelQuad*pq,*pq_high;void Draw()__asm__("Draw__20FEGraphicalMenuEntry");};void Entry::Draw(){if(highlight&&pq_high){QuadVtable*v=pq_high->vtable;v->draw((char*)pq_high+v->adj,-1,-1.0f);}else{if(!pq)return;if(disabled){QuadVtable*v=pq->vtable;v->draw((char*)pq+v->adj,-1,0.5f);}else{QuadVtable*v=pq->vtable;v->draw((char*)pq+v->adj,-1,-1.0f);}}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157FF8)
// 0x00157FF8 Previous__15FEGraphicalMenu
struct EntryVtable{char p[48];short disable_adj;short z;bool(*disabled)(void*);};struct Entry{char p0[8];Entry*previous;char p1[84];EntryVtable*vtable;};struct MenuVtable{char p[24];short high_adj;short z;void(*setHigh)(void*,Entry*,bool);};class FEGraphicalMenu{char p0[60];unsigned flags;char p1[12];Entry*highlighted;char p2[36];MenuVtable*vtable;public:void Previous() __asm__("Previous__15FEGraphicalMenu");};void FEGraphicalMenu::Previous(){Entry*tmp=highlighted->previous;if(tmp){if(!(flags&0x40))while(tmp->vtable->disabled((char*)tmp+tmp->vtable->disable_adj)&&tmp!=highlighted)tmp=tmp->previous;MenuVtable*v=vtable;v->setHigh((char*)this+v->high_adj,tmp,true);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157F58)
// 0x00157F58 Next__15FEGraphicalMenu
struct EntryVTable{char p[48];short disable_adj;short g;bool(*disabled)(void*);};struct FEMenuEntry{int entry_num;FEMenuEntry*next;char p[88];EntryVTable*vt;bool GetDisable(){EntryVTable*v=vt;return v->disabled((char*)this+v->disable_adj);}};struct MenuVTable{char p[24];short high_adj;short g;void(*sethigh)(void*,FEMenuEntry*,bool);};class FEGraphicalMenu{char p0[60];int flags;FEMenuEntry*entries;char p1[8];FEMenuEntry*highlighted;char p2[36];MenuVTable*vt;public:void Next();};void FEGraphicalMenu::Next(){FEMenuEntry*tmp=highlighted->next;if(!tmp)tmp=entries;if(!(flags&0x40))while(tmp->GetDisable()&&tmp!=highlighted){tmp=tmp->next;if(!tmp)tmp=entries;}MenuVTable*v=vt;v->sethigh((char*)this+v->high_adj,tmp,true);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001578E0)
// 0x001578E0 SetAllScale__6FEMenuf
struct entry_vtable{char padding0[88];short set_adjust;short reserved0;void(*set_scale)(void*,float,float);short get_adjust;short reserved1;bool(*get_scale)(void*,float&,float&);};struct FEMenuEntry{char padding0[4];FEMenuEntry*next;char padding1[88];entry_vtable*vtable;};struct FEMenu{char padding0[48];float scale;float scale_high;char padding1[8];FEMenuEntry*entries;void SetAllScale(float);};void FEMenu::SetAllScale(float s){float s1,sh1;FEMenuEntry*tmp=entries;while(tmp!=0){register entry_vtable*v asm("$3")=tmp->vtable;register float*out1 asm("$5")=&s1;register float*out2 asm("$6")=&sh1;asm volatile("" : "+r"(out1),"+r"(out2));if(v->get_scale((char*)tmp+v->get_adjust,*out1,*out2)){v=tmp->vtable;v->set_scale((char*)tmp+v->set_adjust,s*s1,s*sh1);}tmp=tmp->next;}scale=scale*s;scale_high=scale_high*s;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00158268)
// 0x00158268 cons__15FETextMultiMenuP12FEMenuSystemG7color32T2ffi
struct FEMenuSystem;struct FEMenuEntry;union color32{unsigned value;struct{unsigned char r,g,b,a;}bytes;unsigned char get_alpha()const{return bytes.a;}};enum{FEMENU_HAS_COLOR=4,FEMENU_HAS_COLOR_HIGH=8};class FETextMultiMenu{char padding0[8];int num_entries;int dy;int half;char padding1[4];int init;char padding2[8];color32 color;color32 color_high;char padding3[4];float scale;float scale_high;char padding4[4];int flags;FEMenuEntry*entries;FEMenuEntry*first_vis_entry;FEMenuEntry*last_vis_entry;FEMenuEntry*highlighted;FEMenuSystem*system;FEMenuEntry*back;public:void cons(FEMenuSystem*,color32,color32,float,float,int);};void FETextMultiMenu::cons(FEMenuSystem*s,color32 c,color32 ch,float sc,float sch,int flg){entries=0;first_vis_entry=0;last_vis_entry=0;highlighted=0;back=0;system=s;flags=flg;num_entries=0;dy=28;half=0;init=false;if(c.get_alpha()==0)flags=!(flags&FEMENU_HAS_COLOR);else{flags|=FEMENU_HAS_COLOR;color=c;}if(ch.get_alpha()==0)flags=!(flags&FEMENU_HAS_COLOR_HIGH);else{flags|=FEMENU_HAS_COLOR_HIGH;color_high=ch;}scale=sc;scale_high=sch;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00156280)
// 0x00156280 __6FEMenu
struct stringx{char data[8];};extern "C" void construct_string(stringx*)__asm__("__7stringx");asm(".equ __7stringx,0x0034D3E0");extern void*femenu_vtable;asm(".equ femenu_vtable,0x004DBEA8");class FEMenu{public:int center_x,center_y,num_entries,dy,half,menu_num;int init;stringx font_filename;unsigned color,color_high,color_high_alt;float scale,scale_high;int max_vis_entries,flags;void*entries;void*first_vis_entry;void*last_vis_entry;void*highlighted;void*system;void*back;int back_num;void*submenus;void*active;void*parent;void*helpText;int helpFlags;void*next_sub;void*vtable;FEMenu();};FEMenu::FEMenu(){vtable=&femenu_vtable;construct_string(&font_filename);color=0;color_high=0;color_high_alt=0;center_x=0;center_y=0;num_entries=0;dy=0;half=0;menu_num=0;init=false;scale=1.0f;scale_high=1.0f;max_vis_entries=1;flags=0;entries=0;first_vis_entry=0;last_vis_entry=0;highlighted=0;system=0;back=0;back_num=0;submenus=0;active=0;parent=0;helpText=0;helpFlags=0;next_sub=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00157600)
// 0x00157600 MakeActive__6FEMenuP6FEMenub
#include "KS/SRC/ks/FEMenu_shared.h"

void FEMenu::MakeActive(FEMenu* a, bool notify)
{
	if (notify)
	{
		if(active) active->OnUnactivate(a);
		else OnUnactivate(a);
	}
	if (notify)
	{
		if(a) a->OnActivate();
		else OnActivate();
	}
	active = a;
}
#endif
