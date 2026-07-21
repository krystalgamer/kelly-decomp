// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002F0900)
// 0x002F0900 isEspnMovieUnlocked__C16UnlockingManager
class UnlockingManager {
public:
    bool isEspnMovieUnlocked() const;
};

bool UnlockingManager::isEspnMovieUnlocked() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F0880)
// 0x002F0880 isLocationMovieUnlocked__C16UnlockingManageri
extern int mega_cheat_on;
asm(".equ mega_cheat_on, 0x0043BDF4");
struct LocationUnlock { int movie_unlocked; int board_unlocked; int shown; };
struct GlobalDataClass { LocationUnlock locations[1]; };
extern GlobalDataClass globalCareerData;
asm(".equ globalCareerData, 0x004349B8");
class UnlockingManager { public: bool isLocationMovieUnlocked(int locationIdx) const; };
bool UnlockingManager::isLocationMovieUnlocked(int locationIdx) const
{
    return mega_cheat_on || globalCareerData.locations[locationIdx].movie_unlocked;
}
#endif
