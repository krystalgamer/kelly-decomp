// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0020D250) || \
    defined(KELLY_DECOMP_FUNCTION_0021E478)
#include "KS/SRC/ks/kellyslater_controller_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D250)
asm(".equ AddTrick__14ScoringManageri, 0x00247558");

// 0x0020D250 SetCompletedTrick__22kellyslater_controller
void kellyslater_controller::SetCompletedTrick()
{
    if (completedTrick != currentTrick)
    {
        my_scoreManager.AddTrick(currentTrick);
        trick_complete = true;
        completedTrick = currentTrick;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D2E8)
// 0x0020D2E8 SetCurrentTrick__22kellyslater_controller
class kellyslater_controller {
    char padding_to_current[0x18F4];
    int currentTrick;
    int completedTrick;
    int newTrick;
public:
    void SetCurrentTrick();
};

void kellyslater_controller::SetCurrentTrick() {
    currentTrick = newTrick;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D2F8)
// 0x0020D2F8 ResetTricks__22kellyslater_controller
class kellyslater_controller { char padding[0x18F4]; int currentTrick; int completedTrick; public: void ResetTricks(); };
void kellyslater_controller::ResetTricks() { completedTrick = -1; currentTrick = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002138B0)
// 0x002138B0 StartGrind__22kellyslater_controllerG8vector3d
class vector3d {
public:
    float x;
    float y;
    float z;

    vector3d() {}
    vector3d(const vector3d& value) {
        x = value.x;
        y = value.y;
        z = value.z;
    }
};

class kellyslater_controller {
public:
    void StartGrind(const vector3d direction);
};

void kellyslater_controller::StartGrind(const vector3d direction) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E478)
// 0x0021E478 GetCurrentTrick__22kellyslater_controller
int kellyslater_controller::GetCurrentTrick()
{
    if (super_state == SUPER_STATE_IN_TUBE)
    {
        if (state == STATE_TUBE_RAILGRAB)
            return TRICK_TUBE_RAIL_GRAB;
        if (tube_trick != -1)
            return tube_trick;
        return last_tube_trick;
    }
    return currentTrick;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E448)
// 0x0021E448 StartCelebration__22kellyslater_controller
class kellyslater_controller { char padding[0x30]; int state; char padding_to_super[0x4]; int super_state; public: void StartCelebration(); };
void kellyslater_controller::StartCelebration() { super_state = 8; state = 90; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E460)
// 0x0021E460 StartDisappointment__22kellyslater_controller
class kellyslater_controller { char padding[0x30]; int state; char padding_to_super[0x4]; int super_state; public: void StartDisappointment(); };
void kellyslater_controller::StartDisappointment() { super_state = 8; state = 91; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00224F20)
// 0x00224F20 __12BalanceMeter
class BalanceMeter { char padding[0x14]; int player_num; public: BalanceMeter(); };
BalanceMeter::BalanceMeter() { player_num = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D308)
// 0x0020D308 ClearTricks__22kellyslater_controller
class kellyslater_controller { char padding0[0x16b8]; bool bSpecialTrick; char padding1[0x238]; int completedTrick; int newTrick; int currentTrick; char padding2[0x10]; bool trick_queued; public: void ClearTricks(); };
void kellyslater_controller::ClearTricks() { int value = -1; __asm__ volatile("" : : "r"(value)); bSpecialTrick = false; __asm__ volatile("" : : : "memory"); newTrick = value; __asm__ volatile("" : : : "memory"); trick_queued = false; __asm__ volatile("" : : : "memory"); currentTrick = value; __asm__ volatile("" : : : "memory"); completedTrick = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00223958)
// 0x00223958 SetTubeTrick__22kellyslater_controlleriii
class kellyslater_controller { char padding0[0x1a6c]; int tube_trick; int tube_anim; char padding1[0x10]; int tube_board_anim; int last_tube_trick; char padding2[0xc]; float current_trick_time; char padding3[0x38]; bool left_stick_pressed; public: void SetTubeTrick(int trick, int anim, int board_anim); };
void kellyslater_controller::SetTubeTrick(int trick, int anim, int board_anim) { tube_trick = trick; tube_anim = anim; tube_board_anim = board_anim; last_tube_trick = -1; left_stick_pressed = false; KELLY_DECOMP_COMPILER_BARRIER(); current_trick_time = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020CFA0)
// 0x0020CFA0 CtrlEvent__22kellyslater_controlleri
enum device_id_t { DEVICE_NONE };
class input_mgr { public: float get_control_state(device_id_t device, int control) const; };
extern input_mgr *input_manager;
__asm__(".equ input_manager, 0x0046B7B0");
__asm__(".equ get_control_state__C9input_mgr11device_id_ti, 0x003441C8");
class kellyslater_controller { char padding[0x1b10]; device_id_t joystick_num; public: float CtrlEvent(int control); };
float kellyslater_controller::CtrlEvent(int control) { float result = input_manager->get_control_state(joystick_num, control); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020F570)
// 0x0020F570 set_player_num__22kellyslater_controlleri
class SpecialMeter { char storage[0x2c]; public: void Initialize(int player); };
__asm__(".equ Initialize__12SpecialMeteri, 0x00250CA0");
class kellyslater_controller { char padding[0x1648]; SpecialMeter specialMeter; int my_player_num; public: void set_player_num(int player); };
void kellyslater_controller::set_player_num(int player) { my_player_num = player; specialMeter.Initialize(player); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00224D78)
// 0x00224D78 IsAIPlayer__22kellyslater_controller
struct game { char padding[0xb4]; int num_ai_players; };
extern game *g_game_ptr;
__asm__(".equ g_game_ptr, 0x0046AC64");
class kellyslater_controller { char padding[0x1674]; int my_player_num; public: bool IsAIPlayer(); };
bool kellyslater_controller::IsAIPlayer() { return g_game_ptr->num_ai_players && my_player_num == 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00225240)
// 0x00225240 End__12BalanceMeter
class IGOFrontEnd;

extern "C" void TurnBalanceMeterOn(
    IGOFrontEnd *self,
    int player,
    bool vertical,
    bool enabled
) __asm__("TurnBalanceMeterOn__11IGOFrontEndibT2");
__asm__(".equ TurnBalanceMeterOn__11IGOFrontEndibT2, 0x0017CB68");

extern IGOFrontEnd *global_igo;
__asm__(".equ global_igo, 0x003E7728");

class BalanceMeter {
    char padding[0x10];
    bool vert_meter;
    int player_num;

public:
    void End();
};

void BalanceMeter::End() {
    TurnBalanceMeterOn(global_igo, player_num, vert_meter, false);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002138B8)
// 0x002138B8 TurnDegree__22kellyslater_controller
class kellyslater_controller {
    char padding[0x16A8];
    float stick;
    float degree;

public:
    float GetStick(int control);
    void TurnDegree();
};

__asm__(".equ GetStick__22kellyslater_controlleri, 0x0020D010");

void kellyslater_controller::TurnDegree()
{
    stick = GetStick(203);
    degree = __builtin_fabsf(1.0f * stick);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E408)
// 0x0021E408 SetTrickRegion__22kellyslater_controller11TRICKREGION
enum TRICKREGION { TREGION_FACE };
enum EVENT { EVT_TRICK_REGION_CHANGE = 3 };
class EventManager { public: void DispatchEvent(EVENT event, int player, int param = 0); };
extern EventManager g_eventManager;
asm(".equ g_eventManager, 0x0046DA20");
asm(".equ DispatchEvent__12EventManager5EVENTii, 0x00349AB0");
class kellyslater_controller {
    char padding_to_region[0xFC];
    TRICKREGION trickRegion;
    TRICKREGION prevTrickRegion;
    char padding_to_player[0x1570];
    int my_player_num;
public:
    void SetTrickRegion(const TRICKREGION r);
};
void kellyslater_controller::SetTrickRegion(const TRICKREGION r)
{
    prevTrickRegion = trickRegion;
    trickRegion = r;
    if (prevTrickRegion != trickRegion)
    {
        g_eventManager.DispatchEvent(EVT_TRICK_REGION_CHANGE, my_player_num);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
