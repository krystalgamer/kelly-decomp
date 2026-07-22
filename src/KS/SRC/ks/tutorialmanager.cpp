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
