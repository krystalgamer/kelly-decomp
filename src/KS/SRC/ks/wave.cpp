// Matching decompilation blocks selected by generated build shims.

// 0x00373328 Save__12KSWaterState
#include "KS/SRC/ks/wave.h"

void KSWaterState::Save()
{
    float *destination = StageStart;
    float *sourceStart = WAVE_StageStart;
    float *sourceDuration = WAVE_StageDuration;
    for (int count = WAVE_StageMax - 1; count >= 0; --count)
    {
        destination[0] = *sourceStart++;
        destination[WAVE_StageMax] = *sourceDuration++;
        ++destination;
    }

    TotalSec = WAVE_TotalSec;
    ScaleU = WAVE_ScaleU;
    ScaleV = WAVE_ScaleV;
    ShiftU = WAVE_ShiftU;
    ShiftV = WAVE_ShiftV;
    ShiftX = WAVE_ShiftX;
    ShiftZ = WAVE_ShiftZ;
    ShiftSpeedU = WAVE_ShiftSpeedU;
    ShiftSpeedV = WAVE_ShiftSpeedV;
    Stage = WAVE_Stage;
    PerturbStage = WAVE_PerturbStage;
    ScheduleTimeStart = WAVE_ScheduleTimeStart;
    ScheduleTimeEnd = WAVE_ScheduleTimeEnd;
}


// 0x003732E0 WAVE_ResetTimer__Fv
#include "KS/SRC/ks/wave.h"

void WAVE_ResetTimer() { WAVE_TotalSec = 0.0f; }

// 0x0037D7E8 WAVE_GetMarker__F14WaveMarkerEnum
#include "KS/SRC/ks/wave.h"

WaveMarker* WAVE_GetMarker(WaveMarkerEnum marker) { return &WAVE_Markers[marker]; }

// 0x0037D8B8 WAVE_GetScheduleIndex__Fv
#include "KS/SRC/ks/wave.h"

int WAVE_GetScheduleIndex() { return WAVE_ScheduleIndex; }

// 0x0037D920 WAVE_GetScheduleSec__Fv
#include "KS/SRC/ks/wave.h"

float WAVE_GetScheduleSec() {
    return WAVE_TotalSec - WAVE_ScheduleTimeStart;
}

// 0x0037D938 WAVE_GetScheduleRemainingSec__Fv
#include "KS/SRC/ks/wave.h"

float WAVE_GetScheduleRemainingSec() {
    return WAVE_ScheduleTimeEnd - WAVE_GetTotalSec();
}

// 0x0037D950 WAVE_GetStage__Fv
#include "KS/SRC/ks/wave.h"

int WAVE_GetStage() { return WAVE_Stage; }

// 0x0037DC10 WAVE_IsStatic__Fv
#include "KS/SRC/ks/wave.h"

bool WAVE_IsStatic() { return WaveDebug.StaticWave; }

// 0x0037DC20 WAVE_GetDraw__Fv
#include "KS/SRC/ks/wave.h"

bool WAVE_GetDraw() { return WaveDebug.DrawWaveMesh; }

// 0x0037DC30 WAVE_SetDraw__Fb
#include "KS/SRC/ks/wave.h"

void WAVE_SetDraw(bool value) { WaveDebug.DrawWaveMesh = value; }

// 0x0037DCD0 WAVE_AddHeightFudge__Fif
#include "KS/SRC/ks/wave.h"

void WAVE_AddHeightFudge(int index, float value) { WaveHeightFudgeFactorArray[index] = value; }

// 0x0037DCE8 WAVE_GetHeightFudgeFactor__Fi
#include "KS/SRC/ks/wave.h"

float WAVE_GetHeightFudgeFactor(int index) { return WaveHeightFudgeFactorArray[index]; }

// 0x00374D20 WAVE_RegionIsFoamy__F14WaveRegionEnum
enum WaveRegionEnum { WAVE_REGIONCEILING = 1, WAVE_REGIONTUBE = 9 };
static bool WAVE_RegionIsFoamy(WaveRegionEnum region) { if (region != WAVE_REGIONTUBE) return region == WAVE_REGIONCEILING; return true; }

// 0x00374480 WAVE_Unload__Fv
#include "KS/SRC/ks/water.h"
#include "KS/SRC/ks/wavetex.h"

void WAVE_Unload() { WAVETEX_UnloadTextureAnims(); void (*cleanup)() = WATER_Cleanup; cleanup(); }

// 0x0037D890 WAVE_GetIndex__Fv
#include "KS/SRC/ks/wave.h"

int WAVE_GetIndex() { return WAVE_ScheduleArray[WAVE_ScheduleIndex].wave_data_type; }

// 0x0037D8F8 WAVE_GetScoringType__Fv
#include "KS/SRC/ks/wave.h"

char WAVE_GetScoringType() { return WAVE_ScheduleArray[WAVE_ScheduleIndex].id; }

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

// 0x0037CC50 WAVE_GlobalCurrent__FP8vector3d
#include "KS/SRC/ks/wave.h"

extern float WAVE_ShiftSpeedX;
extern float WAVE_ShiftSpeedZ;
__asm__(".equ WAVE_ShiftSpeedX, 0x0058EA50");
__asm__(".equ WAVE_ShiftSpeedZ, 0x0058EA54");

void WAVE_GlobalCurrent(vector3d *current)
{
    current->x = -WAVE_ShiftSpeedX;
    current->y = 0.0f;
    current->z = -WAVE_ShiftSpeedZ;
}

// 0x0037D8C8 WAVE_GetNextScheduleIndex__Fv
#include "KS/SRC/ks/wave.h"

__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WAVE_ScheduleLength, 0x004846D0");

int WAVE_GetNextScheduleIndex() {
    return (WAVE_ScheduleIndex + 1) % WAVE_ScheduleLength;
}

// 0x003732F0 __12KSWaterState
#include "KS/SRC/ks/wave.h"

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

// 0x00384EC0 __tft20WavePerturbRushClass1i6
#include "KS/SRC/rtti.h"

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

// 0x00384F98 __tft21WavePerturbSurgeClass1i6
#include "KS/SRC/rtti.h"

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

// 0x00385070 __tft22WavePerturbTongueClass1i6
#include "KS/SRC/rtti.h"

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

// 0x00385148 __tft25WavePerturbStairstepClass1i6
#include "KS/SRC/rtti.h"

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

// 0x00385198 __tft21WavePulsePerturbClass1i6
#include "KS/SRC/rtti.h"

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

// 0x003852F8 __tft16WavePerturbClass1i6
#include "KS/SRC/rtti.h"

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

// 0x00376B78 WAVE_PerturbInit__Fv
struct obj_vtable{char p0[8];short adjustment;short x0;void(*destroy)(void*);};struct object{char p0[432];obj_vtable*vtable;};extern object*wave_objs[];__asm__(".equ wave_objs,0x00484B58");extern "C" void pulse_init(void*) __asm__("Init__t21WavePulsePerturbClass1i6");extern "C" void partitions() __asm__("WAVE_PerturbInitPartitions__Fv");__asm__(".equ Init__t21WavePulsePerturbClass1i6,0x00381EE0");__asm__(".equ WAVE_PerturbInitPartitions__Fv,0x00376600");extern char pulse[];__asm__(".equ pulse,0x0058DBE0");extern "C" void wave_init() __asm__("WAVE_PerturbInit__Fv");void wave_init(){for(int i=0;i<6;i++){object*o=wave_objs[i];obj_vtable*t=o->vtable;t->destroy((char*)o+t->adjustment);}pulse_init(pulse);partitions();int dead;__asm__("" : "=r"(dead));}

// 0x00376BE8 WAVE_ClearBreakArray__Fv
extern "C" void*memset(void*,int,unsigned);__asm__(".equ memset,0x003D18D0");extern char break_array[];extern int break_type_max;__asm__(".equ break_array,0x0058C3A8");__asm__(".equ break_type_max,0x00585C48");extern "C" void clear_breaks() __asm__("WAVE_ClearBreakArray__Fv");void clear_breaks(){register char*base __asm__("$2")=break_array;register int i __asm__("$18")=7;register int*numbreak __asm__("$17")=(int*)(base+8);register char*list __asm__("$16")=base+12;do{*numbreak=0;memset(list,0,256);list+=268;--i;numbreak=(int*)((char*)numbreak+268);}while(i>=0);break_type_max=0;}

// 0x00383FA0 WAVE_Sin__Ff
extern const float sin_table[];__asm__(".equ sin_table,0x00519210");extern "C" float wave_sin(float a) __asm__("WAVE_Sin__Ff");float wave_sin(float a){int index=((int)(a/6.283185308f*1000.0f))%1000;return index>=0?sin_table[index]:-sin_table[-index];}

// 0x00374930 WAVE_ListAdd__Fv
struct nglRenderParams{unsigned Flags;char pad[28];float Scale[4];char tail[32];};struct WaveDebugType{char pad0[92];int DrawDarkMesh;char pad1[20];int DrawHighMesh;char pad2[36];int DrawWaveMesh;};extern float WAVE_LocalScale[3];extern char WAVE_LocalToWorld[];extern WaveDebugType WaveDebug;extern unsigned WaveMeshID;extern "C" void submit(unsigned,const char*,nglRenderParams&,bool,bool,bool,bool,bool)__asm__("WAVETEX_SubmitMesh__FUiRC9nglMatrixR15nglRenderParamsbN43");__asm__(".equ WAVE_LocalScale,0x00484690");__asm__(".equ WAVE_LocalToWorld,0x00484650");__asm__(".equ WaveDebug,0x004847F8");__asm__(".equ WaveMeshID,0x0058EA60");__asm__(".equ WAVETEX_SubmitMesh__FUiRC9nglMatrixR15nglRenderParamsbN43,0x00381188");extern "C" void add()__asm__("WAVE_ListAdd__Fv");void add(){nglRenderParams rp;rp.Flags=0;rp.Flags|=0x40;rp.Scale[0]=WAVE_LocalScale[0];rp.Scale[1]=WAVE_LocalScale[1];rp.Scale[2]=WAVE_LocalScale[2];if(WaveDebug.DrawWaveMesh)submit(WaveMeshID,WAVE_LocalToWorld,rp,WaveDebug.DrawWaveMesh,WaveDebug.DrawDarkMesh,WaveDebug.DrawHighMesh,WaveDebug.DrawHighMesh,true);}

// 0x0037D3B0 WAVE_GetVHint__FPC16WavePositionHintT0fP16WaveVelocityHint
struct Hint{float x,z;char p[8];unsigned zcell;};struct VHint{float vx,vz;};extern float ControlZ[];extern float Coeff[];__asm__(".equ ControlZ,0x00585A40");__asm__(".equ Coeff,0x00585D70");extern "C" void get(const Hint*,const Hint*,float,VHint*)__asm__("WAVE_GetVHint__FPC16WavePositionHintT0fP16WaveVelocityHint");void get(const Hint*from,const Hint*to,float seconds,VHint*out){unsigned i=from->zcell;float delta=from->z-ControlZ[i];float*ap=Coeff;float*bp=Coeff+16;float*cp=Coeff+32;float deriv=(3.0f*ap[i]*delta+2.0f*bp[i])*delta+cp[i];out->vx=(to->x-from->x)/seconds;out->vz=(to->z-from->z)*deriv/seconds;}

// 0x00379420 WAVE_TransformPartition__FPC13WavePartitionP13WavePartitionff
struct WavePartition{unsigned N;float*guide;float*guidestep;float*weight;};extern "C" void transform(const WavePartition*,WavePartition*,float,float) __asm__("WAVE_TransformPartition__FPC13WavePartitionP13WavePartitionff");void transform(const WavePartition*wpin,WavePartition*wpout,float scale,float offset){const float*guideinptr=wpin->guide;float*guideoutptr=wpout->guide;const float*guidestepinptr=wpin->guidestep;float*guidestepoutptr=wpout->guidestep;const float*weightinptr=wpin->weight;float*weightoutptr=wpout->weight;const unsigned&numguide=wpin->N;wpout->N=numguide;for(unsigned i=0;i<numguide-1;++i){*guideoutptr++=scale**guideinptr+++offset;*guidestepoutptr++=scale**guidestepinptr++;*weightoutptr++=*weightinptr++;}*guideoutptr++=scale**guideinptr+++offset;}

// 0x00384B80 WorldToProfile__t21WavePulsePerturbClass1i6f
struct pulse_vtable{char padding[24];short adjustment;short reserved;float(*world_to_pulse)(void*,float);};class WavePulsePerturbClass6{public:char padding[432];pulse_vtable*vtable;public:float WorldToProfile(float);};extern int WAVE_PerturbStage;extern float WAVE_PerturbProgress;asm(".equ WAVE_PerturbStage,0x00585C44");asm(".equ WAVE_PerturbProgress,0x00585C6C");inline float pulse(WavePulsePerturbClass6*self,float x){pulse_vtable*v=self->vtable;return v->world_to_pulse((char*)self+v->adjustment,x);}extern "C" float WorldToProfile(WavePulsePerturbClass6*self,float worldx)__asm__("WorldToProfile__t21WavePulsePerturbClass1i6f");float WorldToProfile(WavePulsePerturbClass6*self,float worldx){float profilex;switch(WAVE_PerturbStage){case 1:case 2:case 3:case 4:profilex=pulse(self,worldx);break;case 5:{float p=pulse(self,worldx);float q=1.0f-WAVE_PerturbProgress;profilex=worldx+(p-worldx)*(q*q);break;}default:profilex=worldx;break;}return profilex;}

// 0x00384DE0 WorldToProfile__t20WavePushPerturbClass1i6f
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

__asm__(".equ WAVE_PerturbStage, 0x00585C44");
__asm__(".equ WAVE_PerturbProgress, 0x00585C6C");

template <int count>
float WavePushPerturbClass<count>::WorldToProfile(float worldx)
{
    float profilex;

    switch (WAVE_PerturbStage)
    {
    case WAVE_PerturbStageDo:
        profilex =
            worldx
            + (WorldToPulse(worldx) - worldx)
                * sqr(WAVE_PerturbProgress);
        break;
    case WAVE_PerturbStageHold:
    case WAVE_PerturbStageCollapse:
    case WAVE_PerturbStageWait:
        profilex = WorldToPulse(worldx);
        break;
    case WAVE_PerturbStageUndo:
        profilex =
            worldx
            + (WorldToPulse(worldx) - worldx)
                * sqr(1 - WAVE_PerturbProgress);
        break;
    default:
        profilex = worldx;
        break;
    }

    return profilex;
}

template float WavePushPerturbClass<6>::WorldToProfile(float worldx);

// 0x003744A8 WAVE_Tick__Fv
#include "KS/SRC/ks/wave.h"
#include "decomp_annotations.h"

void WAVE_Tick(void)
{
	WAVE_TotalSec += WAVE_GetFrameSec();

	WAVE_TexAnimFrame = WAVETEX_FrameFix(0, WAVE_TexAnimFrame + WAVE_TexAnimSpeed );
	WAVE_ComputeGrid();
	WAVE_ComputeShift();
	WAVE_ComputeStage();
	WAVE_ComputeVTwist();
	WAVE_ComputeSlices();
	WAVE_EmitterUpdate();
	WAVE_SoundUpdate();
	UNDERWATER_ScrollBottom();
	if ( WaveDebug.AnimateFoam )
		WAVE_ComputeFoamAlphas();

	WAVE_GetBreakInfo(&WAVE_BreakInfo);
	KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00378938 WAVE_ComputeVTwist__Fv
extern float WAVE_ScaleV;
extern float WAVE_MeshMinZ;
extern float WAVE_MeshMaxZ;
extern float WAVE_EmitterZ;
extern float WAVE_EmitterCrestZ;
extern float WAVE_ShiftV;
extern float WAVE_VTwistScale;
extern float WAVE_MeshMinV;
extern float WAVE_CrashV;
extern float WAVE_CrestV;
extern float WAVE_MeshMaxV;
extern float WAVE_VTwistCrashV;
extern float WAVE_VTwistCrestV;
extern float WAVE_VTwistSlopeMinCrash;
extern float WAVE_VTwistSlopeCrashCrest;
extern float WAVE_VTwistSlopeCrestMax;

__asm__(".equ WAVE_ScaleV, 0x004852D0");
__asm__(".equ WAVE_MeshMinZ, 0x00484628");
__asm__(".equ WAVE_MeshMaxZ, 0x0048462C");
__asm__(".equ WAVE_EmitterZ, 0x00585AC0");
__asm__(".equ WAVE_EmitterCrestZ, 0x00585AC4");
__asm__(".equ WAVE_ShiftV, 0x0058EA44");
__asm__(".equ WAVE_VTwistScale, 0x004847EC");
__asm__(".equ WAVE_MeshMinV, 0x00585ADC");
__asm__(".equ WAVE_CrashV, 0x00585AE0");
__asm__(".equ WAVE_CrestV, 0x00585AE4");
__asm__(".equ WAVE_MeshMaxV, 0x00585AE8");
__asm__(".equ WAVE_VTwistCrashV, 0x00585AEC");
__asm__(".equ WAVE_VTwistCrestV, 0x00585AF0");
__asm__(".equ WAVE_VTwistSlopeMinCrash, 0x00585AF4");
__asm__(".equ WAVE_VTwistSlopeCrashCrest, 0x00585AF8");
__asm__(".equ WAVE_VTwistSlopeCrestMax, 0x00585AFC");

void WAVE_ComputeVTwist()
{
    WAVE_MeshMinV = WAVE_ScaleV * WAVE_MeshMinZ + WAVE_ShiftV;
    WAVE_CrashV = WAVE_ScaleV * WAVE_EmitterZ + WAVE_ShiftV;
    WAVE_CrestV = WAVE_ScaleV * WAVE_EmitterCrestZ + WAVE_ShiftV;
    WAVE_MeshMaxV = WAVE_ScaleV * WAVE_MeshMaxZ + WAVE_ShiftV;

    WAVE_VTwistCrashV =
        WAVE_CrashV +
        WAVE_VTwistScale * (WAVE_CrestV - WAVE_CrashV);
    WAVE_VTwistCrestV =
        WAVE_CrestV -
        WAVE_VTwistScale * (WAVE_CrestV - WAVE_CrashV);

    WAVE_VTwistSlopeMinCrash =
        (WAVE_VTwistCrashV - WAVE_MeshMinV) /
        (WAVE_CrashV - WAVE_MeshMinV);
    WAVE_VTwistSlopeCrashCrest =
        (WAVE_VTwistCrestV - WAVE_VTwistCrashV) /
        (WAVE_CrestV - WAVE_CrashV);
    WAVE_VTwistSlopeCrestMax =
        (WAVE_MeshMaxV - WAVE_VTwistCrestV) /
        (WAVE_MeshMaxV - WAVE_CrestV);
}

// 0x003780F0 WAVE_HeightPerturb__Ff
typedef unsigned int u_int;

struct WaveScheduleStruct
{
    char id;
    char padding0[3];
    float duration;
    u_int type;
    u_int wd_type;
    u_int break_type;
};

struct WaveData
{
    char padding0[80];
    float h_amp;
    float h_freq;
    char padding1[496];
};

enum WaveStageEnum
{
    WAVE_StageBuilding
};

extern WaveScheduleStruct WAVE_ScheduleArray[];
extern u_int WAVE_ScheduleIndex;
extern WaveData WaveDataArray[];
extern float WAVE_ShiftX;
extern float WAVE_MeshMinX;
extern float WAVE_MeshMaxX;
extern bool WAVE_LeftBreaker;
extern WaveStageEnum WAVE_Stage;
extern float WAVE_StageProgress;
float WAVE_Sin(float x);

__asm__(".equ WAVE_ScheduleArray, 0x0058EA68");
__asm__(".equ WAVE_ScheduleIndex, 0x004846D4");
__asm__(".equ WaveDataArray, 0x004861E0");
__asm__(".equ WAVE_ShiftX, 0x004852DC");
__asm__(".equ WAVE_MeshMinX, 0x00484620");
__asm__(".equ WAVE_MeshMaxX, 0x00484624");
__asm__(".equ WAVE_LeftBreaker, 0x004846C4");
__asm__(".equ WAVE_Stage, 0x00585AD0");
__asm__(".equ WAVE_StageProgress, 0x00585AD8");
__asm__(".equ WAVE_Sin__Ff, 0x00383FA0");

#define WAVEDATA_LOOKUP(a) (WaveDataArray[WAVE_ScheduleArray[WAVE_ScheduleIndex].wd_type].a)
#define WAVE_HeightPerturbAmp WAVEDATA_LOOKUP(h_amp)
#define WAVE_HeightPerturbFreq WAVEDATA_LOOKUP(h_freq)
#define WAVE_MESHWIDTH (WAVE_MeshMaxX - WAVE_MeshMinX)

static float WAVE_HeightPerturb(float x)
{
	float heightperturb = (1 + WAVE_HeightPerturbAmp * WAVE_Sin(WAVE_HeightPerturbFreq * (x + WAVE_ShiftX)));

	// Keep the edge of the wave from stretching during build.
	if (WAVE_Stage == WAVE_StageBuilding)
	{
		float a = (x - WAVE_MeshMinX) / WAVE_MESHWIDTH;	// from 0 to 1 over width of wave, in reverse time

		if (!WAVE_LeftBreaker)
		{
			a = 1 - a;
		}

		if (a > WAVE_StageProgress)
		{
			heightperturb *= (1 - a) / (1 - WAVE_StageProgress);
		}
	}

	return heightperturb;
}

// Source implementation boundary.
// 0x00383D60 __9SoundLine
#include "KS/SRC/ks/wave.h"

SoundLine::SoundLine() {
}
