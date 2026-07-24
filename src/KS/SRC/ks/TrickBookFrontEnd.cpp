// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001974F0)
// 0x001974F0 TrickOK__17TrickBookFrontEndi
#include "KS/SRC/ks/TrickBookFrontEnd_shared.h"
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00196540)
// 0x00196540 Select__17TrickBookFrontEndi
struct entry{int entry_num;};struct state{char p0[76];entry*highlighted;};struct trick;struct em{char p0[448];int state,substate;char p1[204];int anim_state;};struct manager{char p0[12];em*entity_manager;};struct trickbook{char p0[316];manager*manager_ptr;char p1[36];trick**tricks[6];state*State2[6];};extern "C" void play_trick(em*,trick*) __asm__("PlaySurferTrick__15FEEntityManagerP11SurferTrick");__asm__(".equ PlaySurferTrick__15FEEntityManagerP11SurferTrick,0x001C3098");extern "C" void select(trickbook*self,int idx) __asm__("Select__17TrickBookFrontEndi");void select(trickbook*self,int idx){em*e=self->manager_ptr->entity_manager;bool ok=e->state&&e->substate==2;if(!ok)return;int done=e->anim_state^1;if(!done)return;int trick_idx=self->State2[idx]->highlighted->entry_num;play_trick(e,self->tricks[idx][trick_idx]);int dead;__asm__("" : "=r"(dead));}
#endif
