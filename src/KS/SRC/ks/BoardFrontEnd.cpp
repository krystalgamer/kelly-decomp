// Matching decompilation blocks selected by generated build shims.


// 0x001B7250 IsLevelBoardUnlocked__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"
#include "KS/SRC/ks/unlock_manager.h"

__asm__(".equ isLocationBoardUnlocked__C16UnlockingManageri, 0x002F07E8");

__asm__(".equ unlockManager, 0x0044A820");

bool BoardFrontEnd::IsLevelBoardUnlocked(int location)
{
    if (location == 0 || location == 13)
        return false;
    return unlockManager.isLocationBoardUnlocked(location);
}

// 0x001B6F68 OnTriangle__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/SoundScript.h"

void nslFrameAdvance(float time);

__asm__(".equ ExitState__15FEEntityManager, 0x001C4C70");
__asm__(".equ nslFrameAdvance__Ff, 0x00390068");

void BoardFrontEnd::OnTriangle(int controller)
{
    SoundScriptManager::inst()->playEvent(SS_FE_BACK);
    nslFrameAdvance(0.01f);

    if (sys->multiplayer && !sys->multi_1)
    {
        sys->multi_1 = true;
        sys->MakeActive(GraphicalMenuSystem::BoardMenu);
    }
    else
    {
        manager->em->ExitState();
        if (manager->tmp_game_mode == GAME_MODE_PRACTICE)
            system->MakeActive(GraphicalMenuSystem::SurferMenu);
        else
            system->MakeActive(GraphicalMenuSystem::BeachMenu);
    }
}


// 0x001B7058 OnCross__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"
void BoardFrontEnd::OnCross(int controller) {
    if (manager->em->CamIsMoving())
        return;
    Select();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001B7408 OnAnyButtonPress__13BoardFrontEndii
#include "KS/SRC/ks/BoardFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"
enum { FEMENUCMD_TRIANGLE = 7 };
__asm__(".equ JumpTo__15FEEntityManageri, 0x001C4C88");
void BoardFrontEnd::OnAnyButtonPress(int c, int b) {
    if (!manager->em->CamIsMoving())
        return;
    if (b == FEMENUCMD_TRIANGLE)
        manager->em->JumpTo(FEEntityManager::CAM_POS_WALL_3_MAP);
    else
        manager->em->JumpTo(FEEntityManager::CAM_POS_WALL_3_CLOSET);
}

// Source implementation boundary.
// 0x001DDB00 OnUp__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"

void BoardFrontEnd::OnUp(int controller) {
}

// 0x001DDB08 OnDown__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"

void BoardFrontEnd::OnDown(int controller) {
}

// 0x001DDAD8 Select__13BoardFrontEndi
#include "KS/SRC/ks/BoardFrontEnd.h"

void BoardFrontEnd::Select(int entry) { Select(); }

// 0x001DDA80 __tf13BoardFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDA80() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDA80[] __asm__("__ti13BoardFrontEnd");
extern const char name_001DDA80[];
extern void *base_type_001DDA80[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13BoardFrontEnd, 0x005A2E38");
__asm__(".equ name_001DDA80, 0x004DDF78");
__asm__(".equ base_type_001DDA80, 0x004DDC48");
extern "C" void **Rtti_001DDA80() __asm__("__tf13BoardFrontEnd");
void **Rtti_001DDA80()
{
    if (!type_001DDA80[0]) {
        BaseRtti_001DDA80();
        __rtti_class(type_001DDA80, name_001DDA80, base_type_001DDA80, 1);
    }
    return type_001DDA80;
}
