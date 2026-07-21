// Matching decompilation blocks selected by generated build shims.

#include "tutorialmanager.h"

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
