// Matching decompilation blocks selected by generated build shims.


// 0x0018A370 OnUp__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::OnUp(int controller) { up_pressed = true; counter = 3; }

// 0x0018A388 OnDown__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::OnDown(int controller) { down_pressed = true; counter = 3; }

#if defined(KELLY_DECOMP_FUNCTION_0018AAF0)
// 0x0018AAF0 OnButtonRelease__17SurferBioFrontEndii
class SurferBioFrontEnd { char padding[0x1ec]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void SurferBioFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189270)
// 0x00189270 AdjustHandicap__14SurferFrontEndb
// Matching-only empty barrier preserves the released non-tail call shape.
#include "decomp_annotations.h"

class SurferFrontEnd {
    char padding[0x2c8];
    int hcap;

public:
    void AdjustHandicap(bool left);
    void AdjustHandicapAbso(int absolute);
};

__asm__(".equ AdjustHandicapAbso__14SurferFrontEndi, 0x001892A8");

void SurferFrontEnd::AdjustHandicap(bool left)
{
    if(left) {
        AdjustHandicapAbso(hcap-1);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
    else {
        AdjustHandicapAbso(hcap+1);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00187A40)
// 0x00187A40 getName__14SurferFrontEndi
#include "KS/SRC/stringx.h"
struct SurferData {
    char padding[0x16c];
    char name[0x120];
};
extern SurferData SurferDataArray[];
__asm__(".equ SurferDataArray, 0x004254E0");
extern "C" void construct_string(
    stringx *result,const char *text,int length
) __asm__("__7stringxPCci");
extern "C" void copy_string(
    stringx *result,const stringx *source
) __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(
    stringx *value,int flags
) __asm__("_$_7stringx");
extern "C" stringx *get_surfer_name(
    stringx *result,int index
) __asm__("getName__14SurferFrontEndi");
__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
stringx *get_surfer_name(stringx *result,int index) {
    char storage[8] __attribute__((aligned(16)));
    stringx *tmp=(stringx *)storage;
    construct_string(tmp,SurferDataArray[index].name,-1);
    register const stringx *source __asm__("$5")=tmp;
    __asm__ __volatile__("" : "+r"(source));
    copy_string(result,source);
    destroy_string(tmp,2);
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00187AA0)
// 0x00187AA0 getAbbr__14SurferFrontEndi
#include "KS/SRC/stringx.h"
struct SurferData {
    char padding[0x21c];
    char abbr[0x70];
};
extern SurferData SurferDataArray[];
__asm__(".equ SurferDataArray, 0x004254E0");
extern "C" void construct_string(stringx *,const char *,int)
    __asm__("__7stringxPCci");
extern "C" void copy_string(stringx *,const stringx *)
    __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(stringx *,int)
    __asm__("_$_7stringx");
extern "C" stringx *get_surfer_abbr(stringx *,int)
    __asm__("getAbbr__14SurferFrontEndi");
__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
stringx *get_surfer_abbr(stringx *result,int index) {
    char storage[8] __attribute__((aligned(16)));
    stringx *tmp=(stringx *)storage;
    construct_string(tmp,SurferDataArray[index].abbr,-1);
    register const stringx *source __asm__("$5")=tmp;
    __asm__ __volatile__("" : "+r"(source));
    copy_string(result,source);
    destroy_string(tmp,2);
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189800)
// 0x00189800 OnAnyButtonPress__14SurferFrontEndii
struct entity_manager {
    char padding[0x1c0]; int camera_moving;
};
struct manager_layout { char padding[0xc]; entity_manager *em; };
extern "C" void jump_to(entity_manager *,int)
    __asm__("JumpTo__15FEEntityManageri");
__asm__(".equ JumpTo__15FEEntityManageri, 0x001C4C88");
class SurferFrontEnd {
    char padding[0x2c0]; manager_layout *manager;
    char padding2[0x14]; int in_tb_or_bio;
public:
    void OnAnyButtonPress(int controller,int button);
};
void SurferFrontEnd::OnAnyButtonPress(int,int button) {
    int moving=manager->em->camera_moving^1;
    if (!moving) return;
    if (button!=6 && button!=7) {
        if (in_tb_or_bio) jump_to(manager->em,2);
        else jump_to(manager->em,1);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189A80)
// 0x00189A80 checkHigh__14SurferFrontEndb
struct surfer{char p0[76];void*highlighted;char p1[408];void*Bio,*Trick,*Personality,*Continue,*ScrapBook,*Handicap;};extern "C" void set_state(surfer*,int) __asm__("SetState__14SurferFrontEndi");__asm__(".equ SetState__14SurferFrontEndi,0x00188A38");extern "C" void check(surfer*self,bool set) __asm__("checkHigh__14SurferFrontEndb");void check(surfer*self,bool set){if(set)set_state(self,(self->highlighted==self->Bio)?1:(self->highlighted==self->Trick)?2:(self->highlighted==self->Personality)?3:(self->highlighted==self->ScrapBook)?4:(self->highlighted==self->Continue)?5:(self->highlighted==self->Handicap)?6:0 );int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189680)
// 0x00189680 OnCross__14SurferFrontEndi
struct active_vtable{char p0[184];short adjustment;short x0;void(*cross)(void*,int);};struct menu{char p0[116];active_vtable*vtable;};struct em{char p0[448];int moving;};struct manager_type{char p0[12];em*entity_manager;};struct surfer{char p0[96];menu*active;char p1[604];manager_type*manager_ptr;char p2[20];int in_tb_or_bio;char p3[4];int most_recent_controller;};extern "C" void jump(em*,int) __asm__("JumpTo__15FEEntityManageri");extern "C" void base_cross(void*,int) __asm__("OnCross__6FEMenui");__asm__(".equ JumpTo__15FEEntityManageri,0x001C4C88");__asm__(".equ OnCross__6FEMenui,0x00157860");extern "C" void cross(surfer*self,int c) __asm__("OnCross__14SurferFrontEndi");void cross(surfer*self,int c){self->most_recent_controller=c;if(self->active){em*e=self->manager_ptr->entity_manager;int moving=e->moving^1;if(moving){if(self->in_tb_or_bio)jump(e,2);}else{menu*m=self->active;active_vtable*t=m->vtable;t->cross((char*)m+t->adjustment,c);}}else base_cross(self,c);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00188C68)
// 0x00188C68 OnUp__14SurferFrontEndi
struct vtable{char pad[512];};struct active_vtable{char pad[152];short adjust;short reserved;void(*action)(void*,int);};struct Active{char pad[116];active_vtable*vtable;};struct self_vtable{char pad[432];short adjust;short reserved;void(*action)(void*);};struct Surfer{char pad0[96];Active*active;char pad1[16];self_vtable*vtable;char pad2[240];int availability[25];char pad3[280];int current_index;};extern "C" void check(Surfer*,bool)__asm__("checkHigh__14SurferFrontEndb");__asm__(".equ checkHigh__14SurferFrontEndb,0x00189A80");extern "C" void action(Surfer*self,int c)__asm__("OnUp__14SurferFrontEndi");void action(Surfer*self,int c){if(self->active){Active*a=self->active;active_vtable*t=a->vtable;t->action((char*)a+t->adjust,c);}else{if(self->availability[self->current_index]!=0)return;self_vtable*t=self->vtable;t->action((char*)self+t->adjust);check(self,true);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00188CE8)
// 0x00188CE8 OnDown__14SurferFrontEndi
struct vtable{char pad[512];};struct active_vtable{char pad[160];short adjust;short reserved;void(*action)(void*,int);};struct Active{char pad[116];active_vtable*vtable;};struct self_vtable{char pad[440];short adjust;short reserved;void(*action)(void*);};struct Surfer{char pad0[96];Active*active;char pad1[16];self_vtable*vtable;char pad2[240];int availability[25];char pad3[280];int current_index;};extern "C" void check(Surfer*,bool)__asm__("checkHigh__14SurferFrontEndb");__asm__(".equ checkHigh__14SurferFrontEndb,0x00189A80");extern "C" void action(Surfer*self,int c)__asm__("OnDown__14SurferFrontEndi");void action(Surfer*self,int c){if(self->active){Active*a=self->active;active_vtable*t=a->vtable;t->action((char*)a+t->adjust,c);}else{if(self->availability[self->current_index]!=0)return;self_vtable*t=self->vtable;t->action((char*)self+t->adjust);check(self,true);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018A3A0)
// 0x0018A3A0 Draw__17SurferBioFrontEnd
struct draw_vtable{char padding[24];short adjustment;short reserved;void(*draw)(void*);};struct Drawable{char padding[76];draw_vtable*vtable;};struct BioParent{char padding[740];int current_surfer_index;};class SurferBioFrontEnd{char padding0[256];char panel[96];Drawable*bios[15];char padding1[0];BioParent*bio_parent;Drawable*firstname;Drawable*lastname;Drawable*intro;char padding2[60];int wait_for_camera;public:void Draw();};extern "C" void draw_panel(void*,int)__asm__("Draw__9PanelFilei");asm(".equ Draw__9PanelFilei,0x001530B8");inline void draw_obj(Drawable*d){draw_vtable*v=d->vtable;v->draw((char*)d+v->adjustment);}void SurferBioFrontEnd::Draw(){if(wait_for_camera)return;register int layer asm("$5")=0;asm volatile("" : "+r"(layer));draw_panel((char*)this+256,layer);draw_obj(bios[bio_parent->current_surfer_index]);draw_obj(firstname);draw_obj(lastname);draw_obj(intro);}
#endif

// Source implementation boundary.
// 0x001DCC20 Select__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::Select(int arg0) {
}

// 0x001DCC48 OnLeft__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::OnLeft(int arg0) {
}

// 0x001DCC50 OnRight__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::OnRight(int arg0) {
}

// 0x001DCC58 OnCross__17SurferBioFrontEndi
#include "KS/SRC/ks/SurferFrontEnd.h"

void SurferBioFrontEnd::OnCross(int arg0) {
}

// 0x001DCC28 GetPointer__17SurferBioFrontEndPCc
#include "KS/SRC/ks/SurferFrontEnd.h"

PanelQuad *SurferBioFrontEnd::GetPointer(const char *name) { return FrontEnd::GetPointer(name); }

// 0x001DCB88 OnButtonRelease__14SurferFrontEndii
struct menu_vtable {
    char padding[0x100];
    short adjustment;
    short padding2;
    void (*on_button_release)(void *self, int controller, int button);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class SurferFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnButtonRelease(int controller, int button);
};

void SurferFrontEnd::OnButtonRelease(int controller, int button)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_button_release(
            (char *)menu + table->adjustment,
            controller,
            button
        );
    }
}

// 0x001DCB30 __tf14SurferFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCB30() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCB30[] __asm__("__ti14SurferFrontEnd");
extern const char name_001DCB30[];
extern void *base_type_001DCB30[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14SurferFrontEnd, 0x005A2C78");
__asm__(".equ name_001DCB30, 0x004DDCE8");
__asm__(".equ base_type_001DCB30, 0x004DDC48");
extern "C" void **Rtti_001DCB30() __asm__("__tf14SurferFrontEnd");
void **Rtti_001DCB30()
{
    if (!type_001DCB30[0]) {
        BaseRtti_001DCB30();
        __rtti_class(type_001DCB30, name_001DCB30, base_type_001DCB30, 1);
    }
    return type_001DCB30;
}

// 0x001DCBC8 __tf17SurferBioFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCBC8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCBC8[] __asm__("__ti17SurferBioFrontEnd");
extern const char name_001DCBC8[];
extern void *base_type_001DCBC8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti17SurferBioFrontEnd, 0x005A2C88");
__asm__(".equ name_001DCBC8, 0x004DDD00");
__asm__(".equ base_type_001DCBC8, 0x004DDC48");
extern "C" void **Rtti_001DCBC8() __asm__("__tf17SurferBioFrontEnd");
void **Rtti_001DCBC8()
{
    if (!type_001DCBC8[0]) {
        BaseRtti_001DCBC8();
        __rtti_class(type_001DCBC8, name_001DCBC8, base_type_001DCBC8, 1);
    }
    return type_001DCBC8;
}
