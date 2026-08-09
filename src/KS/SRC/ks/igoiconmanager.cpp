// Matching decompilation blocks selected by generated build shims.


// 0x00163AC0 __Q214IGOIconManager12IconResource
#include "KS/SRC/ks/igoiconmanager.h"

IGOIconManager::IconResource::IconResource() { texture = 0; trickIdx = -1; timesDisplayed = 0; }

// 0x00163C78 __Q214IGOIconManager4Icon
#include "KS/SRC/ks/igoiconmanager.h"

IGOIconManager::Icon::Icon() { show = true; resource = 0; }

// 0x00163D60 SetShow__Q214IGOIconManager4Iconb
#include "KS/SRC/ks/igoiconmanager.h"

void IGOIconManager::Icon::SetShow(bool visible) {
    show = visible;
}

// 0x00163D38 Draw__Q214IGOIconManager4Icon
#include "KS/SRC/ks/igoiconmanager.h"

void nglListAddQuad(nglQuad *quad);
__asm__(".equ nglListAddQuad__FP7nglQuad, 0x003A67F0");
void IGOIconManager::Icon::Draw() { if (show) { void (*add)(nglQuad *) = nglListAddQuad; add(&quad); } }

// 0x00160650 FirstTimeGettingThisMany__14IGOIconManagerib
#include "KS/SRC/ks/igoiconmanager.h"

bool IGOIconManager::FirstTimeGettingThisMany(int goal, bool ignore_previous)
{
    if ((!done_before || ignore_previous) && iconCounter >= goal)
    {
        done_before = true;
        return true;
    }

    return false;
}

// 0x001611B0 FinishChain__14IGOIconManagerb
struct RandomText{void Break();};__asm__(".equ Break__10RandomText,0x001495F0");struct IGOIconManager{char pad0[2920];int completedIcons;int chainedIcons;char pad1[92];int prepareFailure;char pad2[8];int prepPop;int popTime;char pad3[16];int tsSize;char pad4[2680];RandomText*scoreText;char pad5[28];int extraGuard;void PopCompletedIcons(bool);void FinishChain(bool)__asm__("FinishChain__14IGOIconManagerb");};__asm__(".equ PopCompletedIcons__14IGOIconManagerb,0x001609B0");void IGOIconManager::FinishChain(bool success){if(prepareFailure)return;if(extraGuard)return;if(success){if(!prepPop&&completedIcons>0){chainedIcons=false;prepPop=true;popTime=0;}}else if(!prepPop){RandomText*text=scoreText;tsSize=0;text->Break();PopCompletedIcons(false);}}
