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
