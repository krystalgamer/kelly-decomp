// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002F0620)
#include "KS/SRC/ks/cheat_shared.h"
#include "KS/SRC/ks/GlobalData_shared.h"
#include "KS/SRC/ks/unlock_manager_shared.h"
// 0x002F0620 isSurferMovieUnlocked__C16UnlockingManageri
bool UnlockingManager::isSurferMovieUnlocked(int surfer) const
{
    return g_session_cheats[CHEAT_MEGA_CHEAT].isOn() ||
        globalCareerData.isSurferMovieUnlocked(surfer);
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_002F08C0)
// 0x002F08C0 isBailsMovieUnlocked__C16UnlockingManager
struct Cheat { int locked; int on; };
extern Cheat session_cheats_from_mega[];
asm(".equ session_cheats_from_mega, 0x0043BDF0");
extern int bails_movie_unlocked;
asm(".equ bails_movie_unlocked, 0x0044A818");
class UnlockingManager { public: bool isBailsMovieUnlocked() const; };
bool UnlockingManager::isBailsMovieUnlocked() const
{
    return session_cheats_from_mega[0].on || session_cheats_from_mega[-7].on || bails_movie_unlocked;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F0668)
// 0x002F0668 isLevelUnlocked__C16UnlockingManageri
extern int cheat_anchor[];
__asm__(".equ cheat_anchor, 0x0043BDF0");
struct career_level {
    char padding[0xc];
    int unlocked;
    char tail[0x14];
    bool IsUnlocked() const { return unlocked; }
};
struct career_layout {
    char padding[0x101a8];
    career_level levels[32];
};
extern career_layout *g_career;
__asm__(".equ g_career, 0x00427C9C");
class UnlockingManager {
public:
    bool isLevelUnlocked(int level) const;
};
bool UnlockingManager::isLevelUnlocked(int level) const {
    return cheat_anchor[1] ||
           *(int *)((char *)cheat_anchor-0x24) ||
           g_career->levels[level].IsUnlocked();
}
#endif
