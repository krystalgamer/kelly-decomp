#ifndef KELLY_DECOMP_KSREPLAY_SHARED_H
#define KELLY_DECOMP_KSREPLAY_SHARED_H

typedef unsigned int uint32;

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
};

class KSReplay {
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
    char data_to_num_frames[0x54 - 0x34];
    unsigned int numFrames;
    char data_to_main_entity_state[0xC];
    KSEntityState* mainEntityState;
    char data_to_max_frames[0xC];
    unsigned int maxFrames;

public:
    float Playspeed();
    void Tick(bool running, float time_inc);
    void Pause(bool paused);
    void SaveFile(char *filename);
    void SetWipeoutSplash(int player);
    void SetEndWave();
};

extern KSReplay ksreplay;

__asm__(".equ ksreplay, 0x004252A8");
__asm__(".equ Tick__8KSReplaybf, 0x0023BD08");

#endif
