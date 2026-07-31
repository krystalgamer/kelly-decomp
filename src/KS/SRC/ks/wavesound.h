#ifndef WAVESOUND_H
#define WAVESOUND_H

struct WaveData {
    char built_fields[532];
    float faceVolume;
    float tubeVolume;
    float foamVolume;
    float waveCrashVolume;
    float tubeMin;
    float tubeMax;
    float foamMin;
    float foamMax;
    float faceMin;
    float faceMax;
    float waveCrashMin;
    float waveCrashMax;
    char built_tail[4];
};

class WaveSound {
    char built_fields_before_last_tube[436];
    int lastTubePieces;
    char built_fields_before_initialized[0x2dc];
    bool initialized;
    bool is_paused;
    bool crashed;
    char built_fields_before_emitter[0x0c];
    int behindTheCamera;
    char built_fields_before_volumes[0x10];
    float faceVolume;
    float underWaterVolume;
    float tubeVolume;
    float foamVolume;
    char built_fields_before_crash_volume[4];
    float waveCrashVolume;
    float foamMin;
    float foamMax;
    char built_fields_before_face_min[4];
    float faceMin;
    float faceMax;
    float waveCrashMin;
    float waveCrashMax;
    float tubeMin;
    float tubeMax;

public:
    void OnNewWave();
    void pause();
    void unpause();
    void shutdown();
};

extern WaveData WaveDataArray[];
extern "C" int WAVE_GetIndex()
    __asm__("WAVE_GetIndex__Fv");

__asm__(".equ WaveDataArray, 0x004861E0");
__asm__(".equ WAVE_GetIndex__Fv, 0x0037D890");

#endif
