#ifndef KELLY_DECOMP_GLOBALDATA_SHARED_H
#define KELLY_DECOMP_GLOBALDATA_SHARED_H

struct GlobalSurfer {
    bool unlocked;
    bool movie_unlocked;
    char trailing[0x70];
};

class GlobalDataClass {
    char data_to_surfers[0x134];
    GlobalSurfer globalSurfers[16];

public:
    void init();
    bool isSurferUnlocked(int surfer) const;
    void unlockSurfer(int surfer);
    bool isSurferMovieUnlocked(int surfer) const;
    bool isCheatUnlocked(int cheat) const;
    void unlockSurferMovie(int surfer);
    void unlockBeach(int beach);
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

__asm__(".equ globalCareerData, 0x004349B8");
__asm__(".equ isSurferMovieUnlocked__C15GlobalDataClassi, 0x002EFF30");
__asm__(".equ isCheatUnlocked__C15GlobalDataClassi, 0x002EFFC8");
__asm__(".equ CareerDataArray, 0x0042ECA0");
__asm__(".equ unlockBeach__15GlobalDataClassi, 0x002EFF78");

#endif
