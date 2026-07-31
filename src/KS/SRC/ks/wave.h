#ifndef WAVE_H
#define WAVE_H

#include "KS/SRC/algebra.h"
#include "KS/SRC/timer.h"

struct SoundLine {
    vector3d start;
    vector3d stop;
    SoundLine();
};

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

enum WavePerturbStageEnum {
    WAVE_PerturbStageNone,
    WAVE_PerturbStageDo,
    WAVE_PerturbStageHold,
    WAVE_PerturbStageCollapse,
    WAVE_PerturbStageWait,
    WAVE_PerturbStageUndo,
    WAVE_PerturbStageMax
};

struct WaveBreakInfoStruct {
    bool onoff;
    WavePerturbTypeEnum type;
    float time;
    WavePerturbStageEnum stage;
    float stageprogress;
};

struct WaveDebugStruct {
    int AnimateBottom;
    int AnimateFoam;
    int BackfaceCull;
    int BilinearFilter;
    float BoostU;
    float BoostV;
    int BreakBigRush;
    int BreakBigSurge;
    int BreakBigTongue;
    int BreakCurl;
    int BreakFreeze;
    int BreakLoop;
    int BreakReload;
    int BreakSimple;
    int BreakStairstep;
    int BreakRush;
    int BreakSurge;
    int BreakTongue;
    int BreakTest;
    int Clamp;
    int ConstantResolutionX;
    int ConstantResolutionZ;
    int DrawClipLine;
    int DrawDarkMesh;
    int DrawEmitters;
    int DrawFloater;
    int DrawGrindPath;
    int DrawGuideBase;
    int DrawGuidePerturb;
    int DrawHighMesh;
    int DrawLightMesh;
    int DrawMarkers;
    int DrawProfile;
    int DrawSoundEmitters;
    int DrawTexture;
    int DrawTextureAnim;
    int DrawTubeRealLine;
    int DrawTubeThreshs;
    int DrawWarningLine;
    int DrawWaveMesh;
    int DumpMeshError;
    int DumpProfileCoeffs;
    int DumpProfileControls;
    int DumpProfileMesh;
    int DumpProfileValues;
    int EndWave;
    int FakeCamera;
    int FreezeWave;
    int MixN;
    int MixX;
    int MixZ;
    int OneWave;
    int PrintInfo;
    int ProfileIndex;
    float ProfileWidth;
    float ProfileYBias;
    int ReloadWave;
    int RestartWave;
    int ScissorWaveMesh;
    int ScrollWater;
    int Shadows;
    float SpeedX;
    float SpeedZ;
    int ShowGridLines;
    int ShowRegions;
    int StaticWave;
    int SubdivideBuilding;
    int SubdividePerturb;
    int SubdivideX;
    int SubdivideZ;
    int TestTexturing;
    float TileU;
    float TileV;
    int TranparentWave;
    int UseLights;
    int VTwist;
};

extern WavePerturbTypeEnum WAVE_PerturbType;
extern WaveBreakStruct *WAVE_BreakNext;
extern float WAVE_TotalSec;
extern float WAVE_TexAnimFrame;
extern float WAVE_TexAnimSpeed;
extern WaveDebugStruct WaveDebug;
extern WaveBreakInfoStruct WAVE_BreakInfo;

inline float WAVE_GetFrameSec()
{
    return TIMER_GetFrameSec();
}

float WAVETEX_FrameFix(int stage, float frame);
void WAVE_ComputeGrid();
void WAVE_ComputeShift();
void WAVE_ComputeStage();
void WAVE_ComputeVTwist();
void WAVE_ComputeSlices();
void WAVE_EmitterUpdate();
void WAVE_SoundUpdate();
void UNDERWATER_ScrollBottom();
void WAVE_ComputeFoamAlphas();
void WAVE_GetBreakInfo(WaveBreakInfoStruct *info);

template <int count>
struct SplineCoeffs {
    float a[count];
    float b[count];
    float c[count];
    float d[count];
};

struct WaveProfileCoeffs {
    SplineCoeffs<16> y;
    SplineCoeffs<16> z;
};

enum WaveRegionEnum {
    WAVE_REGION_DUMMY
};

struct WavePositionHint {
    float x;
    float z;
    float xprofile;
    unsigned int xcell;
    unsigned int zcell;
    unsigned int xgrid;
    unsigned int zgrid;
    WaveProfileCoeffs wpc;
};

struct WaveVelocityHint {
    float vx;
    float vz;
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
    inline WaveScratchBase() {}
    virtual inline ~WaveScratchBase() {}

protected:
    static unsigned int sp;
};

template <class T>
class WaveScratch : public WaveScratchBase {
public:
    inline WaveScratch() : data(*(T *)sp) {}
    virtual inline ~WaveScratch()
    {
        sp -= sizeof(data);
    }

private:
    T &data;
};

__asm__(".equ WAVE_PerturbType, 0x00484940");
__asm__(".equ WAVE_BreakNext, 0x00585C4C");
__asm__(".equ WAVE_TotalSec, 0x0048517C");
__asm__(".equ WAVE_TexAnimFrame, 0x004846A0");
__asm__(".equ WAVE_TexAnimSpeed, 0x004846A4");
__asm__(".equ WaveDebug, 0x004847F8");
__asm__(".equ WAVE_BreakInfo, 0x00585C50");
__asm__(".equ WAVETEX_FrameFix__Fif, 0x00380510");
__asm__(".equ WAVE_ComputeGrid__Fv, 0x00379AF8");
__asm__(".equ WAVE_ComputeShift__Fv, 0x00378A10");
__asm__(".equ WAVE_ComputeStage__Fv, 0x00378D00");
__asm__(".equ WAVE_ComputeVTwist__Fv, 0x00378938");
__asm__(".equ WAVE_ComputeSlices__Fv, 0x0037A490");
__asm__(".equ WAVE_EmitterUpdate__Fv, 0x00376368");
__asm__(".equ WAVE_SoundUpdate__Fv, 0x00376418");
__asm__(".equ UNDERWATER_ScrollBottom__Fv, 0x0036E5E0");
__asm__(".equ WAVE_ComputeFoamAlphas__Fv, 0x00374D40");
__asm__(".equ WAVE_GetBreakInfo__FP19WaveBreakInfoStruct, 0x0037D718");
__asm__(".equ _15WaveScratchBase$sp, 0x004846C8");
__asm__(".equ __builtin_delete, 0x002AC6B0");

#endif
