#ifndef KELLY_DECOMP_VOENGINE_SHARED_H
#define KELLY_DECOMP_VOENGINE_SHARED_H

typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

class VOEngine {
public:
    void init();
    void setCurrentLevel(int level);
    void stopVO();
    void playVO();
    inline void setCurrentSurfer(int index) { currentSurfer = index; }
    inline void pause() {}
    inline void unpause() {}
    bool isPlaying();
    inline nslSoundId getCurrentSound() { return currentSound; }
    void frameAdvance(float time_increment);
    inline void resetTimer() { myTimer = 0; }

private:
    bool on;
    bool played;
    float myTimer;
    int whichVisit[25];
    int currentSurfer;
    int currentLevel;
    nslSourceId beachChallVO[32][2];
    bool playing;
    nslSoundId currentSound;
};

#endif
