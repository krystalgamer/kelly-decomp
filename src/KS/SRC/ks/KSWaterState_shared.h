#ifndef KELLY_DECOMP_KS_WATER_STATE_SHARED_H
#define KELLY_DECOMP_KS_WATER_STATE_SHARED_H

enum {
    WAVE_StageMax = 3
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
extern int WAVE_PerturbStage;
extern float WAVE_ScheduleTimeStart;
extern float WAVE_ScheduleTimeEnd;
extern float WAVE_TotalSec;

__asm__(".equ WAVE_StageStart, 0x004847E0");
__asm__(".equ WAVE_StageDuration, 0x004847D0");
__asm__(".equ WAVE_TotalSec, 0x0048517C");
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
