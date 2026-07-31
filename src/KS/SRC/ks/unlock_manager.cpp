// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002F0620)
#include "KS/SRC/ks/cheat.h"
#include "KS/SRC/ks/GlobalData.h"
#include "KS/SRC/ks/unlock_manager.h"
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

#if defined(KELLY_DECOMP_FUNCTION_002F0758)
// 0x002F0758 isSurferBoardUnlocked__C16UnlockingManagerii
extern char cheat_base[];struct Frontend{char p[0x1566c];int tmp_mode;char p2[8];int fe_done;};extern Frontend frontendmanager;struct Game{char p[116];int mode;};extern Game*g_game_ptr;struct Career{bool IsBoardUnlocked(int)const __asm__("IsBoardUnlocked__C6Careeri");};extern Career*g_career;struct GlobalData{bool isSurferBoardUnlocked(int,int)const __asm__("isSurferBoardUnlocked__C15GlobalDataClassii");};extern GlobalData globalCareerData;class UnlockingManager{public:bool isSurferBoardUnlocked(int,int)const __asm__("isSurferBoardUnlocked__C16UnlockingManagerii");};__asm__(".equ cheat_base,0x0043BDF0");__asm__(".equ frontendmanager,0x003E7728");__asm__(".equ g_game_ptr,0x0046AC64");__asm__(".equ g_career,0x00427C9C");__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ IsBoardUnlocked__C6Careeri,0x0025C5E8");__asm__(".equ isSurferBoardUnlocked__C15GlobalDataClassii,0x002EFDF8");bool UnlockingManager::isSurferBoardUnlocked(int surfer,int board)const{char*cb=cheat_base;if(*(int*)(cb+4)||*(int*)(cb-28))return true;if(board==0)return true;int mode=frontendmanager.fe_done?g_game_ptr->mode:frontendmanager.tmp_mode;if(mode!=0)return globalCareerData.isSurferBoardUnlocked(surfer,board);else return g_career->IsBoardUnlocked(board);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F07E8)
// 0x002F07E8 isLocationBoardUnlocked__C16UnlockingManageri
extern char cheat_base[];struct Frontend{char p[0x1566c];int tmp_mode;char p2[8];int fe_done;};extern Frontend frontendmanager;struct Game{char p[116];int mode;};extern Game*g_game_ptr;class Career{public:class Location{char p[12];bool boardUnlocked;public:bool IsBoardUnlocked()const{return boardUnlocked;}};char p[0x10754];Location locations[32];};extern Career*g_career;struct GlobalData{bool isLocationBoardUnlocked(int)const __asm__("isLocationBoardUnlocked__C15GlobalDataClassi");};extern GlobalData globalCareerData;class UnlockingManager{public:bool isLocationBoardUnlocked(int)const __asm__("isLocationBoardUnlocked__C16UnlockingManageri");};asm(".equ cheat_base,0x0043BDF0");asm(".equ frontendmanager,0x003E7728");asm(".equ g_game_ptr,0x0046AC64");asm(".equ g_career,0x00427C9C");asm(".equ globalCareerData,0x004349B8");asm(".equ isLocationBoardUnlocked__C15GlobalDataClassi,0x002EFF98");bool UnlockingManager::isLocationBoardUnlocked(int location)const{char*cb=cheat_base;if(*(int*)(cb+4)||*(int*)(cb-28))return true;int mode=frontendmanager.fe_done?g_game_ptr->mode:frontendmanager.tmp_mode;if(mode!=0)return globalCareerData.isLocationBoardUnlocked(location);else return g_career->locations[location].IsBoardUnlocked();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F06C0)
// 0x002F06C0 isBeachUnlocked__C16UnlockingManageri
extern char cheat_base[];struct Frontend{char p[0x1566c];int tmp_mode;char p2[8];int fe_done;};extern Frontend frontendmanager;struct Game{char p[116];int mode;};extern Game*g_game_ptr;class Career{public:class Beach{char p[4];bool unlocked;char tail[4];public:bool IsUnlocked()const{return unlocked;}};char p[0x10628];Beach beaches[64];};extern Career*g_career;struct GlobalData{bool isBeachUnlocked(int)const __asm__("isBeachUnlocked__C15GlobalDataClassi");};extern GlobalData globalCareerData;asm(".equ cheat_base,0x0043BDF0");asm(".equ frontendmanager,0x003E7728");asm(".equ g_game_ptr,0x0046AC64");asm(".equ g_career,0x00427C9C");asm(".equ globalCareerData,0x004349B8");asm(".equ isBeachUnlocked__C15GlobalDataClassi,0x002EFF60");class UnlockingManager{public:bool isBeachUnlocked(int)const __asm__("isBeachUnlocked__C16UnlockingManageri");};bool UnlockingManager::isBeachUnlocked(int level)const{char*cb=cheat_base;if(*(int*)(cb+4)||*(int*)(cb-36))return true;int mode=frontendmanager.fe_done?g_game_ptr->mode:frontendmanager.tmp_mode;if(mode!=0)return globalCareerData.isBeachUnlocked(level);else return g_career->beaches[level].IsUnlocked();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F0400)
// 0x002F0400 isSurferUnlocked__C16UnlockingManageri
struct Cheat{int locked;int on;bool isOn()const{return on;}};extern Cheat g_session_cheats[];extern char global_career;asm(".equ g_session_cheats,0x0043BD48");asm(".equ global_career,0x004349B8");extern "C" bool career_unlocked(void*,int)__asm__("isSurferUnlocked__C15GlobalDataClassi");asm(".equ isSurferUnlocked__C15GlobalDataClassi,0x002EFD78");class UnlockingManager{public:bool isSurferUnlocked(int)const;};bool UnlockingManager::isSurferUnlocked(int surfer)const{if(g_session_cheats[21].isOn()||g_session_cheats[18].isOn())return true;if(g_session_cheats[2].isOn()&&surfer==13)return true;if(g_session_cheats[3].isOn()&&surfer==12)return true;if(g_session_cheats[4].isOn()&&surfer==11)return true;if(g_session_cheats[5].isOn()&&surfer==10)return true;return career_unlocked(&global_career,surfer);}
#endif
