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

template <int count>
struct SplineCoeffs {
    float a[count];
    float b[count];
    float c[count];
    float d[count];
};

struct WaveProfileMetaCoeffs {
    SplineCoeffs<16> y[16];
    SplineCoeffs<16> z[16];
};

template <int count>
struct SplineData2D {
    float y[count];
    float z[count];
};

typedef SplineData2D<16> WaveProfile;

class WaveScratchBase {
public:
    WaveScratchBase() {}
    virtual ~WaveScratchBase() {}

protected:
    static unsigned int sp;
};

template <class T>
class WaveScratch : public WaveScratchBase {
public:
    WaveScratch() : data(*(T *)sp) {}
    virtual ~WaveScratch()
    {
        sp -= sizeof(data);
    }

private:
    T &data;
};

__asm__(".equ WAVE_PerturbType, 0x00484940");
__asm__(".equ WAVE_BreakNext, 0x00585C4C");
__asm__(".equ _15WaveScratchBase$sp, 0x004846C8");
__asm__(".equ __builtin_delete, 0x002AC6B0");

#endif
