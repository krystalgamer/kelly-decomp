#ifndef KELLY_DECOMP_WAVE_PERTURB_SHARED_H
#define KELLY_DECOMP_WAVE_PERTURB_SHARED_H

#include "KS/SRC/ks/wave.h"

#define WAVE_PARTITIONMAX 32

struct WavePartition {
    WavePartition(
        unsigned int count,
        float *guide_values,
        float *guide_steps,
        float *weights)
        : N(count),
          guide(guide_values),
          guidestep(guide_steps),
          weight(weights)
    {
    }

    unsigned int N;
    float *guide;
    float *guidestep;
    float *weight;
};

class WaveBasePerturbClass {
public:
    WaveBasePerturbClass(
        float (&stage_duration)[WAVE_PerturbStageMax],
        const int &is_enabled)
        : duration(stage_duration),
          partition(WAVE_PARTITIONMAX, guide, guidestep, weight),
          enabled(is_enabled)
    {
    }

    float (&duration)[WAVE_PerturbStageMax];
    float start[WAVE_PerturbStageMax];
    WavePartition partition;

    bool Enabled() { return enabled; }

    virtual void Init() = 0;
    virtual float WorldToProfile(float worldx) = 0;

protected:
    const int &enabled;

private:
    float guide[WAVE_PARTITIONMAX];
    float guidestep[WAVE_PARTITIONMAX];
    float weight[WAVE_PARTITIONMAX];
};

template <int count>
class WavePerturbClass : public WaveBasePerturbClass {
public:
    WavePerturbClass(
        float (&stage_duration)[WAVE_PerturbStageMax],
        const int &is_enabled)
        : WaveBasePerturbClass(stage_duration, is_enabled)
    {
    }

    const static unsigned int num;

    virtual void Init() = 0;
    virtual float WorldToProfile(float worldx) = 0;
};

template <int count>
const unsigned int WavePerturbClass<count>::num = count;

template <int count>
class WavePulsePerturbClass : public WavePerturbClass<count> {
public:
    WavePulsePerturbClass(
        float (&stage_duration)[WAVE_PerturbStageMax],
        const int &is_enabled,
        float (&pulse_values)[count],
        float profile_low,
        float profile_high)
        : WavePerturbClass<count>(stage_duration, is_enabled),
          pulse(pulse_values),
          profilelo(profile_low),
          profilehi(profile_high),
          offset(0)
    {
    }

    const float (&pulse)[count];
    float profilelo;
    float profilehi;
    float pulsex[count];
    float pulsexx[count];
    SplineCoeffs<count> pulsecoeffs;
    float offset;

    virtual void Init();
    virtual float WorldToProfile(float worldx);
    virtual float WorldToPulse(float worldx);
};

template <int count>
class WavePushPerturbClass : public WavePulsePerturbClass<count> {
public:
    WavePushPerturbClass(
        float (&stage_duration)[WAVE_PerturbStageMax],
        const int &is_enabled,
        float (&pulse_values)[count],
        float profile_low,
        float profile_high)
        : WavePulsePerturbClass<count>(
              stage_duration,
              is_enabled,
              pulse_values,
              profile_low,
              profile_high)
    {
    }

    virtual float WorldToProfile(float worldx);
    virtual float WorldToPulse(float worldx);
};

template <class T>
inline T sqr(const T &value)
{
    return value * value;
}

extern WavePerturbStageEnum WAVE_PerturbStage;
extern float WAVE_PerturbProgress;

#endif
