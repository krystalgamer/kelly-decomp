// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001B7250)
// 0x001B7250 IsLevelBoardUnlocked__13BoardFrontEndi
class UnlockingManager {
public:
    bool isLocationBoardUnlocked(int location) const;
};

__asm__(".equ isLocationBoardUnlocked__C16UnlockingManageri, 0x002F07E8");

extern UnlockingManager unlockManager;
__asm__(".equ unlockManager, 0x0044A820");

class BoardFrontEnd {
public:
    bool IsLevelBoardUnlocked(int location);
};

bool BoardFrontEnd::IsLevelBoardUnlocked(int location)
{
    if (location == 0 || location == 13)
        return false;
    return unlockManager.isLocationBoardUnlocked(location);
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_001B7058)
// 0x001B7058 OnCross__13BoardFrontEndi
struct EntityManager { char padding[0x1c0]; int camera_state; bool CamIsMoving() const { return camera_state != 1; } }; struct FEManager { char padding[12]; EntityManager* em; }; class BoardBase { char padding[0x74]; public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void Select(); }; class BoardFrontEnd : public BoardBase { char padding1[0x13c-0x78]; FEManager* manager; public: void OnCross(int); }; void BoardFrontEnd::OnCross(int c) { if(manager->em->CamIsMoving()) return; Select(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001B7408)
// 0x001B7408 OnAnyButtonPress__13BoardFrontEndii
#include "KS/SRC/ks/BoardFrontEnd_shared.h"
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
#endif
