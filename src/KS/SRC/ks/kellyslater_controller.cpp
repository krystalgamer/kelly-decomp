// Matching decompilation blocks selected by generated build shims.

// 0x00224E40 IsDoingSomething__22kellyslater_controller
enum game_mode_t {
    GAME_MODE_CAREER,
    GAME_MODE_FREESURF_INFINITE,
    GAME_MODE_FREESURF_HIGHSCORE,
    GAME_MODE_FREESURF_ICON,
    GAME_MODE_PRACTICE,
    GAME_MODE_TIME_ATTACK,
    GAME_MODE_METER_ATTACK,
    GAME_MODE_SEA_HORSE,
    GAME_MODE_HEAD_TO_HEAD,
    GAME_MODE_PUSH
};

enum {
    SUPER_STATE_WIPEOUT = 3,
    SUPER_STATE_CPU_CONTROLLED = 8
};

class game {
    char data_before_game_mode[0x74];
    game_mode_t game_mode;

public:
    inline game_mode_t get_game_mode() const { return game_mode; }
};

class board_controller {
    char data_before_in_air[0x420];
    int in_air;

public:
    inline bool InAir() const { return in_air; }
};

class SpecialMeter {
public:
    bool CanRegionLink() const;
};

class kellyslater_controller {
    char data_before_super_state[0x38];
    int super_state;
    char data_before_board_controller[4];
    board_controller my_board_controller;
    char data_before_special_meter[0x1648 - 0x464];
    SpecialMeter special_meter;
    char data_before_doing_special[0x16b8 - 0x1649];
    int doing_special_trick;
    char data_before_did_celebration[0x1b7c - 0x16bc];
    int did_celebration;

public:
    bool IsDoingSomething();
    inline SpecialMeter *get_special_meter() { return &special_meter; }
    inline bool IsDoingSpecialTrick() const { return doing_special_trick; }
};

extern game *g_game_ptr;

__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ CanRegionLink__C12SpecialMeter, 0x002510F0");

bool kellyslater_controller::IsDoingSomething()
{
    if ((g_game_ptr->get_game_mode() == GAME_MODE_PUSH) ||
        (g_game_ptr->get_game_mode() == GAME_MODE_HEAD_TO_HEAD))
    {
        return my_board_controller.InAir() ||
            super_state == SUPER_STATE_WIPEOUT ||
            (super_state == SUPER_STATE_CPU_CONTROLLED && !did_celebration);
    }
    else
    {
        return my_board_controller.InAir() ||
            get_special_meter()->CanRegionLink() ||
            IsDoingSpecialTrick() ||
            super_state == SUPER_STATE_WIPEOUT ||
            (super_state == SUPER_STATE_CPU_CONTROLLED && !did_celebration);
    }
}

// 0x00213C68 Lip_Distance__22kellyslater_controller
#include "KS/SRC/game.h"
#include "KS/SRC/algebra.h"

enum WaveMarkerEnum {
    WAVE_MarkerLipMark6 = 17
};

class board_controller {
    vector3d float_position;

public:
    inline vector3d GetFloatPos() const {
        return float_position;
    }
};

class surf_board {
    char data_before_absolute_po[0x50];
    void *absolute_po;

public:
    inline const vector3d &get_abs_position() const {
        return *(const vector3d *)((const char *)absolute_po + 0x30);
    }
};

class kellyslater_controller {
    char data_before_board_controller[0xE20];
    board_controller my_board_controller;
    char data_before_board[0x1C];
    surf_board *my_board;

public:
    float Lip_Distance();
};

const vector3d *WAVE_GetMarker(WaveMarkerEnum marker);
extern float mav_fudge;

__asm__(".equ WAVE_GetMarker__F14WaveMarkerEnum, 0x0037D7E8");
__asm__(".equ mav_fudge, 0x00424BC0");

template<class T>
inline const T &maximum(const T &left, const T &right)
{
    return left < right ? right : left;
}

float kellyslater_controller::Lip_Distance()
{
    vector3d float_pos = my_board_controller.GetFloatPos();
    vector3d max_pos = *WAVE_GetMarker(WAVE_MarkerLipMark6);
    float total_depth = float_pos.z - max_pos.z;

    if (g_game_ptr->get_beach_id() == 6)
        total_depth *= mav_fudge;

    float distance = maximum(
        0.0f,
        float_pos.z - my_board->get_abs_position().z);
    distance = distance / total_depth;

    return distance;
}

// 0x0026F6C8 __tf22kellyslater_controller
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/kellyslater_controller.h"

extern "C" void **kellyslater_controller_base_rtti()
    __asm__("__tf17entity_controller");
extern "C" void *kellyslater_controller_type[]
    __asm__("__ti22kellyslater_controller");
extern "C" const char kellyslater_controller_name[];
extern "C" void *kellyslater_controller_base_type[]
    __asm__("__ti17entity_controller");

__asm__(".equ __tf17entity_controller, 0x002B89D0");
__asm__(".equ __ti22kellyslater_controller, 0x005A3B90");
__asm__(".equ kellyslater_controller_name, 0x004E4F10");
__asm__(".equ __ti17entity_controller, 0x005A3D50");

extern "C" void **kellyslater_controller_rtti()
    __asm__("__tf22kellyslater_controller");
void **kellyslater_controller_rtti()
{
    if (!kellyslater_controller_type[0]) {
        kellyslater_controller_base_rtti();
        __rtti_si(
            kellyslater_controller_type,
            kellyslater_controller_name,
            kellyslater_controller_base_type
        );
    }
    return kellyslater_controller_type;
}

// 0x0020D298 SetCompletedTrick__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller.h"
__asm__(".equ AddTrick__14ScoringManageri, 0x00247558");
extern "C" void add_trick(void *manager, int trick)
    __asm__("AddTrick__14ScoringManageri");
void kellyslater_controller::SetCompletedTrick(int trick) {
    if (trick != currentTrick) {
        add_trick(&my_scoreManager, trick);
        trick_complete = true;
        completedTrick = trick;
    }
}

// 0x0020D200 SetNewTrick__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller.h"
__asm__(".equ GTrickList, 0x00427CA8");
__asm__(".equ ManualFlag, 0x004D31EC");
void kellyslater_controller::SetNewTrick(int trick) {
    if (trick != currentTrick) {
        newTrick = trick;
        trick_queued = true;
        manual = GTrickList[trick].flags & ManualFlag;
    }
}

#include "decomp_annotations.h"

// 0x0020D250 SetCompletedTrick__22kellyslater_controller
asm(".equ AddTrick__14ScoringManageri, 0x00247558");

#include "KS/SRC/ks/kellyslater_controller.h"
extern "C" void add_trick(void *manager, int trick)
    __asm__("AddTrick__14ScoringManageri");
void kellyslater_controller::SetCompletedTrick()
{
    if (completedTrick != currentTrick)
    {
        add_trick(&my_scoreManager, currentTrick);
        trick_complete = true;
        completedTrick = currentTrick;
    }
}

// 0x0020D2E8 SetCurrentTrick__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::SetCurrentTrick() {
    currentTrick = newTrick;
}

// 0x0020D2F8 ResetTricks__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::ResetTricks() { completedTrick = -1; currentTrick = -1; }

// 0x002138B0 StartGrind__22kellyslater_controllerG8vector3d
#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::StartGrind(const vector3d direction) {
}

// 0x0021E478 GetCurrentTrick__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"
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

// 0x0021F6E0 end_secondary_cam__22kellyslater_controller
asm(".equ g_game_ptr, 0x0046AC64");
asm(".equ SetPlayerCamera__22kellyslater_controllerP11game_camera, 0x002125B0");

#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::end_secondary_cam()
{
    camera* secondary_cam = look_back_cam_ptr;
    if (g_game_ptr->get_player_camera(my_player_num) == secondary_cam)
    {
        SetPlayerCamera(player_cam);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x0021E448 StartCelebration__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::StartCelebration() { super_state = 8; state = 90; }

// 0x0021E460 StartDisappointment__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"
void kellyslater_controller::StartDisappointment() { super_state = 8; state = 91; }

// 0x00224F20 __12BalanceMeter
#include "KS/SRC/ks/kellyslater_controller.h"

BalanceMeter::BalanceMeter() { player_num = -1; }

// 0x0020CFA0 CtrlEvent__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller.h"

float kellyslater_controller::CtrlEvent(int control) { input_mgr *manager = input_mgr::inst(); return manager->get_control_state(joystick_num, control); }

// 0x0020F570 set_player_num__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller.h"
#include "KS/SRC/ks/kellyslater_controller.h"

void initialize_special_meter(SpecialMeter *meter, int player)
    __asm__("Initialize__12SpecialMeteri");
__asm__(".equ Initialize__12SpecialMeteri, 0x00250CA0");
void kellyslater_controller::set_player_num(int player) {
    my_player_num = player;
    void (*initialize)(SpecialMeter *, int) = initialize_special_meter;
    initialize(&specialMeter, player);
}

// 0x00224D78 IsAIPlayer__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"

bool kellyslater_controller::IsAIPlayer() { return g_game_ptr->get_num_ai_players() && my_player_num == 1; }

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

// 0x002138B8 TurnDegree__22kellyslater_controller
struct controller_turn_degree_layout {
    char padding[0x16A8];
    float stick;
    float degree;
};

extern "C" float get_stick(void *, int)
    __asm__("GetStick__22kellyslater_controlleri");
extern "C" void turn_degree(controller_turn_degree_layout *self)
    __asm__("TurnDegree__22kellyslater_controller");
__asm__(".equ GetStick__22kellyslater_controlleri, 0x0020D010");

void turn_degree(controller_turn_degree_layout *self)
{
    self->stick = get_stick(self, 203);
    self->degree = __builtin_fabsf(1.0f * self->stick);
}

// 0x0021E408 SetTrickRegion__22kellyslater_controller11TRICKREGION
enum TRICKREGION { TREGION_FACE };
enum EVENT { EVT_TRICK_REGION_CHANGE = 3 };
class EventManager { public: void DispatchEvent(EVENT event, int player, int param = 0); };
extern EventManager g_eventManager;
asm(".equ g_eventManager, 0x0046DA20");
asm(".equ DispatchEvent__12EventManager5EVENTii, 0x00349AB0");
struct controller_trick_region_layout {
    char padding_to_region[0xFC];
    TRICKREGION trickRegion;
    TRICKREGION prevTrickRegion;
    char padding_to_player[0x1570];
    int my_player_num;
};
extern "C" void set_trick_region(
    controller_trick_region_layout *self,
    const TRICKREGION region
) __asm__("SetTrickRegion__22kellyslater_controller11TRICKREGION");
void set_trick_region(
    controller_trick_region_layout *self,
    const TRICKREGION region
)
{
    self->prevTrickRegion = self->trickRegion;
    self->trickRegion = region;
    if (self->prevTrickRegion != self->trickRegion)
    {
        g_eventManager.DispatchEvent(
            EVT_TRICK_REGION_CHANGE,
            self->my_player_num);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x0020BD78 __15spin_controller
class spin_controller {
    void *my_board_controller;
    char padding[0x10];
    float spin_time[4];
    char spin_padding[8];
    int num_spins;
    char state_padding[0x10];
    int activated;

public:
    spin_controller();
};

spin_controller::spin_controller()
{
    spin_time[0] = 0.4f;
    spin_time[1] = 0.96f;
    spin_time[2] = 1.44f;
    spin_time[3] = 1.92f;
    activated = false;
    num_spins = 0;
    my_board_controller = 0;
}

// 0x00223978 Z_Within_Tube__22kellyslater_controller
struct vector3d {
    float x, y, z;
    vector3d(const vector3d &other) : x(other.x), y(other.y), z(other.z) {}
};
extern "C" vector3d *get_marker(int) __asm__("WAVE_GetMarker__F14WaveMarkerEnum");
__asm__(".equ WAVE_GetMarker__F14WaveMarkerEnum,0x0037D7E8");
struct absolute_po { char padding[56]; float z; };
struct board { char padding[80]; absolute_po *absolute; };
struct controller_tube_position_layout {
    char padding[3656];
    board *my_board;
};
extern "C" bool z_within_tube(controller_tube_position_layout *self)
    __asm__("Z_Within_Tube__22kellyslater_controller");
bool z_within_tube(controller_tube_position_layout *self)
{
    vector3d tube_wall_point = *get_marker(40);
    return self->my_board->absolute->z >= tube_wall_point.z;
}

// 0x0021F670 start_secondary_cam__22kellyslater_controllerP6camera
struct camera;struct controller_layout{char p0[48];int state;char p1[4];int super_state;char p2[6924];camera*look_back_cam_ptr;char p3[44];camera*photo_cam_ptr;};extern "C" void set_camera(controller_layout*,camera*) __asm__("SetPlayerCamera__22kellyslater_controllerP11game_camera");__asm__(".equ SetPlayerCamera__22kellyslater_controllerP11game_camera,0x002125B0");extern "C" void start_secondary(controller_layout*self,camera*cur) __asm__("start_secondary_cam__22kellyslater_controllerP6camera");void start_secondary(controller_layout*self,camera*cur){if(self->state==7||self->super_state==6||self->super_state==3||self->super_state==8||self->super_state==1||cur==self->photo_cam_ptr)return;camera*secondary=self->look_back_cam_ptr;if(cur!=secondary)set_camera(self,secondary);}

// 0x002238E0 EndTube__22kellyslater_controller
class BalanceMeter{float current_balance,balance_acc,total_balance_time,time_to_full_acc;bool vert_meter;int player_num;public:void End();};
struct ForceControl{float scalar;void SetForceScalar(float value){scalar=value;}};
struct SurfBoardObjectClass{void*vtable;float props_forwardForce;char pad0[16];ForceControl forward;char pad1[2476];int state;void MoveForward(float degree=1.0f){forward.SetForceScalar(props_forwardForce*degree);}};
struct controller_end_tube_layout {
    char base[20];
    BalanceMeter tube_meter;
    void *my_trail;
    int state;
    int last_state;
    int super_state;
    int last_super_state;
    char pad0[824];
    SurfBoardObjectClass my_board_controller;
    char pad1[3024];
    bool bDoingTrick;

    void set_state(int value) {
        last_state = state;
        state = value;
    }
    void set_super_state(int value) {
        last_super_state = super_state;
        super_state = value;
    }
};
extern bool ks_fx_spit_going_on();__asm__(".equ End__12BalanceMeter,0x00225240");__asm__(".equ ks_fx_spit_going_on__Fv,0x0036B600");
extern "C" void end_tube(controller_end_tube_layout *self)
    __asm__("EndTube__22kellyslater_controller");
void end_tube(controller_end_tube_layout *self) {
    self->my_board_controller.state = 0;
    self->set_state(74);
    self->set_super_state(2);
    self->tube_meter.End();
    if (ks_fx_spit_going_on())
        self->my_board_controller.MoveForward(0.09f * 2);
    self->bDoingTrick = false;
}

// 0x002123E0 CalculateStats__22kellyslater_controller
struct turn_data{float data[4];};struct Controller{char pad[260];turn_data carve,hardCarve,grab,hardGrab,slide,hardSlide;void CalcTurnStats(turn_data*,int)__asm__("CalcTurnStats__22kellyslater_controllerP9turn_datai");};__asm__(".equ CalcTurnStats__22kellyslater_controllerP9turn_datai,0x00211FC0");extern "C" void calculate(Controller*self)__asm__("CalculateStats__22kellyslater_controller");void calculate(Controller*self){self->CalcTurnStats(&self->carve,0);self->CalcTurnStats(&self->hardCarve,3);self->CalcTurnStats(&self->grab,1);self->CalcTurnStats(&self->hardGrab,4);self->CalcTurnStats(&self->slide,2);self->CalcTurnStats(&self->hardSlide,5);KELLY_DECOMP_COMPILER_BARRIER();}

// 0x00224CF0 SetConglomTexture__22kellyslater_controllerP6entityi
struct entity;
struct link_interface {
    char pad[12];
    entity *first_child;
    entity *next_sibling;
};
struct entity {
    char pad0[104];
    link_interface *link;
    char pad1[44];
    int texture_frame;
};
extern "C" void recurse(void *, entity *, int) __asm__("recurse_alias");
extern "C" void set_conglom_texture(void *self, entity *conglomerate, int texture)
    __asm__("SetConglomTexture__22kellyslater_controllerP6entityi");
__asm__(".equ recurse_alias,0x00224CF0");
void set_conglom_texture(void *self, entity *conglomerate, int texture) {
    if (!conglomerate)
        return;
    if (conglomerate->link) {
        entity *child = conglomerate->link->first_child;
        while (child) {
            recurse(self, child, texture);
            child = child->link->next_sibling;
        }
        conglomerate->texture_frame = texture;
    }
}

// 0x00211FC0 CalcTurnStats__22kellyslater_controllerP9turn_datai
class turn_data {
public:
    float TurnVel;
    float BankAccel;
    float BankVel;
    float Bank;
};
struct controller_turn_stats_layout {
    char padding[556];
    float turnRatings[7][4];
    float worstTurns[7][4];
    float bestTurns[7][4];
};
extern "C" void calc_turn_stats(
    controller_turn_stats_layout *self,
    turn_data *data,
    int heading
) __asm__("CalcTurnStats__22kellyslater_controllerP9turn_datai");
void calc_turn_stats(
    controller_turn_stats_layout *self,
    turn_data *data,
    int heading
) {
    float worst;
    float best;
    float rating;
    worst = self->worstTurns[heading][3];
    best = self->bestTurns[heading][3];
    rating = self->turnRatings[heading][3];
    data->Bank = worst + (rating * (best - worst));
    worst = self->worstTurns[heading][2];
    best = self->bestTurns[heading][2];
    rating = self->turnRatings[heading][2];
    data->BankVel = worst + (rating * (best - worst));
    worst = self->worstTurns[heading][1];
    best = self->bestTurns[heading][1];
    rating = self->turnRatings[heading][1];
    data->BankAccel = worst + (rating * (best - worst));
    worst = self->worstTurns[heading][0];
    best = self->bestTurns[heading][0];
    rating = self->turnRatings[heading][0];
    data->TurnVel = worst + (rating * (best - worst));
}

// 0x00224DA0 IsTubeHandInWater__22kellyslater_controller
struct Game { char padding[552]; int beach_id; };
struct BeachData { char padding[208]; int bdir; char tail[320]; };
struct controller_tube_hand_layout {
    char padding0[56];
    int super_state;
    char padding1[424];
    int goofy;
    char padding2[6276];
    int tube_trick;
    char padding3[24];
    int last_tube_trick;
};
extern Game *g_game_ptr;
extern BeachData BeachDataArray[];
extern "C" int is_tube_hand_in_water(controller_tube_hand_layout *self)
    __asm__("IsTubeHandInWater__22kellyslater_controller");
asm(".equ g_game_ptr,0x0046AC64");
asm(".equ BeachDataArray,0x0043C198");
int is_tube_hand_in_water(controller_tube_hand_layout *self) {
    if (self->super_state != 7)
        return 0;
    int current_trick = self->last_tube_trick;
    if (self->last_tube_trick == -1)
        current_trick = self->tube_trick;
    if (current_trick == 69) {
        if (self->goofy)
            return 1;
        else
            return 2;
    }
    if (current_trick == 71) {
        if (BeachDataArray[g_game_ptr->beach_id].bdir)
            return 2;
        else
            return 1;
    }
    if (current_trick == 70 || current_trick == 73)
        return 3;
    return 0;
}

// 0x00211F18 SetTurnStat__22kellyslater_controlleriiffff
struct controller_turn_stat_layout {
    char padding[556];
    float turnRatings[7][4];
    float worstTurns[7][4];
    float bestTurns[7][4];
};
extern "C" void set_turn_stat(
    controller_turn_stat_layout *self,
    int table,
    int heading,
    float turn_velocity,
    float bank_acceleration,
    float bank_velocity,
    float bank
) __asm__("SetTurnStat__22kellyslater_controlleriiffff");
void set_turn_stat(
    controller_turn_stat_layout *self,
    int table,
    int heading,
    float turn_velocity,
    float bank_acceleration,
    float bank_velocity,
    float bank
) {
    switch (table) {
    case 0:
        self->turnRatings[heading][3] = bank;
        self->turnRatings[heading][2] = bank_velocity;
        self->turnRatings[heading][1] = bank_acceleration;
        self->turnRatings[heading][0] = turn_velocity;
        break;
    case 1:
        self->worstTurns[heading][3] = bank;
        self->worstTurns[heading][2] = bank_velocity;
        self->worstTurns[heading][1] = bank_acceleration;
        self->worstTurns[heading][0] = turn_velocity;
        break;
    case 2:
        self->bestTurns[heading][3] = bank;
        self->bestTurns[heading][2] = bank_velocity;
        self->bestTurns[heading][1] = bank_acceleration;
        self->bestTurns[heading][0] = turn_velocity;
        break;
    }
}

// 0x00211488 reset_state__22kellyslater_controller
struct controller_reset_state_layout {
    char padding0[12];
    void *owner;
    char padding1[32];
    int state;
    int last_state;
    int super_state;
    int last_super_state;
    char padding2[3424];
    int wiped_out;
    char padding3[168];
    int reset_anim;
};
extern "C" void anim_call(
    void *, int, float, bool, float, bool
) __asm__("Anim__22kellyslater_controllerifbfT3");
extern "C" void board_anim_call(
    void *, int, float, bool, float
) __asm__("BoardAnim__22kellyslater_controllerifbf");
extern "C" void reset_controller_state(controller_reset_state_layout *self)
    __asm__("reset_state__22kellyslater_controller");
asm(".equ Anim__22kellyslater_controllerifbfT3,0x00212660");
asm(".equ BoardAnim__22kellyslater_controllerifbf,0x002128B0");
void reset_controller_state(controller_reset_state_layout *self) {
    self->last_state = 0;
    if (self->reset_anim && self->owner) {
        anim_call(self, 0, 0.0f, false, 0.0f, false);
        board_anim_call(self, 0, 0.0f, false, 0.0f);
    }
    if (self->state == 4 || self->state == 5)
        return;
    self->last_super_state = 0;
    self->super_state = 4;
    if (self->wiped_out)
        self->state = 4;
    else
        self->state = 5;
}

// 0x002125B0 SetPlayerCamera__22kellyslater_controllerP11game_camera
struct camera_vtable {
    char padding[1584];
    short adjustment;
    short reserved;
    void (*init)(void *);
};
struct game_camera { char padding[8]; camera_vtable *vtable; };
struct camera {};
struct game { void set_player_camera(int, camera *); };
struct controller_camera_layout {
    char padding0[5748];
    int my_player_num;
    char padding1[1212];
    game_camera *player_cam;
    game_camera *beach_cam_ptr;
    char padding2[8];
    game_camera *ksdebug_cam_ptr;
    char padding3[8];
    game_camera *shoulder_cam_ptr;
    char padding4[16];
    game_camera *follow_cam_ptr;
    game_camera *follow_close_cam_ptr;
    char padding5[8];
    game_camera *fps_cam_ptr;
};
extern "C" void underwater_reset() __asm__("UNDERWATER_CameraReset__Fv");
extern game *g_game_ptr;
extern "C" void set_player_camera(
    controller_camera_layout *self,
    game_camera *camera
) __asm__("SetPlayerCamera__22kellyslater_controllerP11game_camera");
asm(".equ UNDERWATER_CameraReset__Fv,0x0036D6F8");
asm(".equ set_player_camera__4gameiP6camera,0x00283468");
asm(".equ g_game_ptr,0x0046AC64");
inline void init_camera(game_camera *camera) {
    camera_vtable *vtable = camera->vtable;
    vtable->init((char *)camera + vtable->adjustment);
}
void set_player_camera(
    controller_camera_layout *self,
    game_camera *camera
) {
    if (!camera)
        return;
    underwater_reset();
    if (
        camera == self->beach_cam_ptr ||
        camera == self->follow_close_cam_ptr ||
        camera == self->follow_cam_ptr ||
        camera == self->shoulder_cam_ptr ||
        camera == self->ksdebug_cam_ptr ||
        camera == self->fps_cam_ptr
    ) {
        self->player_cam = camera;
        init_camera(self->player_cam);
    }
    g_game_ptr->set_player_camera(
        self->my_player_num,
        (struct camera *)camera);
    asm volatile("");
}

// 0x0020C740 debug_mode_play_anim__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller.h"

void kellyslater_controller::debug_mode_play_anim()
{
    if (anim_num != anim_num_last)
    {
        anim_num_last = anim_num;
        Anim(anim_num, 0.3f, true);
        if (anim_num >= 166 && anim_num <= 275)
        {
            int num = anim_num - 166;
            BoardAnim(num, 0.3f, true);
        }
        else if (anim_num >= 1 && anim_num <= 5)
        {
            int num = 1;
            BoardAnim(num, 0.3f, true);
        }
        else
            BoardAnim(0, 0.3f, true);
    }
    int dead;
    __asm__("" : "=r"(dead));
}

// Source implementation boundary.
// 0x0026F7A0 ResetPierEntities__22kellyslater_controller
class entity;
struct controller_pier_layout {
    char padding[0x1b00];
    entity *pier_entities[3];
    int num_pier_entities;
};
extern "C" void reset_pier_entities(controller_pier_layout *self)
    __asm__("ResetPierEntities__22kellyslater_controller");
void reset_pier_entities(controller_pier_layout *self) {
    int index = 2;
    entity **entry = &self->pier_entities[2];
loop:
    *entry = 0;
    --index;
    KELLY_DECOMP_COMPILER_BARRIER();
    KELLY_DECOMP_COMPILER_BARRIER();
    if (index >= 0) {
        --entry;
        goto loop;
    }
    --entry;
    self->num_pier_entities = 0;
}

// 0x0026F750 OnNewWave__22kellyslater_controller
class SurfBoardObjectClass {
public:
    void OnNewWave();
};

__asm__(".equ OnNewWave__20SurfBoardObjectClass, 0x001EE648");

struct controller_new_wave_layout {
    char padding[0x37c];
    SurfBoardObjectClass my_board_controller;
};

extern "C" void reset_controller(void *)
    __asm__("Reset__22kellyslater_controller");
extern "C" void controller_on_new_wave(controller_new_wave_layout *self)
    __asm__("OnNewWave__22kellyslater_controller");
__asm__(".equ Reset__22kellyslater_controller, 0x00211538");

void controller_on_new_wave(controller_new_wave_layout *self) {
    self->my_board_controller.OnNewWave();
    reset_controller(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
