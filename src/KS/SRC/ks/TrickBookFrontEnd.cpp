// Matching decompilation blocks selected by generated build shims.


// 0x001974F0 TrickOK__17TrickBookFrontEndi
#include "KS/SRC/ks/TrickBookFrontEnd.h"
enum { TRICKBOOKTYPE_NOTYPE = 4 };
#define PAD_NONE 255
__asm__(".equ GTrickList, 0x00427CA8");
bool TrickBookFrontEnd::TrickOK(int t) {
    SurferTrick *st = &(GTrickList[t]);
    bool right_type = st->trickbook_type != TRICKBOOKTYPE_NOTYPE;
    bool has_buttons = st->button1 != PAD_NONE;
    bool has_anim = st->anim_id != -1;
    bool bad_trick = false;
    return right_type && has_buttons && has_anim && !bad_trick;
}

// 0x00196540 Select__17TrickBookFrontEndi
struct entry{int entry_num;};struct state{char p0[76];entry*highlighted;};struct trick;struct em{char p0[448];int state,substate;char p1[204];int anim_state;};struct manager{char p0[12];em*entity_manager;};struct trickbook{char p0[316];manager*manager_ptr;char p1[36];trick**tricks[6];state*State2[6];};extern "C" void play_trick(em*,trick*) __asm__("PlaySurferTrick__15FEEntityManagerP11SurferTrick");__asm__(".equ PlaySurferTrick__15FEEntityManagerP11SurferTrick,0x001C3098");extern "C" void select(trickbook*self,int idx) __asm__("Select__17TrickBookFrontEndi");void select(trickbook*self,int idx){em*e=self->manager_ptr->entity_manager;bool ok=e->state&&e->substate==2;if(!ok)return;int done=e->anim_state^1;if(!done)return;int trick_idx=self->State2[idx]->highlighted->entry_num;play_trick(e,self->tricks[idx][trick_idx]);int dead;__asm__("" : "=r"(dead));}

// 0x001963A8 Init__17TrickBookFrontEnd
struct EntryVtable{char pad[48];short disable_adjust;short z;bool(*disabled)(void*);};struct Entry{int entry_num;Entry*next;char pad[88];EntryVtable*vtable;};struct MenuVtable{char pad[24];short high_adjust;short z;void(*set_high)(void*,Entry*,bool);};struct SubMenu{char pad0[64];Entry*entries;char pad1[48];MenuVtable*vtable;};struct TrickBookFrontEndLayout{char pad0[64];Entry*entries;char pad1[312];SubMenu*State2[1];};extern "C" void base_init(TrickBookFrontEndLayout*)__asm__("Init__15FEGraphicalMenu");__asm__(".equ Init__15FEGraphicalMenu,0x00158090");extern "C" void init_trickbook(TrickBookFrontEndLayout*self)__asm__("Init__17TrickBookFrontEnd");void init_trickbook(TrickBookFrontEndLayout*self){base_init(self);Entry*tmp=self->entries;int i=0;while(tmp){EntryVtable*ev=tmp->vtable;if(!ev->disabled((char*)tmp+ev->disable_adjust)){SubMenu*m=self->State2[i];MenuVtable*v=m->vtable;v->set_high((char*)m+v->high_adjust,m->entries,true);}tmp=tmp->next;i++;}}

// 0x00196A18 Draw__17TrickBookFrontEnd
struct QuadVtable{char pad0[24];short turn_adjust;short z0;void(*turn)(void*,bool);char pad1[32];short draw_adjust;short z1;void(*draw)(void*,int,float);};struct PanelQuad{char pad[404];QuadVtable*vtable;};struct TrickBookFrontEndLayout{char pad0[412];PanelQuad*bkg;char pad1[8];bool wait_for_camera;};
#define TURN_QUAD(q,on) ((q)->vtable->turn((char*)(q)+(q)->vtable->turn_adjust,on))
#define DRAW_QUAD(q) ((q)->vtable->draw((char*)(q)+(q)->vtable->draw_adjust,0,-1.0f))
extern "C" void draw_trickbook(TrickBookFrontEndLayout*self)__asm__("Draw__17TrickBookFrontEnd");void draw_trickbook(TrickBookFrontEndLayout*self){if(self->wait_for_camera)return;TURN_QUAD(self->bkg,true);DRAW_QUAD(self->bkg);TURN_QUAD(self->bkg,false);}
