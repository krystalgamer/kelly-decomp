// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/wavesound.h"

// 0x002515A0 OnNewWave__9WaveSound
void WaveSound::OnNewWave()
{
    int current_wave = WAVE_GetIndex();
    faceVolume = WaveDataArray[current_wave].faceVolume;
    tubeVolume = WaveDataArray[current_wave].tubeVolume;
    foamVolume = WaveDataArray[current_wave].foamVolume;
    waveCrashVolume =
        WaveDataArray[current_wave].waveCrashVolume;
    underWaterVolume = 1.0f;
    lastTubePieces = 1;
    tubeMin = WaveDataArray[current_wave].tubeMin;
    tubeMax = WaveDataArray[current_wave].tubeMax;
    foamMin = WaveDataArray[current_wave].foamMin;
    foamMax = WaveDataArray[current_wave].foamMax;
    faceMin = WaveDataArray[current_wave].faceMin;
    faceMax = WaveDataArray[current_wave].faceMax;
    waveCrashMin =
        WaveDataArray[current_wave].waveCrashMin;
    waveCrashMax =
        WaveDataArray[current_wave].waveCrashMax;
}

// 0x00251670 pause__9WaveSound
void WaveSound::pause() {
    is_paused = true;
}

// 0x00251680 unpause__9WaveSound
void WaveSound::unpause() {
    is_paused = false;
}

// 0x00255168 shutdown__9WaveSound
void WaveSound::shutdown() { initialized = false; crashed = false; behindTheCamera = 0; }
