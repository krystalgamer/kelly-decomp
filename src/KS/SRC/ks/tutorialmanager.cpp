// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0015A060)
// 0x0015A060 EndChain__18IGOTutorialManager
class IGOTutorialManager {
    char padding[0x34];
    bool air_trick_in_chain;
    bool face_trick_in_chain;
public:
    void EndChain();
};

void IGOTutorialManager::EndChain() {
    air_trick_in_chain = false;
    face_trick_in_chain = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A0B8)
// 0x0015A0B8 SetCurrentGap__18IGOTutorialManageri
class IGOTutorialManager {
    char padding[0x44];
    int current_gap;

public:
    void SetCurrentGap(int gap);
};

void IGOTutorialManager::SetCurrentGap(int gap) {
    current_gap = gap;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015A2C0)
// 0x0015A2C0 StopCurrentVO__18IGOTutorialManager
#include "decomp_annotations.h"

unsigned int nslGetSoundStatus(unsigned int sound);
void nslStopSound(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");

class IGOTutorialManager {
    char padding[0x3C];
    unsigned int current_VO;

public:
    void StopCurrentVO();
};

void IGOTutorialManager::StopCurrentVO()
{
    if (nslGetSoundStatus(current_VO) != 0) {
        nslStopSound(current_VO);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
