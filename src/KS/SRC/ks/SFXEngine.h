#ifndef SFX_ENGINE_H
#define SFX_ENGINE_H

#include "KS/SRC/ks/VOEngine.h"

class SFXEngine {
    RandomVO thunderSounds;
    RandomVO hitSurferSounds;
    RandomVO hitPier;
    RandomVO didGoal;
    nslSoundId dolphinGood;
    nslSoundId dolphinBad;
    RandomVO whaleSounds;
    RandomVO buoySounds;
    RandomVO randomSounds;
    float randomTime;
    bool paused;
    float thunderTime;
    float volumeMod;

public:
    void shutdown();
};

extern SFXEngine sfx;

#endif
