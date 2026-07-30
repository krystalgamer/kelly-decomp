// GlobalData method definitions extracted by generated one-function shims.


// 0x002EFD78 isSurferUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isSurferUnlocked(int index) const { return globalSurfers[index].unlocked; }

// 0x002EFD90 unlockSurfer__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockSurfer(int index) { globalSurfers[index].unlocked = true; }

// 0x002EFDE0 unlockSurferPers__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockSurferPers(int index) { globalSurfers[index].personalityUnlocked = true; }

// 0x002EFF30 isSurferMovieUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isSurferMovieUnlocked(int index) const { return globalSurfers[index].movieUnlocked; }

// 0x002EFF48 unlockSurferMovie__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockSurferMovie(int index) { globalSurfers[index].movieUnlocked = true; }

// 0x002EFF60 isBeachUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isBeachUnlocked(int index) const { return globalBeaches[index].unlocked; }

// 0x002EFF78 unlockBeach__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockBeach(int index) { globalBeaches[index].unlocked = true; }

// 0x002EFF98 isLocationBoardUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isLocationBoardUnlocked(int index) const { return globalLocations[index].boardUnlocked; }

// 0x002EFFB0 unlockLocationBoard__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockLocationBoard(int index) { globalLocations[index].boardUnlocked = true; }

// 0x002EFDF8 isSurferBoardUnlocked__C15GlobalDataClassii
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isSurferBoardUnlocked(int surfer, int board) const { return globalSurfers[surfer].boardsUnlocked[board]; }

// 0x002EFD58 setMaxHandicap__15GlobalDataClassii
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::setMaxHandicap(int surfer, int handicap) { globalSurfers[surfer].handicap = handicap > 6 ? 6 : handicap; }

// 0x002EFE18 unlockSurferBoard__15GlobalDataClassii
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockSurferBoard(int surfer, int board) { globalSurfers[surfer].boardsUnlocked[board] = true; }

// 0x002EFF10 unlockSurferTrick__15GlobalDataClassii
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockSurferTrick(int surfer, int trick) { globalSurfers[surfer].tricksUnlocked[trick] = true; }

// 0x002F0000 unlockCheat__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
void GlobalDataClass::unlockCheat(int cheat) { globalCheats[cheat].setLockedState(false); g_session_cheats[cheat].setLockedState(false); }

// 0x002EFDA8 isSurferPersUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"

bool GlobalDataClass::isSurferPersUnlocked(int surfer) const
{
    return globalSurfers[surfer].personalityUnlocked ||
        all_personality_cheat;
}

// 0x002EFFC8 isCheatUnlocked__C15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
bool GlobalDataClass::isCheatUnlocked(int whichCheat) const
{
    return !globalCheats[whichCheat].getLockedState() ||
        !g_session_cheats[whichCheat].getLockedState();
}

// 0x002F0368 unlockLocationMovie__15GlobalDataClassi
#include "KS/SRC/ks/GlobalData.h"
struct Frontend{char p[0x1566c];int tmp_mode;char p2[8];int fe_done;};extern Frontend frontendmanager;struct Game{char p[116];int mode;};extern Game*g_game_ptr;class Career{public:class Location{char p[16];public:void UnlockMovie();};char p[0x10754];Location locations[32];};extern Career*g_career;asm(".equ frontendmanager,0x003E7728");asm(".equ g_game_ptr,0x0046AC64");asm(".equ g_career,0x00427C9C");asm(".equ UnlockMovie__Q26Career8Location,0x0025AF20");void GlobalDataClass::unlockLocationMovie(int locationIdx){int mode=frontendmanager.fe_done?g_game_ptr->mode:frontendmanager.tmp_mode;if(mode==0)g_career->locations[locationIdx].UnlockMovie();globalLocations[locationIdx].movieUnlocked=true;}

// 0x002EFC10 init__15GlobalDataClass
#include "KS/SRC/ks/GlobalData.h"

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
