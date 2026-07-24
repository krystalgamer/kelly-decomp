// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003732E0)
// 0x003732E0 WAVE_ResetTimer__Fv
extern int wave_timer;
__asm__(".equ wave_timer, 0x0048517C");
void WAVE_ResetTimer() { wave_timer = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D7E8)
// 0x0037D7E8 WAVE_GetMarker__F14WaveMarkerEnum
enum WaveMarkerEnum { WAVE_MARKER_ZERO };
struct WaveMarker { char data[32]; };
extern WaveMarker wave_markers[];
__asm__(".equ wave_markers, 0x0058BC70");
WaveMarker* WAVE_GetMarker(WaveMarkerEnum marker) { return &wave_markers[marker]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D8B8)
// 0x0037D8B8 WAVE_GetScheduleIndex__Fv
extern int wave_schedule_index;
__asm__(".equ wave_schedule_index, 0x004846D4");
int WAVE_GetScheduleIndex() { return wave_schedule_index; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D920)
// 0x0037D920 WAVE_GetScheduleSec__Fv
extern float wave_timer;
extern float wave_schedule_start;
__asm__(".equ wave_timer, 0x0048517C");
__asm__(".equ wave_schedule_start, 0x004846DC");

static inline float WAVE_GetTotalSec() {
    return wave_timer;
}

float WAVE_GetScheduleSec() {
    return WAVE_GetTotalSec() - wave_schedule_start;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D938)
// 0x0037D938 WAVE_GetScheduleRemainingSec__Fv
extern float wave_timer;
extern float wave_schedule_remaining;
__asm__(".equ wave_timer, 0x0048517C");
__asm__(".equ wave_schedule_remaining, 0x004846E0");

static inline float WAVE_GetTotalSec() {
    return wave_timer;
}

float WAVE_GetScheduleRemainingSec() {
    return wave_schedule_remaining - WAVE_GetTotalSec();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D950)
// 0x0037D950 WAVE_GetStage__Fv
extern int wave_stage;
__asm__(".equ wave_stage, 0x00585AD0");
int WAVE_GetStage() { return wave_stage; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DC10)
// 0x0037DC10 WAVE_IsStatic__Fv
extern bool wave_static;
__asm__(".equ wave_static, 0x004848FC");
bool WAVE_IsStatic() { return wave_static != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DC20)
// 0x0037DC20 WAVE_GetDraw__Fv
extern bool wave_draw;
__asm__(".equ wave_draw, 0x00484894");
bool WAVE_GetDraw() { return wave_draw != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DC30)
// 0x0037DC30 WAVE_SetDraw__Fb
extern bool wave_draw;
__asm__(".equ wave_draw, 0x00484894");
void WAVE_SetDraw(bool value) { wave_draw = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DCD0)
// 0x0037DCD0 WAVE_AddHeightFudge__Fif
extern float wave_height_fudge[];
__asm__(".equ wave_height_fudge, 0x0058ECE8");
void WAVE_AddHeightFudge(int index, float value) { wave_height_fudge[index] = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DCE8)
// 0x0037DCE8 WAVE_GetHeightFudgeFactor__Fi
extern float wave_height_fudge[];
__asm__(".equ wave_height_fudge, 0x0058ECE8");
float WAVE_GetHeightFudgeFactor(int index) { return wave_height_fudge[index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003732C0)
// 0x003732C0 WAVE_StaticInit__Fv
void WAVEMENU_StaticInit();
__asm__(".equ WAVEMENU_StaticInit__Fv, 0x00372B20");
void WAVE_StaticInit() { WAVEMENU_StaticInit(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00374460)
// 0x00374460 WAVE_OnFlybyStart__Fv
void WAVE_StageAdvance();
__asm__(".equ WAVE_StageAdvance__Fv, 0x00377B00");
void WAVE_OnFlybyStart() { WAVE_StageAdvance(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00374D20)
// 0x00374D20 WAVE_RegionIsFoamy__F14WaveRegionEnum
enum WaveRegionEnum { WAVE_REGIONCEILING = 1, WAVE_REGIONTUBE = 9 };
__asm__(".globl WAVE_RegionIsFoamy__F14WaveRegionEnum");
static bool WAVE_RegionIsFoamy(WaveRegionEnum region) { if (region != WAVE_REGIONTUBE) return region == WAVE_REGIONCEILING; return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00377900)
// 0x00377900 WAVE_ResetSchedule__Fv
void WAVE_ScheduleSync();
__asm__(".equ WAVE_ScheduleSync__Fv, 0x003779B0");
void WAVE_ResetSchedule() { register char *wave_globals __asm__("$2") = (char *)0x00480000; __asm__ volatile("" : "+r"(wave_globals)); *(int *)(wave_globals + 0x46d4) = 0; WAVE_ScheduleSync(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00373758)
// 0x00373758 WAVE_Cleanup__Fv
extern unsigned int WAVE_MeshID;
void WAVETEX_FreeWaveMesh(unsigned int id);
__asm__(".equ WAVE_MeshID, 0x0058EA60");
__asm__(".equ WAVETEX_FreeWaveMesh__FUi, 0x00380EA0");
void WAVE_Cleanup() { WAVETEX_FreeWaveMesh(WAVE_MeshID); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00373780)
// 0x00373780 __tcf_0
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
__asm__(".equ _$_7stringx, 0x0034D6E0");
extern "C" void WaveCleanupThunk() __asm__("__tcf_0_00373780");
void WaveCleanupThunk() { register char *object __asm__("$4") = (char *)0x00580000; register int deleting __asm__("$5") = 2; __asm__ volatile("" : "+r"(object), "+r"(deleting)); object -= 0x5108; StringDtor(object, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00374480)
// 0x00374480 WAVE_Unload__Fv
void WAVETEX_UnloadTextureAnims();
void WATER_Cleanup();
__asm__(".equ WAVETEX_UnloadTextureAnims__Fv, 0x0037F128");
__asm__(".equ WATER_Cleanup__Fv, 0x0036E888");
void WAVE_Unload() { WAVETEX_UnloadTextureAnims(); WATER_Cleanup(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D890)
// 0x0037D890 WAVE_GetIndex__Fv
struct WaveScheduleEntry { char scoring_type; char padding0[11]; int wave_index; char padding1[4]; };
extern int WAVE_ScheduleIndex;
extern WaveScheduleEntry WAVE_ScheduleArray[];
__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleArray, 0x0058EA68");
int WAVE_GetIndex() { return WAVE_ScheduleArray[WAVE_ScheduleIndex].wave_index; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D8F8)
// 0x0037D8F8 WAVE_GetScoringType__Fv
struct WaveScheduleEntry { char scoring_type; char padding[19]; };
extern int WAVE_ScheduleIndex;
extern WaveScheduleEntry WAVE_ScheduleArray[];
__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleArray, 0x0058EA68");
char WAVE_GetScoringType() { return WAVE_ScheduleArray[WAVE_ScheduleIndex].scoring_type; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00383DB0)
// 0x00383DB0 __tf15WaveScratchBase
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *scratch_type[] __asm__("__ti15WaveScratchBase");
extern "C" char scratch_name[];
__asm__(".equ __ti15WaveScratchBase, 0x00512210");
__asm__(".equ scratch_name, 0x0051A9E8");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **scratch_rtti() __asm__("__tf15WaveScratchBase");
void **scratch_rtti()
{
    if (!scratch_type[0])
        __rtti_user(scratch_type, scratch_name);
    return scratch_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385348)
// 0x00385348 __tf20WaveBasePerturbClass
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *perturb_type[] __asm__("__ti20WaveBasePerturbClass");
extern "C" char perturb_name[];
__asm__(".equ __ti20WaveBasePerturbClass, 0x00512218");
__asm__(".equ perturb_name, 0x0051AD20");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **perturb_rtti() __asm__("__tf20WaveBasePerturbClass");
void **perturb_rtti()
{
    if (!perturb_type[0])
        __rtti_user(perturb_type, perturb_name);
    return perturb_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037CC50)
// 0x0037CC50 WAVE_GlobalCurrent__FP8vector3d
struct vector3d { float x; float y; float z; };
extern float WAVE_ShiftSpeedX;
extern float WAVE_ShiftSpeedZ;
__asm__(".equ WAVE_ShiftSpeedX, 0x0058EA50");
__asm__(".equ WAVE_ShiftSpeedZ, 0x0058EA54");
void WAVE_GlobalCurrent(vector3d *current) { current->x = -WAVE_ShiftSpeedX; current->y = 0.0f; current->z = -WAVE_ShiftSpeedZ; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D8C8)
// 0x0037D8C8 WAVE_GetNextScheduleIndex__Fv
extern unsigned int WAVE_ScheduleIndex;
extern unsigned int WAVE_ScheduleLength;
__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleLength, 0x004846D0");

int WAVE_GetNextScheduleIndex() {
    return (WAVE_ScheduleIndex + 1) % WAVE_ScheduleLength;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00383DF0)
// 0x00383DF0 _$_15WaveScratchBase
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char wave_scratch_vtable[];
__asm__(".equ wave_scratch_vtable, 0x0051A728");

struct wave_scratch_layout {
    const void *vtable;
};

extern "C" void WaveScratchBaseDtor(void *self, int deleting)
    __asm__("_$_15WaveScratchBase");

void WaveScratchBaseDtor(void *self, int deleting) {
    ((wave_scratch_layout *)self)->vtable = wave_scratch_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003732F0)
// 0x003732F0 __12KSWaterState
class KSWaterState {
    float StageStart[3];
    float StageDuration[3];
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
    KSWaterState();
};

KSWaterState::KSWaterState()
{
    TotalSec = 0.0f;
    ScaleU = 0.0f;
    ScaleV = 0.0f;
    ShiftU = 0.0f;
    ShiftV = 0.0f;
    ShiftX = 0.0f;
    ShiftZ = 0.0f;
    ShiftSpeedU = 0.0f;
    ShiftSpeedV = 0.0f;
    Stage = 0;
    PerturbStage = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00377B00)
// 0x00377B00 WAVE_StageAdvance__Fv
extern int WAVE_Stage;
extern float WAVE_StageProgress;
__asm__(".equ WAVE_Stage, 0x00585AD0");
__asm__(".equ WAVE_StageProgress, 0x00585AD8");

static void WAVE_StageAdvance()
{
    int stage = WAVE_Stage + 1;
    *(volatile int *)&WAVE_Stage = stage;
    int wrapped = stage % 3;
    *(volatile float *)&WAVE_StageProgress = 0.0f;
    WAVE_Stage = wrapped;
}

__asm__(".globl WAVE_StageAdvance__Fv");
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DC40)
// 0x0037DC40 WAVE_GetHeight__Fv
struct WaveScheduleEntry { char padding0[8]; int type; char padding1[8]; };
struct WaveScheduleType { char padding[12]; float height; };
extern int WAVE_ScheduleIndex;
extern WaveScheduleEntry WAVE_ScheduleArray[];
extern WaveScheduleType WAVE_ScheduleType[];
__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleArray, 0x0058EA68");
__asm__(".equ WAVE_ScheduleType, 0x0058B990");
float WAVE_GetHeight()
{
    return WAVE_ScheduleType[WAVE_ScheduleArray[WAVE_ScheduleIndex].type].height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00384EC0)
// 0x00384EC0 __tft20WavePerturbRushClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00384EC0()
    __asm__("__tft20WavePushPerturbClass1i6");
extern "C" void *rtti_type_00384EC0[]
    __asm__("__tit20WavePerturbRushClass1i6");
extern "C" const char rtti_name_00384EC0[];
extern "C" void *rtti_base_type_00384EC0[]
    __asm__("__tit20WavePushPerturbClass1i6");
__asm__(".equ __tft20WavePushPerturbClass1i6, 0x003851E8");
__asm__(".equ __tit20WavePerturbRushClass1i6, 0x00782328");
__asm__(".equ rtti_name_00384EC0, 0x0051ABC8");
__asm__(".equ __tit20WavePushPerturbClass1i6, 0x00782398");
extern "C" void **Rtti_00384EC0()
    __asm__("__tft20WavePerturbRushClass1i6");

void **Rtti_00384EC0()
{
    if (!rtti_type_00384EC0[0]) {
        RttiBase_00384EC0();
        __rtti_si(
            rtti_type_00384EC0,
            rtti_name_00384EC0,
            rtti_base_type_00384EC0
        );
    }
    return rtti_type_00384EC0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00384F98)
// 0x00384F98 __tft21WavePerturbSurgeClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00384F98() __asm__("__tft21WavePulsePerturbClass1i6");
extern "C" void *rtti_type_00384F98[] __asm__("__tit21WavePerturbSurgeClass1i6");
extern "C" const char rtti_name_00384F98[];
extern "C" void *rtti_base_type_00384F98[] __asm__("__tit21WavePulsePerturbClass1i6");
__asm__(".equ __tft21WavePulsePerturbClass1i6, 0x00385198");
__asm__(".equ __tit21WavePerturbSurgeClass1i6, 0x00782348");
__asm__(".equ rtti_name_00384F98, 0x0051AC08");
__asm__(".equ __tit21WavePulsePerturbClass1i6, 0x007823A8");
extern "C" void **Rtti_00384F98() __asm__("__tft21WavePerturbSurgeClass1i6");

void **Rtti_00384F98()
{
    if (!rtti_type_00384F98[0]) {
        RttiBase_00384F98();
        __rtti_si(rtti_type_00384F98, rtti_name_00384F98, rtti_base_type_00384F98);
    }
    return rtti_type_00384F98;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385070)
// 0x00385070 __tft22WavePerturbTongueClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00385070() __asm__("__tft23WaveProfilePerturbClass1i6");
extern "C" void *rtti_type_00385070[] __asm__("__tit22WavePerturbTongueClass1i6");
extern "C" const char rtti_name_00385070[];
extern "C" void *rtti_base_type_00385070[] __asm__("__tit23WaveProfilePerturbClass1i6");
__asm__(".equ __tft23WaveProfilePerturbClass1i6, 0x00385270");
__asm__(".equ __tit22WavePerturbTongueClass1i6, 0x00782368");
__asm__(".equ rtti_name_00385070, 0x0051AC48");
__asm__(".equ __tit23WaveProfilePerturbClass1i6, 0x007823B8");
extern "C" void **Rtti_00385070() __asm__("__tft22WavePerturbTongueClass1i6");

void **Rtti_00385070()
{
    if (!rtti_type_00385070[0]) {
        RttiBase_00385070();
        __rtti_si(rtti_type_00385070, rtti_name_00385070, rtti_base_type_00385070);
    }
    return rtti_type_00385070;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385148)
// 0x00385148 __tft25WavePerturbStairstepClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00385148() __asm__("__tft21WavePulsePerturbClass1i6");
extern "C" void *rtti_type_00385148[] __asm__("__tit25WavePerturbStairstepClass1i6");
extern "C" const char rtti_name_00385148[];
extern "C" void *rtti_base_type_00385148[] __asm__("__tit21WavePulsePerturbClass1i6");
__asm__(".equ __tft21WavePulsePerturbClass1i6, 0x00385198");
__asm__(".equ __tit25WavePerturbStairstepClass1i6, 0x00782388");
__asm__(".equ rtti_name_00385148, 0x0051AC88");
__asm__(".equ __tit21WavePulsePerturbClass1i6, 0x007823A8");
extern "C" void **Rtti_00385148() __asm__("__tft25WavePerturbStairstepClass1i6");

void **Rtti_00385148()
{
    if (!rtti_type_00385148[0]) {
        RttiBase_00385148();
        __rtti_si(rtti_type_00385148, rtti_name_00385148, rtti_base_type_00385148);
    }
    return rtti_type_00385148;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00385198)
// 0x00385198 __tft21WavePulsePerturbClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00385198() __asm__("__tft16WavePerturbClass1i6");
extern "C" void *rtti_type_00385198[] __asm__("__tit21WavePulsePerturbClass1i6");
extern "C" const char rtti_name_00385198[];
extern "C" void *rtti_base_type_00385198[] __asm__("__tit16WavePerturbClass1i6");
__asm__(".equ __tft16WavePerturbClass1i6, 0x003852F8");
__asm__(".equ __tit21WavePulsePerturbClass1i6, 0x007823A8");
__asm__(".equ rtti_name_00385198, 0x0051ACA8");
__asm__(".equ __tit16WavePerturbClass1i6, 0x007823C8");
extern "C" void **Rtti_00385198() __asm__("__tft21WavePulsePerturbClass1i6");

void **Rtti_00385198()
{
    if (!rtti_type_00385198[0]) {
        RttiBase_00385198();
        __rtti_si(rtti_type_00385198, rtti_name_00385198, rtti_base_type_00385198);
    }
    return rtti_type_00385198;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003852F8)
// 0x003852F8 __tft16WavePerturbClass1i6
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003852F8() __asm__("__tf20WaveBasePerturbClass");
extern "C" void *rtti_type_003852F8[] __asm__("__tit16WavePerturbClass1i6");
extern "C" const char rtti_name_003852F8[];
extern "C" void *rtti_base_type_003852F8[] __asm__("__ti20WaveBasePerturbClass");
__asm__(".equ __tf20WaveBasePerturbClass, 0x00385348");
__asm__(".equ __tit16WavePerturbClass1i6, 0x007823C8");
__asm__(".equ rtti_name_003852F8, 0x0051AD08");
__asm__(".equ __ti20WaveBasePerturbClass, 0x00512218");
extern "C" void **Rtti_003852F8() __asm__("__tft16WavePerturbClass1i6");

void **Rtti_003852F8()
{
    if (!rtti_type_003852F8[0]) {
        RttiBase_003852F8();
        __rtti_si(rtti_type_003852F8, rtti_name_003852F8, rtti_base_type_003852F8);
    }
    return rtti_type_003852F8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003772C8)
// 0x003772C8 WAVE_PerturbNext__Fv
struct WaveBreakStruct
{
    int type;
    float time;
    char padding[0x18];
};

extern WaveBreakStruct *WAVE_BreakNext;
extern int WAVE_PerturbType;
extern float WAVE_TotalSec;

void WAVE_PerturbSkipBlanks();
void WAVE_PerturbReset(float next_time);

__asm__(".equ WAVE_BreakNext, 0x00585C4C");
__asm__(".equ WAVE_PerturbType, 0x00484940");
__asm__(".equ WAVE_TotalSec, 0x0048517C");
__asm__(".equ WAVE_PerturbSkipBlanks__Fv, 0x00377320");
__asm__(".equ WAVE_PerturbReset__Ff, 0x00377370");

void WAVE_PerturbNext()
{
    ++WAVE_BreakNext;
    WAVE_PerturbType = WAVE_BreakNext->type;
    WAVE_PerturbSkipBlanks();
    WAVE_PerturbReset(WAVE_BreakNext->time - WAVE_TotalSec);
    __asm__ __volatile__("" : : : "memory");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DC78)
// 0x0037DC78 WAVE_GetNextHeight__Fv
struct WaveScheduleEntry
{
    char padding0[8];
    unsigned int type;
    char padding1[8];
};

struct WaveScheduleTypeEntry
{
    char padding[12];
    float height;
};

extern unsigned int WAVE_ScheduleIndex;
extern unsigned int WAVE_ScheduleLength;
extern WaveScheduleEntry WAVE_ScheduleArray[];
extern WaveScheduleTypeEntry WAVE_ScheduleType[];

__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleLength, 0x004846D0");
__asm__(".equ WAVE_ScheduleArray, 0x0058EA68");
__asm__(".equ WAVE_ScheduleType, 0x0058B990");

float WAVE_GetNextHeight()
{
    unsigned int index =
        (WAVE_ScheduleIndex + 1) % WAVE_ScheduleLength;
    return WAVE_ScheduleType[
        WAVE_ScheduleArray[index].type
    ].height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00379A30)
// 0x00379A30 WAVE_AllocPartition__FRPcUi
struct WavePartition {
    unsigned int count;
    float *guide;
    float *guide_step;
    float *weight;
};
WavePartition *WAVE_AllocPartition(char *&memory, unsigned int count) {
    WavePartition *partition=(WavePartition *)memory;
    memory+=sizeof(*partition);
    partition->count=count;
    partition->guide=(float *)memory;
    memory+=count*sizeof(*partition->guide);
    partition->guide_step=(float *)memory;
    memory+=(count-1)*sizeof(*partition->guide_step);
    partition->weight=(float *)memory;
    memory+=(count-1)*sizeof(*partition->weight);
    return partition;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037D838)
// 0x0037D838 WAVE_GetMarkerProfile__F14WaveMarkerEnum
enum WaveMarkerEnum { WAVE_MARKER_ZERO };
struct WaveMarkerData {
    char padding[8];
    float x;
    char tail[0x14];
};
extern int WAVE_LeftBreaker;
extern float WAVE_MeshMinX;
extern float WAVE_MeshMaxX;
extern WaveMarkerData WAVE_Marker[];
__asm__(".equ WAVE_LeftBreaker, 0x004846C4");
__asm__(".equ WAVE_MeshMinX, 0x00484620");
__asm__(".equ WAVE_MeshMaxX, 0x00484624");
__asm__(".equ WAVE_Marker, 0x0058BC68");
float WAVE_GetMarkerProfile(WaveMarkerEnum marker) {
    return WAVE_LeftBreaker
        ? WAVE_MeshMinX+WAVE_MeshMaxX-WAVE_Marker[marker].x
        : WAVE_Marker[marker].x;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0037DBB0)
// 0x0037DBB0 WAVE_GetCollisionBox__FR8vector3dT0ff
struct vector3d { float x,y,z; };
extern float WAVE_MeshMinX;
extern float WAVE_MeshMaxX;
extern float WAVE_MeshMinZ;
extern float WAVE_MeshMaxZ;
__asm__(".equ WAVE_MeshMinX, 0x00484620");
__asm__(".equ WAVE_MeshMaxX, 0x00484624");
__asm__(".equ WAVE_MeshMinZ, 0x00484628");
__asm__(".equ WAVE_MeshMaxZ, 0x0048462C");
void WAVE_GetCollisionBox(
    vector3d &minimum,vector3d &maximum,float margin_x,float margin_z
) {
    minimum.x=WAVE_MeshMinX+margin_x;
    minimum.y=-20.0f;
    minimum.z=WAVE_MeshMinZ+margin_z;
    maximum.x=WAVE_MeshMaxX-margin_x;
    maximum.y=20.0f;
    maximum.z=WAVE_MeshMaxZ-margin_z;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00376B78)
// 0x00376B78 WAVE_PerturbInit__Fv
struct obj_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*);};struct object{char p0[432];obj_vtable*vtable;};extern object*wave_objs[];__asm__(".equ wave_objs,0x00484B58");extern "C" void pulse_init(void*) __asm__("Init__t21WavePulsePerturbClass1i6");extern "C" void partitions() __asm__("WAVE_PerturbInitPartitions__Fv");__asm__(".equ Init__t21WavePulsePerturbClass1i6,0x00381EE0");__asm__(".equ WAVE_PerturbInitPartitions__Fv,0x00376600");extern char pulse[];__asm__(".equ pulse,0x0058DBE0");extern "C" void wave_init() __asm__("WAVE_PerturbInit__Fv");void wave_init(){for(int i=0;i<6;i++){object*o=wave_objs[i];obj_vtable*t=o->vtable;t->destroy((char*)o+t->adjustment);}pulse_init(pulse);partitions();int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00376BE8)
// 0x00376BE8 WAVE_ClearBreakArray__Fv
extern "C" void*memset(void*,int,unsigned);__asm__(".equ memset,0x003D18D0");extern char break_array[];extern int break_type_max;__asm__(".equ break_array,0x0058C3A8");__asm__(".equ break_type_max,0x00585C48");extern "C" void clear_breaks() __asm__("WAVE_ClearBreakArray__Fv");void clear_breaks(){register char*base __asm__("$2")=break_array;register int i __asm__("$18")=7;register int*numbreak __asm__("$17")=(int*)(base+8);register char*list __asm__("$16")=base+12;do{*numbreak=0;memset(list,0,256);list+=268;--i;numbreak=(int*)((char*)numbreak+268);}while(i>=0);break_type_max=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00383FA0)
// 0x00383FA0 WAVE_Sin__Ff
extern const float sin_table[];__asm__(".equ sin_table,0x00519210");extern "C" float wave_sin(float a) __asm__("WAVE_Sin__Ff");float wave_sin(float a){int index=((int)(a/6.283185308f*1000.0f))%1000;return index>=0?sin_table[index]:-sin_table[-index];}
#endif
