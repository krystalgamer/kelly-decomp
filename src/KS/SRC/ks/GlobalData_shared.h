#ifndef KELLY_DECOMP_GLOBALDATA_SHARED_H
#define KELLY_DECOMP_GLOBALDATA_SHARED_H

enum {
    GLOBAL_DATA_LOCATION_COUNT = 17,
    GLOBAL_DATA_SURFER_COUNT = 14,
    GLOBAL_DATA_BOARD_COUNT = 9,
    GLOBAL_DATA_TRICK_COUNT = 16,
    GLOBAL_DATA_BEACH_COUNT = 25,
    GLOBAL_DATA_HIGH_SCORE_ROWS = 10
};

struct GlobalDataHighScore {
    char initials[4];
    char character[32];
    int score;
    int icons;
};

struct GlobalDataLocation {
    bool movieUnlocked;
    bool movieShown;
    bool boardUnlocked;
};

struct GlobalDataSurfer {
    bool boardsUnlocked[GLOBAL_DATA_BOARD_COUNT];
    bool personalityUnlocked;
    bool tricksUnlocked[GLOBAL_DATA_TRICK_COUNT];
    bool unlocked;
    bool movieUnlocked;
    int handicap;
    bool finishedLastLevel;
};

struct GlobalDataBeach {
    GlobalDataHighScore highScores[GLOBAL_DATA_HIGH_SCORE_ROWS];
    GlobalDataHighScore highIcons[GLOBAL_DATA_HIGH_SCORE_ROWS];
    bool unlocked;
};

class GlobalDataCheat {
    bool locked;
    bool on;

public:
    bool getLockedState() const { return locked; }
    void setLockedState(bool value) { locked = value; }
};

class GlobalDataClass {
    GlobalDataLocation globalLocations[GLOBAL_DATA_LOCATION_COUNT];
    GlobalDataSurfer globalSurfers[GLOBAL_DATA_SURFER_COUNT];
    GlobalDataBeach globalBeaches[GLOBAL_DATA_BEACH_COUNT];
    GlobalDataCheat globalCheats[1];

public:
    void init();
    bool isSurferUnlocked(int surfer) const;
    void unlockSurfer(int surfer);
    bool isSurferPersUnlocked(int surfer) const;
    void unlockSurferPers(int surfer);
    bool isSurferBoardUnlocked(int surfer, int board) const;
    void unlockSurferBoard(int surfer, int board);
    void unlockSurferTrick(int surfer, int trick);
    bool isSurferMovieUnlocked(int surfer) const;
    void unlockSurferMovie(int surfer);
    bool isBeachUnlocked(int beach) const;
    void unlockBeach(int beach);
    bool isLocationBoardUnlocked(int location) const;
    void unlockLocationBoard(int location);
    bool isCheatUnlocked(int cheat) const;
    void unlockCheat(int cheat);
    void unlockLocationMovie(int location);
    void setMaxHandicap(int surfer, int handicap);
};

enum {
    LEVEL_LAST = 32,
    MAX_PREV_LEVELS = 4
};

struct CareerData {
    int beach;
    char built_fields_before_prev_levels[0xA8];
    int prev_levels[MAX_PREV_LEVELS];
    char built_trailing_fields[0x20];
};

extern CareerData CareerDataArray[LEVEL_LAST];

extern GlobalDataClass globalCareerData;
extern bool all_personality_cheat;
extern GlobalDataCheat g_session_cheats[];

__asm__(".equ globalCareerData, 0x004349B8");
#if !defined(KELLY_DECOMP_FUNCTION_002EFF30)
__asm__(".equ isSurferMovieUnlocked__C15GlobalDataClassi, 0x002EFF30");
#endif
#if !defined(KELLY_DECOMP_FUNCTION_002EFFC8)
__asm__(".equ isCheatUnlocked__C15GlobalDataClassi, 0x002EFFC8");
#endif
__asm__(".equ CareerDataArray, 0x0042ECA0");
#if !defined(KELLY_DECOMP_FUNCTION_002EFF78)
__asm__(".equ unlockBeach__15GlobalDataClassi, 0x002EFF78");
#endif
__asm__(".equ all_personality_cheat, 0x0043BDB4");
__asm__(".equ g_session_cheats, 0x0043BD48");

#endif
