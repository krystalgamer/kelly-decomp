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
    bool isSurferUnlocked(int surfer) const;
    void unlockSurfer(int surfer);
    bool isSurferMovieUnlocked(int surfer) const;
    void unlockSurferMovie(int surfer);
};

extern GlobalDataClass globalCareerData;

__asm__(".equ globalCareerData, 0x004349B8");
__asm__(".equ isSurferMovieUnlocked__C15GlobalDataClassi, 0x002EFF30");

#endif
