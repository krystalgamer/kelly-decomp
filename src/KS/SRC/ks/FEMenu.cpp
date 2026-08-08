// Matching decompilation blocks selected by generated build shims.

// 0x00155E68 Disable__11FEMenuEntryb
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"

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

// 0x001561D8 SetSpecialColor__11FEMenuEntryG7color32T1
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::SetSpecialColor(color32 color, color32 high) { special_color = color; special_color_high = high; has_special_color = true; }

// 0x001575E8 AddSubmenu__6FEMenuP6FEMenu
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::AddSubmenu(FEMenu* sub) { sub->next_sub = submenus; submenus = sub; sub->parent = this; }

// 0x001577B0 OnSelect__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnSelect(int controller) {
}

// 0x00156258 AddEntity__11FEMenuEntryP6entityG7color32T2
#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/entity.h"

void FEMenuEntry::AddEntity(entity *value, color32 highlighted, color32 normal) { ent = value; high_ent_color = highlighted; norm_ent_color = normal; if (highlight) ent->set_render_color(high_ent_color); else ent->set_render_color(norm_ent_color); }

// 0x00157B78 Load__20FEGraphicalMenuEntryP9PanelQuadT1
#include "KS/SRC/ks/FEMenu.h"

void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelQuad *highlighted) { pq = normal; pq_high = highlighted; pq->AddedToMenu(); if (pq_high) pq_high->AddedToMenu(); }

// 0x00157BA0 Load__20FEGraphicalMenuEntryP9PanelQuadP13PanelAnimFileP16PanelAnimManagerT1
#include "KS/SRC/ks/FEMenu.h"

void FEGraphicalMenuEntry::Load(PanelQuad *normal, PanelAnimFile *animation, PanelAnimManager *manager, PanelQuad *highlighted) { pq = normal; pq->AddedToMenu(); pq_high = highlighted; if (pq_high) pq_high->AddedToMenu(); highlight_paf = animation; pam = manager; }

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
// Matching decompilation blocks selected by generated build shims.

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

// 0x00157CD0 TurnOn__20FEGraphicalMenuEntryb
struct panel_vtable { char padding[24]; short adjustment; short reserved; void (*turn_on)(void *, bool); };
struct PanelQuad { char padding[404]; panel_vtable *vtable; };
class FEGraphicalMenuEntry { char padding[100]; PanelQuad *pq; PanelQuad *pq_high; public: void TurnOn(bool on); };
void FEGraphicalMenuEntry::TurnOn(bool on)
{
    if(pq) { panel_vtable *table=pq->vtable; table->turn_on((char *)pq+table->adjustment,on); }
    if(pq_high) { panel_vtable *table=pq_high->vtable; table->turn_on((char *)pq_high+table->adjustment,on); }
}

// 0x001576B8 HighlightDefault__6FEMenu
struct entry_vtable{char p0[48];short adjustment;short x0;bool(*disabled)(void*);};struct entry{char p0[4];entry*next;char p1[88];entry_vtable*vtable;};struct menu_vtable{char p0[24];short adjustment;short x0;void(*set_high)(void*,entry*,bool);};struct menu{char p0[64];entry*entries;char p1[48];menu_vtable*vtable;};extern "C" void highlight_default(menu*self) __asm__("HighlightDefault__6FEMenu");void highlight_default(menu*self){entry*tmp=self->entries;while(tmp){entry_vtable*t=tmp->vtable;if(!t->disabled((char*)tmp+t->adjustment))break;tmp=tmp->next;}if(tmp){menu_vtable*t=self->vtable;t->set_high((char*)self+t->adjustment,tmp,false);}}

// 0x001577F0 OnTriangle__6FEMenui
struct back_entry{char p0[20];int menu_num;};struct menu_vtable{char p0[32];short sys_adjust;short x0;void(*sys_make)(void*,int,int,bool);char p1[232];short parent_adjust;short x1;void(*parent_make)(void*,void*,bool);};struct system_layout{char p0[140];menu_vtable*vtable;};struct menu{char p0[80];system_layout*system;back_entry*back;int back_num;char p1[8];menu*parent;char p2[12];menu_vtable*vtable;};extern "C" void triangle(menu*self,int c) __asm__("OnTriangle__6FEMenui");void triangle(menu*self,int c){if(self->parent){menu*p=self->parent;menu_vtable*t=p->vtable;t->parent_make((char*)p+t->parent_adjust,0,true);}else if(self->back){system_layout*s=self->system;menu_vtable*t=s->vtable;t->sys_make((char*)s+t->sys_adjust,self->back->menu_num,self->back_num,true);}}

// 0x00157C60 OnHighlight__20FEGraphicalMenuEntryb
struct PanelAnimFile;struct PanelAnimManager;extern "C" void play(PanelAnimManager*,PanelAnimFile*,int,int) __asm__("Play__16PanelAnimManagerP13PanelAnimFile8AnimTypei");__asm__(".equ Play__16PanelAnimManagerP13PanelAnimFile8AnimTypei,0x00155500");struct graph_entry{char p0[108];PanelAnimFile*highlight_paf;PanelAnimManager*pam;int already_playing;};extern "C" void on_highlight(graph_entry*self,bool anim) __asm__("OnHighlight__20FEGraphicalMenuEntryb");void on_highlight(graph_entry*self,bool anim){if(self->highlight_paf&&anim){register int type __asm__("$6")=0;if(self->already_playing){play(self->pam,self->highlight_paf,type,3);int dead;__asm__("" : "=r"(dead));}else{play(self->pam,self->highlight_paf,type,2);register int yes __asm__("$3")=1;self->already_playing=yes;}}}

// 0x00156638 setHigh__6FEMenuP11FEMenuEntryb
struct entry_vtable{char pad[32];short adjust;short reserved;void(*highlight)(void*,bool,bool);};struct FEMenuEntry{char pad[96];entry_vtable*vtable;};struct FEMenu{char pad[76];FEMenuEntry*highlighted;};extern "C" void set_high(FEMenu*self,FEMenuEntry*e,bool anim)__asm__("setHigh__6FEMenuP11FEMenuEntryb");void set_high(FEMenu*self,FEMenuEntry*e,bool anim){if(self->highlighted){FEMenuEntry*h=self->highlighted;entry_vtable*t=h->vtable;t->highlight((char*)h+t->adjust,false,true);}entry_vtable*t=e->vtable;t->highlight((char*)e+t->adjust,true,anim);self->highlighted=e;}

// 0x00157860 OnCross__6FEMenui
struct Entry;struct EntryVtable{char pad0[48];short disable_adjust;short z0;bool(*get_disable)(void*);char pad1[40];};struct ActiveVtable{char pad[184];short cross_adjust;short z;void(*on_cross)(void*,int);};struct MenuVtable{char pad[344];short select_adjust;short z;void(*select)(void*);};struct Entry{char pad[96];EntryVtable*vtable;};struct Active{char pad[116];ActiveVtable*vtable;};struct FEMenu{char pad0[76];Entry*highlighted;char pad1[16];Active*active;char pad2[16];MenuVtable*vtable;};extern "C" void on_cross(FEMenu*self,int c)__asm__("OnCross__6FEMenui");void on_cross(FEMenu*self,int c){if(self->active){Active*a=self->active;ActiveVtable*v=a->vtable;v->on_cross((char*)a+v->cross_adjust,c);}else if(self->highlighted!=0){Entry*e=self->highlighted;EntryVtable*v=e->vtable;if(!v->get_disable((char*)e+v->disable_adjust)){MenuVtable*mv=self->vtable;mv->select((char*)self+mv->select_adjust);}}}

// 0x001581E8 OnActivate__15FEGraphicalMenu
struct Entry;struct EntryVtable{char pad[48];short disable_adjust;short z;bool(*get_disable)(void*);};struct Entry{char pad0[4];Entry*next;char pad1[88];EntryVtable*vtable;};struct MenuVtable{char pad[24];short set_adjust;short z;void(*set_high)(void*,Entry*,bool);};struct FEGraphicalMenu{char pad0[60];unsigned flags;Entry*entries;char pad1[28];void*active;char pad2[16];MenuVtable*vtable;};extern "C" void activate(FEGraphicalMenu*self)__asm__("OnActivate__15FEGraphicalMenu");void activate(FEGraphicalMenu*self){self->active=0;Entry*tmp=self->entries;if(!(self->flags&0x40))while(tmp){EntryVtable*v=tmp->vtable;if(!v->get_disable((char*)tmp+v->disable_adjust))break;tmp=tmp->next;}if(tmp){MenuVtable*v=self->vtable;v->set_high((char*)self+v->set_adjust,tmp,false);}}

// 0x001587D0 SetSecondaryCursor__11FEMultiMenuP11FEMenuEntryb
struct EntryVtable{char pad[32];short highlight_adjust;short z;void(*highlight)(void*,bool,bool);};struct Entry{char pad[96];EntryVtable*vtable;};struct FEMultiMenu{char pad[344];Entry*secondary_cursor;};extern "C" void set_cursor(FEMultiMenu*self,Entry*e,bool anim)__asm__("SetSecondaryCursor__11FEMultiMenuP11FEMenuEntryb");void set_cursor(FEMultiMenu*self,Entry*e,bool anim){if(self->secondary_cursor){Entry*old=self->secondary_cursor;EntryVtable*v=old->vtable;v->highlight((char*)old+v->highlight_adjust,false,true);}if(e){EntryVtable*v=e->vtable;v->highlight((char*)e+v->highlight_adjust,true,anim);}self->secondary_cursor=e;}

// 0x00157728 OnActivate__6FEMenu
struct Entry;struct MenuVtable{char pad0[32];short vis_adj;short z0;void(*set_vis)(void*,Entry*);char pad1[8];short init_adj;short z1;void(*init)(void*);char pad2[48];short high_adj;short z2;void(*highlight_default)(void*);};struct FEMenu{char pad0[60];unsigned flags;char pad1[12];Entry*highlighted;char pad2[16];void*active;char pad3[16];MenuVtable*vtable;void OnActivate()__asm__("OnActivate__6FEMenu");};void FEMenu::OnActivate(){active=0;MenuVtable*v=vtable;register void(*call0)(void*) asm("$3")=v->highlight_default;call0((char*)this+v->high_adj);if(flags&1){v=vtable;register void(*call1)(void*,Entry*) asm("$3")=v->set_vis;call1((char*)this+v->vis_adj,highlighted);}else if(flags&0x400){v=vtable;register void(*call2)(void*) asm("$3")=v->init;call2((char*)this+v->init_adj);}}

// 0x00158C20 UpdateButtonDown__12FEMenuSystem
extern "C" int getButtonState(int,int)__asm__("getButtonState__Fii");class FEMenuSystem{public:bool button_down[14][2];void UpdateButtonDown()__asm__("UpdateButtonDown__12FEMenuSystem");};__asm__(".equ getButtonState__Fii,0x00159270");void FEMenuSystem::UpdateButtonDown(){for(int i=0;i<14;i++)for(int j=0;j<2;j++)button_down[i][j]=getButtonState(i,j);}

// 0x00157BC8 Draw__20FEGraphicalMenuEntry
struct QuadVtable{char p[64];short adj;short z;void(*draw)(void*,int,float);};struct PanelQuad{char p[404];QuadVtable*vtable;};class Entry{public:char p0[16];bool highlight,disabled;char p1[76];PanelQuad*pq,*pq_high;void Draw()__asm__("Draw__20FEGraphicalMenuEntry");};void Entry::Draw(){if(highlight&&pq_high){QuadVtable*v=pq_high->vtable;v->draw((char*)pq_high+v->adj,-1,-1.0f);}else{if(!pq)return;if(disabled){QuadVtable*v=pq->vtable;v->draw((char*)pq+v->adj,-1,0.5f);}else{QuadVtable*v=pq->vtable;v->draw((char*)pq+v->adj,-1,-1.0f);}}}

// 0x00157FF8 Previous__15FEGraphicalMenu
struct EntryVtable{char p[48];short disable_adj;short z;bool(*disabled)(void*);};struct Entry{char p0[8];Entry*previous;char p1[84];EntryVtable*vtable;};struct MenuVtable{char p[24];short high_adj;short z;void(*setHigh)(void*,Entry*,bool);};class FEGraphicalMenu{char p0[60];unsigned flags;char p1[12];Entry*highlighted;char p2[36];MenuVtable*vtable;public:void Previous() __asm__("Previous__15FEGraphicalMenu");};void FEGraphicalMenu::Previous(){Entry*tmp=highlighted->previous;if(tmp){if(!(flags&0x40))while(tmp->vtable->disabled((char*)tmp+tmp->vtable->disable_adj)&&tmp!=highlighted)tmp=tmp->previous;MenuVtable*v=vtable;v->setHigh((char*)this+v->high_adj,tmp,true);}}

// 0x00157F58 Next__15FEGraphicalMenu
struct EntryVTable{char p[48];short disable_adj;short g;bool(*disabled)(void*);};struct FEMenuEntry{int entry_num;FEMenuEntry*next;char p[88];EntryVTable*vt;bool GetDisable(){EntryVTable*v=vt;return v->disabled((char*)this+v->disable_adj);}};struct MenuVTable{char p[24];short high_adj;short g;void(*sethigh)(void*,FEMenuEntry*,bool);};class FEGraphicalMenu{char p0[60];int flags;FEMenuEntry*entries;char p1[8];FEMenuEntry*highlighted;char p2[36];MenuVTable*vt;public:void Next();};void FEGraphicalMenu::Next(){FEMenuEntry*tmp=highlighted->next;if(!tmp)tmp=entries;if(!(flags&0x40))while(tmp->GetDisable()&&tmp!=highlighted){tmp=tmp->next;if(!tmp)tmp=entries;}MenuVTable*v=vt;v->sethigh((char*)this+v->high_adj,tmp,true);}

// 0x001578E0 SetAllScale__6FEMenuf
struct entry_vtable{char padding0[88];short set_adjust;short reserved0;void(*set_scale)(void*,float,float);short get_adjust;short reserved1;bool(*get_scale)(void*,float&,float&);};struct FEMenuEntry{char padding0[4];FEMenuEntry*next;char padding1[88];entry_vtable*vtable;};struct FEMenu{char padding0[48];float scale;float scale_high;char padding1[8];FEMenuEntry*entries;void SetAllScale(float);};void FEMenu::SetAllScale(float s){float s1,sh1;FEMenuEntry*tmp=entries;while(tmp!=0){register entry_vtable*v asm("$3")=tmp->vtable;register float*out1 asm("$5")=&s1;register float*out2 asm("$6")=&sh1;asm volatile("" : "+r"(out1),"+r"(out2));if(v->get_scale((char*)tmp+v->get_adjust,*out1,*out2)){v=tmp->vtable;v->set_scale((char*)tmp+v->set_adjust,s*s1,s*sh1);}tmp=tmp->next;}scale=scale*s;scale_high=scale_high*s;}

// 0x00158268 cons__15FETextMultiMenuP12FEMenuSystemG7color32T2ffi
struct FEMenuSystem;struct FEMenuEntry;union color32{unsigned value;struct{unsigned char r,g,b,a;}bytes;unsigned char get_alpha()const{return bytes.a;}};enum{FEMENU_HAS_COLOR=4,FEMENU_HAS_COLOR_HIGH=8};class FETextMultiMenu{char padding0[8];int num_entries;int dy;int half;char padding1[4];int init;char padding2[8];color32 color;color32 color_high;char padding3[4];float scale;float scale_high;char padding4[4];int flags;FEMenuEntry*entries;FEMenuEntry*first_vis_entry;FEMenuEntry*last_vis_entry;FEMenuEntry*highlighted;FEMenuSystem*system;FEMenuEntry*back;public:void cons(FEMenuSystem*,color32,color32,float,float,int);};void FETextMultiMenu::cons(FEMenuSystem*s,color32 c,color32 ch,float sc,float sch,int flg){entries=0;first_vis_entry=0;last_vis_entry=0;highlighted=0;back=0;system=s;flags=flg;num_entries=0;dy=28;half=0;init=false;if(c.get_alpha()==0)flags=!(flags&FEMENU_HAS_COLOR);else{flags|=FEMENU_HAS_COLOR;color=c;}if(ch.get_alpha()==0)flags=!(flags&FEMENU_HAS_COLOR_HIGH);else{flags|=FEMENU_HAS_COLOR_HIGH;color_high=ch;}scale=sc;scale_high=sch;}

// 0x00156280 __6FEMenu
struct stringx{char data[8];};extern "C" void construct_string(stringx*)__asm__("__7stringx");asm(".equ __7stringx,0x0034D3E0");extern void*femenu_vtable;asm(".equ femenu_vtable,0x004DBEA8");class FEMenu{public:int center_x,center_y,num_entries,dy,half,menu_num;int init;stringx font_filename;unsigned color,color_high,color_high_alt;float scale,scale_high;int max_vis_entries,flags;void*entries;void*first_vis_entry;void*last_vis_entry;void*highlighted;void*system;void*back;int back_num;void*submenus;void*active;void*parent;void*helpText;int helpFlags;void*next_sub;void*vtable;FEMenu();};FEMenu::FEMenu(){vtable=&femenu_vtable;construct_string(&font_filename);color=0;color_high=0;color_high_alt=0;center_x=0;center_y=0;num_entries=0;dy=0;half=0;menu_num=0;init=false;scale=1.0f;scale_high=1.0f;max_vis_entries=1;flags=0;entries=0;first_vis_entry=0;last_vis_entry=0;highlighted=0;system=0;back=0;back_num=0;submenus=0;active=0;parent=0;helpText=0;helpFlags=0;next_sub=0;}

// 0x00157600 MakeActive__6FEMenuP6FEMenub
#include "KS/SRC/ks/FEMenu.h"

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

// 0x001580D8 Draw__15FEGraphicalMenu
#include "KS/SRC/ks/FEMenu.h"

extern "C" void draw_panel(PanelFile *, int)
    __asm__("Draw__9PanelFilei");
__asm__(".equ Draw__9PanelFilei, 0x001530B8");

void FEGraphicalMenu::Draw()
{
    if (!parent)
        draw_panel(&panel, 0);
    if (active != 0)
        active->Draw();
    else
    {
        FEMenuEntry *tmp = entries;
        while (tmp != 0)
        {
            if (!(flags & 0x400 && tmp->GetDisable()))
                tmp->Draw();
            tmp = tmp->next;
        }
    }
    if (!parent) {
        draw_panel(&panel, 1);
        __asm__ __volatile__("");
    }
}

// 0x00158900 InitAll__12FEMenuSystem
#include "KS/SRC/ks/FEMenu.h"

extern "C" int getButtonState(int, int)
    __asm__("getButtonState__Fii");
__asm__(".equ getButtonState__Fii, 0x00159270");

void FEMenuSystem::InitAll()
{
    for (int i = 0; i < 14; i++)
        for (int j = 0; j < 2; j++)
            button_down[i][j] = getButtonState(i, j);
    for (int i = 0; i < count; i++)
        menus[i]->Init();
}

// 0x001589D8 MakeActive__12FEMenuSystemiib
#include "KS/SRC/ks/FEMenu.h"

void FEMenuSystem::MakeActive(int index, int sub_menu, bool notify)
{
    if (active != -1 && notify)
        menus[active]->OnUnactivate(menus[index]);
    if (sub_menu == 1)
    {
        if (notify)
            menus[index]->OnActivate();
    }
    else
    {
        if (notify)
            menus[index]->OnActivate(sub_menu);
    }
    active = index;
}

// Source implementation boundary.
// 0x001DA4F0 Load__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::Load() {
}

// 0x001DAA80 OnDown__6FEMenui
#include "KS/SRC/ks/FEMenu.h"
void FEMenu::OnDown(int command) {
    if (active)
        active->OnDown(command);
    else {
        FEMenuNextDispatchVTable *table = *(FEMenuNextDispatchVTable **)((char *)this + 0x74);
        table->next((char *)this + table->adjustment);
    }
}

// 0x001DB258 Mask__15FEGraphicalMenuP9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"
void FEGraphicalMenu::Mask(PanelQuad *quad, float amount) {
    if (parent)
        ((FEGraphicalMenu *)parent)->Mask(quad, amount);
    else
        FrontEnd::Mask(quad, amount);
}

// 0x001DB208 ChangeFade__15FEGraphicalMenuP9PanelQuadbT2f
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"
__asm__(".equ ChangeFade__9PanelQuadbT1f, 0x0014D078");
void FEGraphicalMenu::ChangeFade(
    PanelQuad *quad,
    bool start,
    bool fade_in,
    float time
) {
    if (parent)
        ((FEGraphicalMenu *)parent)->ChangeFade(
            quad,
            start,
            fade_in,
            time);
    else if (quad) {
        quad->ChangeFade(start, fade_in, time);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x001DB1B8 ToggleOn__15FEGraphicalMenuP9PanelQuad
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"
void FEGraphicalMenu::ToggleOn(PanelQuad *quad) {
    if (parent)
        ((FEGraphicalMenu *)parent)->ToggleOn(quad);
    else
        FrontEnd::ToggleOn(quad);
}

// 0x001DADE0 SetPanel__8FrontEndG7stringx
#include "KS/SRC/ks/FEMenu.h"
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ SetFilename__9PanelFileG7stringx, 0x00152360");
void FrontEnd::SetPanel(stringx panel_path) {
    panel.SetFilename(panel_path);
}

// 0x001DA5E0 SetLocation3D__11FEMenuEntryG8vector3d
#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/FEMenu.h"
__asm__(".equ SetLocation3D__10TextStringG8vector3d, 0x001D8770");
void FEMenuEntry::SetLocation3D(vector3d location) {
    text->SetLocation3D(location);
}

// 0x001DA4F8 OnSelect__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::OnSelect() {
}

// 0x001DA500 GetDisable__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

bool FEMenuEntry::GetDisable() {
    return disabled;
}

// 0x001DA508 TurnOn__11FEMenuEntryb
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::TurnOn(bool arg0) {
}

// 0x001DA510 SetNoFlash__11FEMenuEntryb
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::SetNoFlash(bool value) {
    no_flash = value;
}

// 0x001DA518 GetHighlightIntensity__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

float FEMenuEntry::GetHighlightIntensity() {
    return highlight_intensity;
}

// 0x001DA780 SetColor__11FEMenuEntryG7color32
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::SetColor(color32 value) {
    text->color = value;
}

// 0x001DA8B0 GetColor__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

color32 FEMenuEntry::GetColor() {
    return text->color;
}

// 0x001DA950 OnHighlight__11FEMenuEntryb
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::OnHighlight(bool arg0) {
}

// 0x001DA9A8 setBack__6FEMenuP6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::setBack(FEMenu* menu, int number) {
    back = menu;
    back_num = number;
}

// 0x001DA9B8 Load__6FEMenub
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::Load(bool arg0) {
}

// 0x001DA9F0 DrawTop__6FEMenu
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::DrawTop() {
}

// 0x001DA9F8 UpdateInScene__6FEMenu
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::UpdateInScene() {
}

// 0x001DAA28 OnUnactivate__6FEMenuP6FEMenu
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnUnactivate(FEMenu* arg0) {
}

// 0x001DAAD0 OnLeft__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnLeft(int arg0) {
}

// 0x001DAAD8 OnRight__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnRight(int arg0) {
}

// 0x001DAAE0 OnSquare__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnSquare(int arg0) {
}

// 0x001DAAE8 OnCircle__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnCircle(int arg0) {
}

// 0x001DAAF0 OnL1__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnL1(int arg0) {
}

// 0x001DAAF8 OnR1__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnR1(int arg0) {
}

// 0x001DAB00 OnL2__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnL2(int arg0) {
}

// 0x001DAB08 OnR2__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnR2(int arg0) {
}

// 0x001DAB10 OnAnyButtonPress__6FEMenuii
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnAnyButtonPress(int arg0, int arg1) {
}

// 0x001DAB18 OnButtonRelease__6FEMenuii
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnButtonRelease(int arg0, int arg1) {
}

// 0x001DAB20 GetActive__6FEMenu
#include "KS/SRC/ks/FEMenu.h"

FEMenu* FEMenu::GetActive() {
    return active;
}

// 0x001DAB28 Select__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::Select(int arg0) {
}

// 0x001DADD8 GetPanel__8FrontEnd
#include "KS/SRC/ks/FEMenu.h"

PanelFile* FrontEnd::GetPanel() {
    return &panel;
}

// 0x001DAE50 SetPQIndices__8FrontEnd
#include "KS/SRC/ks/FEMenu.h"

void FrontEnd::SetPQIndices() {
}

// 0x001DAF50 SetPQ__20FEGraphicalMenuEntryP9PanelQuad
#include "KS/SRC/ks/FEMenu.h"

void FEGraphicalMenuEntry::SetPQ(PanelQuad* value) {
    pq = value;
    value->AddedToMenu();
}

// 0x001DAF60 SetPQHigh__20FEGraphicalMenuEntryP9PanelQuad
#include "KS/SRC/ks/FEMenu.h"

void FEGraphicalMenuEntry::SetPQHigh(PanelQuad* value) {
    pq_high = value;
    value->AddedToMenu();
}

// 0x001DB528 setVis__15FETextMultiMenuP11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::setVis(FEMenuEntry* arg0) {
}

// 0x001DB530 Init__15FETextMultiMenu
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::Init() {
}

// 0x001DB970 Exit__12FEMenuSystem
#include "KS/SRC/ks/FEMenu.h"

void FEMenuSystem::Exit() {
}

// 0x001DB978 startDraw__12FEMenuSystemib
#include "KS/SRC/ks/FEMenu.h"

void FEMenuSystem::startDraw(int arg0, bool arg1) {
}

// 0x001DB980 endDraw__12FEMenuSystemb
#include "KS/SRC/ks/FEMenu.h"

void FEMenuSystem::endDraw(bool arg0) {
}

// 0x001DB988 GetActiveMenu__12FEMenuSystem
#include "KS/SRC/ks/FEMenu.h"

FEMenu* FEMenuSystem::GetActiveMenu() { return menus[active]; }

// 0x001DA830 GetWidth__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

float FEMenuEntry::GetWidth() { return text->getWidth(); }

// 0x001DAA00 OnActivate__6FEMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::OnActivate(int submenu) { OnActivate(); }

// 0x001DB538 OnUp__15FETextMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::OnUp(int command) { Up(); }

// 0x001DB560 OnDown__15FETextMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::OnDown(int command) { Down(); }

// 0x001DB588 OnLeft__15FETextMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::OnLeft(int command) { Left(); }

// 0x001DB5B0 OnRight__15FETextMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FETextMultiMenu::OnRight(int command) { Right(); }

// 0x001DB738 OnUp__11FEMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMultiMenu::OnUp(int command) { Up(); }

// 0x001DB760 OnDown__11FEMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMultiMenu::OnDown(int command) { Down(); }

// 0x001DB788 OnLeft__11FEMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMultiMenu::OnLeft(int command) { Left(); }

// 0x001DB7B0 OnRight__11FEMultiMenui
#include "KS/SRC/ks/FEMenu.h"

void FEMultiMenu::OnRight(int command) { Right(); }

// 0x001DA520 SetPos__11FEMenuEntryff
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetPos(float x, float y) { text->changePos(x, y); }

// 0x001DA550 SetZ__11FEMenuEntryi
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetZ(int z) { text->changeZ(z); }

// 0x001DA630 SetHJustify__11FEMenuEntryQ24Font9HORIZJUST
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetHJustify(Font::HORIZJUST value) { text->setHJustify(value); }

// 0x001DA660 SetVJustify__11FEMenuEntryQ24Font8VERTJUST
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetVJustify(Font::VERTJUST value) { text->setVJustify(value); }

// 0x001DA690 SetFade__11FEMenuEntrybT1f
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetFade(bool start, bool fade_in, float time) { text->ChangeFade(start, fade_in, time); }

// 0x001DA6C0 SetLineSpacing__11FEMenuEntryi
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetLineSpacing(int spacing) { text->setLineSpacing(spacing); }

// 0x001DA6F0 SetFont__11FEMenuEntryP4Font
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetFont(Font *font) { text->setFont(font); }

// 0x001DA720 SetBehaviorNF__11FEMenuEntryff
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetBehaviorNF(float x, float y) { text->SetBehaviorNF(x, y); }

// 0x001DA750 SetBehavior__11FEMenuEntryb
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetBehavior(bool value) { text->SetBehavior(value); }

// 0x001DA790 SetScale__11FEMenuEntryf
#include "KS/SRC/ks/FEMenu.h"
void FEMenuEntry::SetScale(float value) { text->changeScale(value); }

// 0x001DA850 GetX__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"
float FEMenuEntry::GetX() { return text->getX(); }

// 0x001DA880 GetY__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"
float FEMenuEntry::GetY() { return text->getY(); }

// 0x001DA8C0 getLineNum__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

int FEMenuEntry::getLineNum() { return text->getLineNum(); }

// 0x001DA8F0 GetScale__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"
float FEMenuEntry::GetScale() { return text->GetScale(); }

// 0x001DA920 AddFont__11FEMenuEntryiP4Font
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::AddFont(int index, Font *font) { text->addFont(index, font); }

// 0x001DA9C0 Load__6FEMenu
#include "KS/SRC/ks/FEMenu.h"

void FEMenu::Load() { Load(false); }

// 0x001DB0D0 Load__15FEGraphicalMenu
#include "KS/SRC/ks/FEMenu.h"

void FEGraphicalMenu::Load() { Load(false); }

// 0x001DA7C0 UpdateInScene__11FEMenuEntry
#include "KS/SRC/ks/FEMenu.h"

void FEMenuEntry::UpdateInScene() {
    text->UpdateInScene();
}

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

// 0x001DA438 __tf11FEMenuEntry
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512078"); asm(".equ type_name, 0x004DD970");
extern "C" void *GetTypeInfo() __asm__("__tf11FEMenuEntry");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DA958 __tf6FEMenu
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512080"); asm(".equ type_name, 0x004DD980");
extern "C" void *GetTypeInfo() __asm__("__tf6FEMenu");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DABF0 __tf8FrontEnd
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512088"); asm(".equ type_name, 0x004DD988");
extern "C" void *GetTypeInfo() __asm__("__tf8FrontEnd");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

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

// 0x001DB880 __tf12FEMenuSystem
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512090"); asm(".equ type_name, 0x004DDA08");
extern "C" void *GetTypeInfo() __asm__("__tf12FEMenuSystem");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DAA30 OnUp__6FEMenui
#include "KS/SRC/ks/FEMenu.h"
void FEMenu::OnUp(int command) {
    if (active)
        active->OnUp(command);
    else {
        FEMenuPreviousDispatchVTable *table = *(FEMenuPreviousDispatchVTable **)((char *)this + 0x74);
        table->previous((char *)this + table->adjustment);
    }
}

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

// 0x001DA480 _$_11FEMenuEntry
extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ __builtin_delete,0x002AC6B0");extern const char entry_vtable[];__asm__(".equ entry_vtable,0x004DC018");struct text_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct text{char p0[76];text_vtable*vtable;};struct entry_layout{char p0[36];text*description;char p1[56];const void*vtable;};extern "C" void destroy_entry(entry_layout*self,int deleting) __asm__("_$_11FEMenuEntry");void destroy_entry(entry_layout*self,int deleting){self->vtable=entry_vtable;if(self->description){text*x=self->description;text_vtable*t=x->vtable;t->destroy((char*)x+t->adjustment,3);}if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}

// 0x001DAE68 _$_20FEGraphicalMenuEntry
extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ __builtin_delete,0x002AC6B0");extern const char entry_vtable[];__asm__(".equ entry_vtable,0x004DC018");struct text_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*,int);};struct text{char p0[76];text_vtable*vtable;};struct entry_layout{char p0[36];text*description;char p1[56];const void*vtable;};extern "C" void destroy_graphical(entry_layout*self,int deleting) __asm__("_$_20FEGraphicalMenuEntry");void destroy_graphical(entry_layout*self,int deleting){self->vtable=entry_vtable;if(self->description){text*x=self->description;text_vtable*t=x->vtable;t->destroy((char*)x+t->adjustment,3);}if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}

// 0x001DAC38 _$_8FrontEnd
extern "C" void string_dtor(void*,int) __asm__("_$_7stringx");extern "C" void panel_dtor(void*,int) __asm__("_$_9PanelFile");extern "C" void pam_dtor(void*,int) __asm__("_$_16PanelAnimManager");extern "C" void object_delete(void*) __asm__("__builtin_delete");__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ _$_9PanelFile,0x001522C0");__asm__(".equ _$_16PanelAnimManager,0x00155480");__asm__(".equ __builtin_delete,0x002AC6B0");extern void*frontend_vtable;__asm__(".equ frontend_vtable,0x004DBE58");struct frontend{char pam[128];char panel[52];char path[12];void*vtable;};extern "C" void destroy_frontend(frontend*self,int deleting) __asm__("_$_8FrontEnd");void destroy_frontend(frontend*self,int deleting){self->vtable=&frontend_vtable;string_dtor(self->path,2);panel_dtor(self->panel,2);pam_dtor(self->pam,2);if(deleting&1){object_delete(self);int dead;__asm__("" : "=r"(dead));}}
