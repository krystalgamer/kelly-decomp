#ifndef KELLY_DECOMP_WAVE_SHARED_H
#define KELLY_DECOMP_WAVE_SHARED_H

enum WavePerturbTypeEnum {
    WAVE_PerturbTypeSurge,
    WAVE_PerturbTypeTongue,
    WAVE_PerturbTypeCurl,
    WAVE_PerturbTypeBig,
    WAVE_PerturbTypeSmall,
    WAVE_PerturbTypeDouble,
    WAVE_PerturbTypeMax
};

struct WaveBreakStruct {
    WavePerturbTypeEnum type;
    float time;
    float prob[WAVE_PerturbTypeMax];
};

extern WavePerturbTypeEnum WAVE_PerturbType;
extern WaveBreakStruct *WAVE_BreakNext;

__asm__(".equ WAVE_PerturbType, 0x00484940");
__asm__(".equ WAVE_BreakNext, 0x00585C4C");

#endif
