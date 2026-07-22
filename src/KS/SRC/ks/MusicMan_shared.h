#ifndef KELLY_DECOMP_MUSICMAN_SHARED_H
#define KELLY_DECOMP_MUSICMAN_SHARED_H

typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

enum nslSoundStatusEnum {
    NSL_SOUNDSTATUS_INVALID = 0,
};

nslSoundStatusEnum nslGetSoundStatus(nslSoundId sound);
void nslUnpauseSound(nslSoundId sound);

class Track {
    nslSourceId mySrcId;
    nslSoundId mySndId;
    bool paused;

public:
    char songName[30];
    char artistName[30];
    Track();
    bool IsPlaying();
    void Unpause();
};

class MusicListing {
    int totalSources;
    int current;
    Track sources[50];
    nslSoundId currentSoundId;
    bool successfulLastPlay;

public:
    void swap(int a, int b);
    int order[50];
    bool enabled[50];
};

__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslUnpauseSound__FUi, 0x0038D5A8");

#endif
