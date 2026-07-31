// Matching decompilation blocks selected by generated build shims.


// 0x001B7250 IsLevelBoardUnlocked__13BoardFrontEndi
class UnlockingManager {
public:
    bool isLocationBoardUnlocked(int location) const;
};

__asm__(".equ isLocationBoardUnlocked__C16UnlockingManageri, 0x002F07E8");

extern UnlockingManager unlockManager;
__asm__(".equ unlockManager, 0x0044A820");

extern "C" bool is_level_board_unlocked(void *self, int location)
    __asm__("IsLevelBoardUnlocked__13BoardFrontEndi");
bool is_level_board_unlocked(void *self, int location)
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
