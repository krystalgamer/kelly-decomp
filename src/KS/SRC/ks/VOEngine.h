#ifndef VO_ENGINE_H
#define VO_ENGINE_H

typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

class RandomVO {
    float probability;
    nslSoundId thisSound;
    int totalSources;
    int numUsedSources;
    int numUnusedSources;
    bool valid;
    int lastSource;
    int probability_state;
    unsigned int position;
    nslSourceId sources[50];
    nslSourceId sourcesUsed[50];
    nslSourceId sourcesUnused[50];

public:
    int getLastSourcePlayed();
    void setProbability(float value);
    bool isPlaying();
    void stop();
    void shutdown();
    bool addSource(nslSourceId source);
};

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
