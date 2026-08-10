#ifndef KSREPLAY_H
#define KSREPLAY_H

#include "KS/SRC/algebra.h"

typedef unsigned int uint32;

class KSEntityPO {
    vector3d KSPos;
    vector3d KSBPos;
    quaternion KSRot;
    quaternion KSBRot;
    vector3d BoardCurrent;
    vector3d BoardMomentum;

public:
    KSEntityPO();
};

class KSEntityState {
    friend class KSReplay;

    uint32 KSState : 7;
    uint32 KSSuperState : 4;
    uint32 KSAnim : 10;
    uint32 KSBAnim : 8;
    uint32 KSBlend : 7;
    uint32 KSBBlend : 7;
    uint32 KSCurTrick : 7;
    uint32 KSAnimCall : 1;
    uint32 KSBAnimCall : 1;
    uint32 KSLoop : 1;
    uint32 KSBLoop : 1;
    uint32 KSWipedOut : 1;
    uint32 KSInAir : 1;
    uint32 KSInTube : 1;
    uint32 KSDry : 1;
    uint32 KSIKValid : 1;
    uint32 KSWipeoutSplash : 1;
    uint32 EndWave : 1;
    uint32 padding : 3;

public:
    KSEntityState();
    void SetKSAnimInfo(float blend, bool loop, float frame);
    void SetKSBAnimInfo(float blend, bool loop, float frame);
};

class KSReplayFrame {
    float wave_shiftx;
    float levelTime;
    float totalTime;

public:
    KSReplayFrame();
    void Save();
};

class KSReplay {
public:
    enum KSReplayStatus {
        REPLAY_IGNORE,
        REPLAY_RECORD,
        REPLAY_PLAYBACK,
        REPLAY_PAUSED
    };

private:
    int bch;
    int sfr;
    int brd;
    uint32 seed;
    int status;
    float playtime;
    float lastPlaytime;
    bool slomo;
    bool fastforward;
    bool prepareSlomo;
    bool prepareNormal;
    int slomospeed;
    int ffspeed;
    unsigned int playframe;
    char data_to_num_frames[0x1C];
    unsigned int numFrames;
    char data_to_main_entity_state[0xC];
    KSEntityState* mainEntityState;
    char data_to_max_frames[0xC];
    unsigned int maxFrames;
    bool noDraw;
    char data_to_current_collision[0x50];
    int current_collision;
    int num_collisions;
    int firstFrame;

public:
    float Playspeed();
    void Tick(bool running, float time_inc);
    void Pause(bool paused);
    void Play();
    void Restart();
    void Stop();
    void SaveFile(char *filename);
    bool IsPlaying();
    void Record();
    void SpeedSlow();
    void SpeedNormal();
    void SpeedFast();
    bool Done();
    void Clear(unsigned int seed_value);
    void SetWipeoutSplash(int player);
    void SetEndWave();
    bool NoDraw();
    int MainPOFrames();
};

extern KSReplay ksreplay;

__asm__(".equ ksreplay, 0x004252A8");
__asm__(".equ Tick__8KSReplaybf, 0x0023BD08");

#endif
