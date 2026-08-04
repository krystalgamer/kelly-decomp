// Matching decompilation blocks selected by generated build shims.


// 0x0018F6C0 ReturnToFE__13BeachFrontEnd
#include "KS/SRC/ks/BeachFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"

void BeachFrontEnd::ReturnToFE() { frontendmanager.return_to_fe = true; ((PauseMenuSystem *)system)->PrepareToEndLevel(); }

#if defined(KELLY_DECOMP_FUNCTION_00190850)
// 0x00190850 OnButtonRelease__13BeachFrontEndii
class BeachFrontEnd { char padding0[0x924]; int in_bio_mode; char padding1[0x59c]; int bio_up_pressed; int bio_down_pressed; public: void OnButtonRelease(int controller, int button); };
void BeachFrontEnd::OnButtonRelease(int controller, int button) { if (in_bio_mode) { if (button == 2) bio_up_pressed = 0; else if (button == 3) bio_down_pressed = 0; } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00194120)
// 0x00194120 Realistic__13BeachFrontEndb
struct developer_options { char padding[0x194]; bool e3_build; char padding2[4]; bool realistic_fe; };
extern developer_options *developer_options_instance __asm__("developer_options_instance");
asm(".equ developer_options_instance, 0x0046B180");
class BeachFrontEnd { public: bool Realistic(bool press_build_only); };
bool BeachFrontEnd::Realistic(bool press_build_only)
{
    bool result;
    if (press_build_only)
        result = developer_options_instance->e3_build;
    else
        result = developer_options_instance->e3_build || developer_options_instance->realistic_fe;
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018F4F0)
// 0x0018F4F0 OnLevelLoaded__13BeachFrontEnd
struct pause_menu_vtable {
    char padding[0x50];
    short start_draw_adjust;
    short reserved;
    void (*start_draw)(void *self, int menu, bool pause_game);
};

struct PauseMenuSystem {
    char padding[0x8C];
    pause_menu_vtable *vtable;

    void startDraw(int menu, bool pause_game)
    {
        vtable->start_draw(
            (char *)this + vtable->start_draw_adjust,
            menu,
            pause_game
        );
    }
};

struct frontend_manager_layout {
    char padding[0x15688];
    int map_loading_screen;
};

extern frontend_manager_layout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");

class BeachFrontEnd {
    char padding[0x50];
    PauseMenuSystem *system;
    char state_padding[0xEC4];
    int sliding_in;
    int ignore_controller;

public:
    void OnLevelLoaded();
};

void BeachFrontEnd::OnLevelLoaded()
{
    sliding_in = false;
    ignore_controller = true;
    system->startDraw(15, true);
    frontendmanager.map_loading_screen = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018E710)
// 0x0018E710 UpdateInScene__13BeachFrontEnd
struct em{char p0[16];int draw_enabled;char p1[428];int state,substate;char p2[60];int blocked;};struct manager{char p0[12];em*entity_manager;};struct beach{char p0[316];manager*manager_ptr;char p1[2180];int offset_set;char p2[1344];int in_frontend;};extern "C" void set_offset(beach*) __asm__("SetOffset__13BeachFrontEnd");__asm__(".equ SetOffset__13BeachFrontEnd,0x00194160");extern "C" void update_scene(beach*self) __asm__("UpdateInScene__13BeachFrontEnd");void update_scene(beach*self){if(self->in_frontend){em*e=self->manager_ptr->entity_manager;bool ok=e->state&&e->substate==3&&!e->blocked&&e->draw_enabled==1;if(ok&&!self->offset_set)set_offset(self);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001907C0)
// 0x001907C0 OnAnyButtonPress__13BeachFrontEndii
struct FEEntityManager{char pad[448];int cam_state;};struct Manager{char pad[12];FEEntityManager*em;};class BeachFrontEnd{public:char p0[256];int slide_state;char p1[56];Manager*manager;char p2[3528];int in_frontend;char p3[16];int guard_a;int guard_b;char p4[24];int in_bio_mode;void OnAnyButtonPress(int,int)__asm__("OnAnyButtonPress__13BeachFrontEndii");};extern "C" void jump(FEEntityManager*,int)__asm__("JumpTo__15FEEntityManageri");__asm__(".equ JumpTo__15FEEntityManageri,0x001C4C88");void BeachFrontEnd::OnAnyButtonPress(int c,int b){if((guard_a||guard_b||(unsigned)(slide_state-1)<2)&&!in_frontend)return;if(in_bio_mode)return;if(!in_frontend)return;FEEntityManager*em=manager->em;int moving=em->cam_state^1;asm volatile("" : "+r"(moving), "+r"(em));if(moving&&b!=7)jump(em,3);}
#endif

// Source implementation boundary.
// 0x0018F548 OnLevelEnding__13BeachFrontEnd
#include "KS/SRC/ks/BeachFrontEnd.h"

void BeachFrontEnd::OnLevelEnding() {
    sliding_in = true;
}

// 0x001DCCD8 OnUnactivate__13BeachFrontEnd
#include "KS/SRC/ks/BeachFrontEnd.h"

void BeachFrontEnd::OnUnactivate() {
    exitingWithoutSelect = false;
}

// 0x001DCC60 __tf13BeachFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCC60() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCC60[] __asm__("__ti13BeachFrontEnd");
extern const char name_001DCC60[];
extern void *base_type_001DCC60[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13BeachFrontEnd, 0x005A2C98");
__asm__(".equ name_001DCC60, 0x004DDD18");
__asm__(".equ base_type_001DCC60, 0x004DDC48");
extern "C" void **Rtti_001DCC60() __asm__("__tf13BeachFrontEnd");
void **Rtti_001DCC60()
{
    if (!type_001DCC60[0]) {
        BaseRtti_001DCC60();
        __rtti_class(type_001DCC60, name_001DCC60, base_type_001DCC60, 1);
    }
    return type_001DCC60;
}
