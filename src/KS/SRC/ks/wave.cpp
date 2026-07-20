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

#if defined(KELLY_DECOMP_FUNCTION_0037CC50)
// 0x0037CC50 WAVE_GlobalCurrent__FP8vector3d
struct vector3d { float x; float y; float z; };
extern float WAVE_ShiftSpeedX;
extern float WAVE_ShiftSpeedZ;
__asm__(".equ WAVE_ShiftSpeedX, 0x0058EA50");
__asm__(".equ WAVE_ShiftSpeedZ, 0x0058EA54");
void WAVE_GlobalCurrent(vector3d *current) { current->x = -WAVE_ShiftSpeedX; current->y = 0.0f; current->z = -WAVE_ShiftSpeedZ; }
#endif
