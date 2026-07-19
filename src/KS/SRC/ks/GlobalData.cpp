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
