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

enum {
    WAVE_StageMax = 3
};

struct WaveBreakInfoStruct {
    bool onoff;
    WavePerturbTypeEnum type;
    float time;
    WavePerturbStageEnum stage;
    float stageprogress;
};

enum WaveMarkerEnum {
    WAVE_MARKER_ZERO
};

struct WaveMarker {
    char data[32];
};

struct WaveScheduleStruct {
    char id;
    float duration;
    unsigned int type;
    unsigned int wave_data_type;
    unsigned int break_type;
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
extern float WAVE_ScheduleTimeStart;
extern float WAVE_ScheduleTimeEnd;
extern float WaveHeightFudgeFactorArray[];
extern WaveMarker WAVE_Markers[];
extern unsigned int WAVE_ScheduleIndex;
extern WaveScheduleStruct WAVE_ScheduleArray[];
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
int WAVE_GetIndex();
char WAVE_GetScoringType();

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

class KSWaterState {
    float StageStart[WAVE_StageMax];
    float StageDuration[WAVE_StageMax];
    float ScaleU;
    float ScaleV;
    float ShiftU;
    float ShiftV;
    float ShiftX;
    float ShiftZ;
    float ShiftSpeedU;
    float ShiftSpeedV;
    int Stage;
    int PerturbStage;
    float ScheduleTimeStart;
    float ScheduleTimeEnd;
    float TotalSec;

public:
    void Save();
};

extern float WAVE_StageStart[WAVE_StageMax];
extern float WAVE_StageDuration[WAVE_StageMax];
extern float WAVE_ScaleU;
extern float WAVE_ScaleV;
extern float WAVE_ShiftU;
extern float WAVE_ShiftV;
extern float WAVE_ShiftX;
extern float WAVE_ShiftZ;
extern float WAVE_ShiftSpeedU;
extern float WAVE_ShiftSpeedV;
extern int WAVE_Stage;
inline float WAVE_GetTotalSec() { return WAVE_TotalSec; }
WaveMarker *WAVE_GetMarker(WaveMarkerEnum marker);
float WAVE_GetScheduleSec();
float WAVE_GetScheduleRemainingSec();
void WAVE_AddHeightFudge(int index, float value);
float WAVE_GetHeightFudgeFactor(int index);
extern WavePerturbStageEnum WAVE_PerturbStage;
extern float WAVE_ScheduleTimeStart;
extern float WAVE_ScheduleTimeEnd;
extern float WAVE_TotalSec;

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
__asm__(".equ WAVE_StageStart, 0x004847E0");
__asm__(".equ WAVE_StageDuration, 0x004847D0");
__asm__(".equ WAVE_ScaleU, 0x004852CC");
__asm__(".equ WAVE_ScaleV, 0x004852D0");
__asm__(".equ WAVE_ShiftU, 0x0058EA40");
__asm__(".equ WAVE_ShiftV, 0x0058EA44");
__asm__(".equ WAVE_ShiftX, 0x004852DC");
__asm__(".equ WAVE_ShiftZ, 0x004852E0");
__asm__(".equ WAVE_ShiftSpeedU, 0x0058EA48");
__asm__(".equ WAVE_ShiftSpeedV, 0x0058EA4C");
__asm__(".equ WAVE_Stage, 0x00585AD0");
__asm__(".equ WAVE_PerturbStage, 0x00585C44");
__asm__(".equ WAVE_ScheduleTimeStart, 0x004846DC");
__asm__(".equ WAVE_ScheduleTimeEnd, 0x004846E0");

#endif
