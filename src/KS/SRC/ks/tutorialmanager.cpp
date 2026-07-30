// Matching decompilation blocks selected by generated build shims.

#include "tutorialmanager.h"

#if defined(KELLY_DECOMP_FUNCTION_001DC3C8)
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **event_recipient_rtti() __asm__("__tf14EventRecipient");
extern "C" void *tutorial_type[] __asm__("__ti18IGOTutorialManager");
extern "C" const char tutorial_name[] __asm__("tutorial_type_name");
extern "C" void *event_recipient_type[] __asm__("__ti14EventRecipient");
__asm__(".equ __tf14EventRecipient, 0x0035FE90");
__asm__(".equ __ti18IGOTutorialManager, 0x005A2BC8");
__asm__(".equ tutorial_type_name, 0x004DDC00");
__asm__(".equ __ti14EventRecipient, 0x005120A8");

extern "C" void **tutorial_rtti() __asm__("__tf18IGOTutorialManager");
void **tutorial_rtti()
{
    if (!tutorial_type[0]) {
        event_recipient_rtti();
        __rtti_si(tutorial_type, tutorial_name, event_recipient_type);
    }
    return tutorial_type;
}
#endif

unsigned int nslGetSoundStatus(unsigned int sound);
void nslStopSound(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");

#if defined(KELLY_DECOMP_FUNCTION_0015A060)
// 0x0015A060 EndChain__18IGOTutorialManager
void IGOTutorialManager::EndChain() {
    air_trick_in_chain = false;
    face_trick_in_chain = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A0B8)
// 0x0015A0B8 SetCurrentGap__18IGOTutorialManageri
void IGOTutorialManager::SetCurrentGap(int gap) {
    current_gap = gap;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A2C0)
// 0x0015A2C0 StopCurrentVO__18IGOTutorialManager
void IGOTutorialManager::StopCurrentVO()
{
    if (nslGetSoundStatus(current_VO) != 0) {
        nslStopSound(current_VO);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A070)
// 0x0015A070 SetCurrentTrick__18IGOTutorialManageri
__asm__(".equ GTrickList, 0x00427CA8");

void IGOTutorialManager::SetCurrentTrick(int trick_num)
{
    current_trick = trick_num;

    if (GTrickList[current_trick].trick_type == TRICKTYPE_AERIAL) {
        air_trick_in_chain = true;
        face_trick_in_chain = false;
    } else if (
        GTrickList[current_trick].trick_type == TRICKTYPE_FACE
    ) {
        face_trick_in_chain = true;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001596D0)
// 0x001596D0 SetTutorialSection__18IGOTutorialManageri
#include "KS/SRC/ks/tutorialmanager.h"
enum { LEVEL_INDOOR_1, LEVEL_INDOOR_2 };
#define FIRST_SET_END 8
#define SECOND_SET_END 30
extern int Tutorial_Step_Num;
__asm__(".equ Tutorial_Step_Num, 0x0043B550");
void IGOTutorialManager::SetTutorialSection(int tutorial_level) {
    if (tutorial_level == LEVEL_INDOOR_1) {
        current_step = 0;
        last_step = FIRST_SET_END;
    } else if (tutorial_level == LEVEL_INDOOR_2) {
        current_step = FIRST_SET_END;
        last_step = SECOND_SET_END;
    } else {
        current_step = SECOND_SET_END;
        last_step = Tutorial_Step_Num;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00159668)
// 0x00159668 Reset__18IGOTutorialManager
struct game { char padding[548]; int level_id; };
extern game *g_game_ptr;
__asm__(".equ g_game_ptr,0x0046AC64");
struct tutorial_layout {
    char padding[32];
    volatile int finished;
    volatile int first_step;
    volatile int needs_tube;
    volatile int air_trick;
    int padding0;
    volatile int face_trick;
    volatile int perfect;
    volatile int current_vo;
    volatile int current_trick;
    volatile int current_gap;
    volatile int current_step;
    volatile float current_step_time;
    volatile int show_advancement;
    volatile int show_hint;
};
extern "C" void set_section(tutorial_layout *, int) __asm__("SetTutorialSection__18IGOTutorialManageri");
__asm__(".equ SetTutorialSection__18IGOTutorialManageri,0x001596D0");
extern "C" void reset_tutorial(tutorial_layout *self) __asm__("Reset__18IGOTutorialManager");
void reset_tutorial(tutorial_layout *self)
{
    register tutorial_layout *object __asm__("$2") = self;
    object->first_step = 1;
    register game *current_game __asm__("$3") = g_game_ptr;
    register int negative_one __asm__("$6") = -1;
    object->current_gap = negative_one;
    object->finished = 0;
    object->current_step = 0;
    object->current_trick = negative_one;
    object->needs_tube = 0;
    object->air_trick = 0;
    object->face_trick = 0;
    object->perfect = 0;
    object->current_step_time = 0.0f;
    object->show_advancement = 0;
    object->show_hint = 0;
    object->current_vo = 0;
    set_section(object, current_game->level_id);
    __asm__ __volatile__("" : : : "memory");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A2F8)
// 0x0015A2F8 OnEvent__18IGOTutorialManager5EVENTii
struct tutorial_step { char padding[84]; int kind; char padding2[12]; };
extern int perfect_landing_flag; extern tutorial_step tutorial_steps[];
__asm__(".equ perfect_landing_flag,0x004D06EC"); __asm__(".equ tutorial_steps,0x0043A5B0");
struct tutorial_layout { char padding[40]; int current_step; char padding2[28]; int step_flag; int is_perfect; };
extern "C" void tutorial_event(tutorial_layout *self, int event, int param1, int param2) __asm__("OnEvent__18IGOTutorialManager5EVENTii");
void tutorial_event(tutorial_layout *self, int event, int param1, int param2)
{
    if (event == 0) {
        if (param2 & perfect_landing_flag) {
            self->is_perfect = true;
            return;
        }
    }
    if (event == 1) {
        if (tutorial_steps[self->current_step].kind == 6) {
            self->step_flag = event;
            return;
        }
        self->step_flag = 0;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A0C0)
// 0x0015A0C0 play_sound__18IGOTutorialManagerPCc
struct DevOptions{char pad[72];int no_audio;};extern DevOptions*g_options;extern "C" unsigned load(const char*)__asm__("nslLoadSource__FPCc");extern "C" unsigned add(unsigned)__asm__("nslAddSound__FUi");extern "C" void play(unsigned)__asm__("nslPlaySound__FUi");extern "C" void debug_print(const char*,...)__asm__("debug_print__FPCce");extern const char missing[];__asm__(".equ g_options,0x0046B180");__asm__(".equ nslLoadSource__FPCc,0x0038C130");__asm__(".equ nslAddSound__FUi,0x0038CAF8");__asm__(".equ nslPlaySound__FUi,0x0038CB20");__asm__(".equ debug_print__FPCce,0x00120790");__asm__(".equ missing,0x004CFB48");unsigned IGOTutorialManager::play_sound(const char*name){unsigned snd=0;if(!g_options->no_audio){unsigned s=load(name);if(s!=0){snd=add(s);if(snd!=0)play(snd);}else debug_print(missing,name);}return snd;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001595E0)
// 0x001595E0 _$_18IGOTutorialManager
struct TextVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct BoxText{char pad[76];TextVtable*vtable;};extern "C" void string_dtor(void*,int)__asm__("_$_7stringx");extern "C" void base_dtor(void*,int)__asm__("_$_14EventRecipient");extern const char tutorial_vtable[];__asm__(".equ _$_7stringx,0x0034D6E0");__asm__(".equ _$_14EventRecipient,0x00349B98");__asm__(".equ tutorial_vtable,0x004DB0A0");struct Tutorial{const void*vtable;char pad0[84];char ins[8],help[8],button[8];BoxText*instruction;};extern "C" void destroy(Tutorial*self,int deleting)__asm__("_$_18IGOTutorialManager");void destroy(Tutorial*self,int deleting){self->vtable=tutorial_vtable;if(self->instruction){TextVtable*v=self->instruction->vtable;v->destroy((char*)self->instruction+v->adjust,3);}string_dtor(self->button,2);string_dtor(self->help,2);string_dtor(self->ins,2);base_dtor(self,deleting);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00159720)
// 0x00159720 Draw__18IGOTutorialManager
#include "KS/SRC/ks/FEPanel_shared.h"
#include "KS/SRC/ks/kellyslater_controller_shared.h"
#include "KS/SRC/wds.h"
#include "KS/SRC/ks/tutorialmanager.h"

__asm__(".equ is_paused__C4game, 0x0027D968");

void IGOTutorialManager::Draw(void)
{
	// Draw help message
	if (!g_game_ptr->is_paused() && (show_advancement_text || show_hint_text) && !AlmostFinished() &&
		(g_world_ptr->get_ks_controller(g_game_ptr->get_active_player()))->get_super_state() != SUPER_STATE_FLYBY)
		instruction_text->Draw();
}
#endif
