#ifndef MUSIC_MAN_H
#define MUSIC_MAN_H

#include "KS/SRC/singleton.h"

typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

enum nslSoundStatusEnum {
    NSL_SOUNDSTATUS_INVALID = 0,
};

nslSoundStatusEnum nslGetSoundStatus(nslSoundId sound);
void nslPauseSound(nslSoundId sound);
void nslUnpauseSound(nslSoundId sound);

class Track {
    nslSourceId mySrcId;
    nslSoundId mySndId;
    bool paused;

public:
    char songName[30];
    char artistName[30];
    Track();
    ~Track();
    void SetInfo(const char *name, const char *artist, nslSourceId source);
    nslSoundId Play();
    bool IsPlaying();
    void Stop();
    void Pause();
    void Unpause();
};

class MusicListing {
    int totalSources;
    int current;
    Track sources[50];
    nslSoundId currentSoundId;
    bool successfulLastPlay;

public:
    MusicListing();
    ~MusicListing();
    int getCurrent() const { return current; }
    void disable(int song, bool disabled) {
        enabled[order[song]] = !disabled;
    }
    bool isDisabled(int song) {
        return !enabled[order[song]];
    }
    void setCurrent(int position) { current = position; }
    void swap(int a, int b);
    nslSoundId playNext();
    nslSoundId play();
    void stop();
    void shutdown();
    int order[50];
    bool enabled[50];
};

class MusicMan : public singleton {
    float volume;
    int inited;
    bool paused;

public:
    static singleton_ptr<MusicMan> instance;
    static MusicMan *inst() { return instance; }

    MusicListing musicTrack;
    void setCurrent(int current) {
        musicTrack.setCurrent(current);
    }
    nslSoundId play();
    void stop();
    void shutdown();
    nslSoundId playNext();
    void disable(int which, bool disabled) {
        musicTrack.disable(which, disabled);
    }
    bool isDisabled(int which) {
        return musicTrack.isDisabled(which);
    }
};

__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslPauseSound__FUi, 0x0038D460");
__asm__(".equ nslUnpauseSound__FUi, 0x0038D5A8");
__asm__(".equ _8MusicMan$instance, 0x00427B18");

#endif
