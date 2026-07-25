// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EFD78)
// 0x002EFD78 isSurferUnlocked__C15GlobalDataClassi
struct GlobalSurfer { bool unlocked; char trailing[0x74]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: bool isSurferUnlocked(int index) const; };
bool GlobalDataClass::isSurferUnlocked(int index) const { return surfers[index].unlocked; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFD90)
// 0x002EFD90 unlockSurfer__15GlobalDataClassi
struct GlobalSurfer { bool unlocked; char trailing[0x74]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: void unlockSurfer(int index); };
void GlobalDataClass::unlockSurfer(int index) { surfers[index].unlocked = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFDE0)
// 0x002EFDE0 unlockSurferPers__15GlobalDataClassi
class GlobalDataClass { public: void unlockSurferPers(int index); };
void GlobalDataClass::unlockSurferPers(int index) { *(bool*)((char*)this + index * 0x78 + 0xF0) = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF30)
// 0x002EFF30 isSurferMovieUnlocked__C15GlobalDataClassi
struct GlobalSurfer { bool unlocked; bool movie_unlocked; char trailing[0x70]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: bool isSurferMovieUnlocked(int index) const; };
bool GlobalDataClass::isSurferMovieUnlocked(int index) const { return surfers[index].movie_unlocked; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF48)
// 0x002EFF48 unlockSurferMovie__15GlobalDataClassi
struct GlobalSurfer { bool unlocked; bool movie_unlocked; char trailing[0x70]; };
class GlobalDataClass { char padding[0x134]; GlobalSurfer surfers[16]; public: void unlockSurferMovie(int index); };
void GlobalDataClass::unlockSurferMovie(int index) { surfers[index].movie_unlocked = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF60)
// 0x002EFF60 isBeachUnlocked__C15GlobalDataClassi
struct GlobalBeach { bool unlocked; char trailing[0x370]; };
class GlobalDataClass { char padding[0xACC]; GlobalBeach beaches[32]; public: bool isBeachUnlocked(int index) const; };
bool GlobalDataClass::isBeachUnlocked(int index) const { return beaches[index].unlocked; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF78)
// 0x002EFF78 unlockBeach__15GlobalDataClassi
struct GlobalBeach { bool unlocked; char trailing[0x370]; };
class GlobalDataClass { char padding[0xACC]; GlobalBeach beaches[32]; public: void unlockBeach(int index); };
void GlobalDataClass::unlockBeach(int index) { beaches[index].unlocked = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF98)
// 0x002EFF98 isLocationBoardUnlocked__C15GlobalDataClassi
struct GlobalLocation { char padding[0x8]; bool board_unlocked; };
class GlobalDataClass { GlobalLocation locations[32]; public: bool isLocationBoardUnlocked(int index) const; };
bool GlobalDataClass::isLocationBoardUnlocked(int index) const { return locations[index].board_unlocked; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFFB0)
// 0x002EFFB0 unlockLocationBoard__15GlobalDataClassi
struct GlobalLocation { char padding[0x8]; bool board_unlocked; };
class GlobalDataClass { GlobalLocation locations[32]; public: void unlockLocationBoard(int index); };
void GlobalDataClass::unlockLocationBoard(int index) { locations[index].board_unlocked = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFDF8)
// 0x002EFDF8 isSurferBoardUnlocked__C15GlobalDataClassii
struct GlobalSurferData { bool boardsUnlocked[30]; };
class GlobalDataClass { char padding[0xcc]; GlobalSurferData globalSurfers[1]; public: bool isSurferBoardUnlocked(int surfer, int board) const; };
bool GlobalDataClass::isSurferBoardUnlocked(int surfer, int board) const { return globalSurfers[surfer].boardsUnlocked[board]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFD58)
// 0x002EFD58 setMaxHandicap__15GlobalDataClassii
struct GlobalSurferData { char padding[0x70]; int handicap; char tail[4]; };
class GlobalDataClass { char padding[0xcc]; GlobalSurferData globalSurfers[1]; public: void setMaxHandicap(int surfer, int handicap); };
void GlobalDataClass::setMaxHandicap(int surfer, int handicap) { globalSurfers[surfer].handicap = handicap > 6 ? 6 : handicap; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFE18)
// 0x002EFE18 unlockSurferBoard__15GlobalDataClassii
struct GlobalSurferData { bool boardsUnlocked[10]; char tail[0x50]; };
class GlobalDataClass { char padding[0xcc]; GlobalSurferData globalSurfers[1]; public: void unlockSurferBoard(int surfer, int board); };
void GlobalDataClass::unlockSurferBoard(int surfer, int board) { globalSurfers[surfer].boardsUnlocked[board] = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFF10)
// 0x002EFF10 unlockSurferTrick__15GlobalDataClassii
struct GlobalSurferData { bool boardsUnlocked[10]; bool tricksUnlocked[10]; char tail[0x28]; };
class GlobalDataClass { char padding[0xcc]; GlobalSurferData globalSurfers[1]; public: void unlockSurferTrick(int surfer, int trick); };
void GlobalDataClass::unlockSurferTrick(int surfer, int trick) { globalSurfers[surfer].tricksUnlocked[trick] = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F0000)
// 0x002F0000 unlockCheat__15GlobalDataClassi
struct CheatData { bool locked; int padding; void setLockedState(bool value) { locked = value; } };
extern CheatData g_session_cheats[];
__asm__(".equ g_session_cheats, 0x0043BD48");
class GlobalDataClass { char padding[0x5db0]; CheatData globalCheats[1]; public: void unlockCheat(int cheat); };
void GlobalDataClass::unlockCheat(int cheat) { globalCheats[cheat].setLockedState(false); g_session_cheats[cheat].setLockedState(false); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFDA8)
// 0x002EFDA8 isSurferPersUnlocked__C15GlobalDataClassi
struct SurferData {
    bool personalityUnlocked;
    char padding[0x74];
};

class GlobalDataClass {
    char padding[0xF0];
    SurferData globalSurfers[1];

public:
    bool isSurferPersUnlocked(int surfer) const;
};

extern bool all_personality_cheat;
__asm__(".equ all_personality_cheat, 0x0043BDB4");

bool GlobalDataClass::isSurferPersUnlocked(int surfer) const
{
    return globalSurfers[surfer].personalityUnlocked ||
        all_personality_cheat;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFFC8)
// 0x002EFFC8 isCheatUnlocked__C15GlobalDataClassi
class Cheat {
    bool locked;
    bool on;
public:
    bool getLockedState() const { return locked; }
};
extern Cheat g_session_cheats[];
__asm__(".equ g_session_cheats, 0x0043BD48");
class GlobalDataClass {
    char padding[0x5db0];
    Cheat globalCheats[1];
public:
    bool isCheatUnlocked(int whichCheat) const;
};
bool GlobalDataClass::isCheatUnlocked(int whichCheat) const
{
    return !globalCheats[whichCheat].getLockedState() ||
        !g_session_cheats[whichCheat].getLockedState();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002F0368)
// 0x002F0368 unlockLocationMovie__15GlobalDataClassi
struct Frontend{char p[0x1566c];int tmp_mode;char p2[8];int fe_done;};extern Frontend frontendmanager;struct Game{char p[116];int mode;};extern Game*g_game_ptr;class Career{public:class Location{char p[16];public:void UnlockMovie();};char p[0x10754];Location locations[32];};extern Career*g_career;asm(".equ frontendmanager,0x003E7728");asm(".equ g_game_ptr,0x0046AC64");asm(".equ g_career,0x00427C9C");asm(".equ UnlockMovie__Q26Career8Location,0x0025AF20");struct LocationData{bool movieUnlocked;bool movieShown;bool boardUnlocked;};class GlobalDataClass{LocationData globalLocations[32];public:void unlockLocationMovie(int) __asm__("unlockLocationMovie__15GlobalDataClassi");};void GlobalDataClass::unlockLocationMovie(int locationIdx){int mode=frontendmanager.fe_done?g_game_ptr->mode:frontendmanager.tmp_mode;if(mode==0)g_career->locations[locationIdx].UnlockMovie();globalLocations[locationIdx].movieUnlocked=true;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EFC10)
// 0x002EFC10 init__15GlobalDataClass
#include "KS/SRC/ks/GlobalData_shared.h"

// Use the linked built CareerData table address and stride.
// Preserve the released inner-loop scheduling through the EE compiler shim.
void GlobalDataClass::init()
{
	int j,k;
	bool level_available = true;
	for(j = 0; j < LEVEL_LAST; j++)
	{
		level_available = true;
		for(k = 0; k < MAX_PREV_LEVELS; k++)
		{
			int previous_level = CareerDataArray[j].prev_levels[k];
			if (~previous_level)
				level_available = false;
		}

		if(level_available)
			unlockBeach(CareerDataArray[j].beach);
	}
}
#endif
