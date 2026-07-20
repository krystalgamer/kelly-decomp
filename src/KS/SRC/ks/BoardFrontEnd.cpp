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
