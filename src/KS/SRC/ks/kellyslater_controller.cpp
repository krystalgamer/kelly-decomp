// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00224E40)
// 0x00224E40 IsDoingSomething__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_doing_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00213C68)
// 0x00213C68 Lip_Distance__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_lip_shared.h"

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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F6C8)
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/kellyslater_controller_shared.h"

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

// 0x0026F6C8 __tf22kellyslater_controller
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D250) || \
    defined(KELLY_DECOMP_FUNCTION_0020D2E8) || \
    defined(KELLY_DECOMP_FUNCTION_0020D2F8) || \
    defined(KELLY_DECOMP_FUNCTION_0020F570) || \
    defined(KELLY_DECOMP_FUNCTION_002138B0) || \
    defined(KELLY_DECOMP_FUNCTION_0021E448) || \
    defined(KELLY_DECOMP_FUNCTION_0021E460) || \
    defined(KELLY_DECOMP_FUNCTION_0021E478) || \
    defined(KELLY_DECOMP_FUNCTION_0021F6E0)
#include "KS/SRC/ks/kellyslater_controller_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D298)
// 0x0020D298 SetCompletedTrick__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller_shared.h"
__asm__(".equ AddTrick__14ScoringManageri, 0x00247558");
void kellyslater_controller::SetCompletedTrick(int trick) {
    if (trick != currentTrick) {
        my_scoreManager.AddTrick(trick);
        trick_complete = true;
        completedTrick = trick;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D200)
// 0x0020D200 SetNewTrick__22kellyslater_controlleri
#include "KS/SRC/ks/kellyslater_controller_shared.h"
__asm__(".equ GTrickList, 0x00427CA8");
__asm__(".equ ManualFlag, 0x004D31EC");
void kellyslater_controller::SetNewTrick(int trick) {
    if (trick != currentTrick) {
        newTrick = trick;
        trick_queued = true;
        manual = GTrickList[trick].flags & ManualFlag;
    }
}
#endif

#include "decomp_annotations.h"

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
void kellyslater_controller::SetCurrentTrick() {
    currentTrick = newTrick;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020D2F8)
// 0x0020D2F8 ResetTricks__22kellyslater_controller
void kellyslater_controller::ResetTricks() { completedTrick = -1; currentTrick = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002138B0)
// 0x002138B0 StartGrind__22kellyslater_controllerG8vector3d
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

#if defined(KELLY_DECOMP_FUNCTION_0021F6E0)
asm(".equ g_game_ptr, 0x0046AC64");
asm(".equ SetPlayerCamera__22kellyslater_controllerP11game_camera, 0x002125B0");

// 0x0021F6E0 end_secondary_cam__22kellyslater_controller
void kellyslater_controller::end_secondary_cam()
{
    camera* secondary_cam = look_back_cam_ptr;
    if (g_game_ptr->get_player_camera(my_player_num) == secondary_cam)
    {
        SetPlayerCamera(player_cam);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E448)
// 0x0021E448 StartCelebration__22kellyslater_controller
void kellyslater_controller::StartCelebration() { super_state = 8; state = 90; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021E460)
// 0x0021E460 StartDisappointment__22kellyslater_controller
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
__asm__(".equ Initialize__12SpecialMeteri, 0x00250CA0");
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

#if defined(KELLY_DECOMP_FUNCTION_0020BD78)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_00223978)
// 0x00223978 Z_Within_Tube__22kellyslater_controller
struct vector3d {
    float x, y, z;
    vector3d(const vector3d &other) : x(other.x), y(other.y), z(other.z) {}
};
extern "C" vector3d *get_marker(int) __asm__("WAVE_GetMarker__F14WaveMarkerEnum");
__asm__(".equ WAVE_GetMarker__F14WaveMarkerEnum,0x0037D7E8");
struct absolute_po { char padding[56]; float z; };
struct board { char padding[80]; absolute_po *absolute; };
class kellyslater_controller {
    char padding[3656];
    board *my_board;
public:
    bool Z_Within_Tube();
};
bool kellyslater_controller::Z_Within_Tube()
{
    vector3d tube_wall_point = *get_marker(40);
    return my_board->absolute->z >= tube_wall_point.z;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0021F670)
// 0x0021F670 start_secondary_cam__22kellyslater_controllerP6camera
struct camera;struct controller_layout{char p0[48];int state;char p1[4];int super_state;char p2[6924];camera*look_back_cam_ptr;char p3[44];camera*photo_cam_ptr;};extern "C" void set_camera(controller_layout*,camera*) __asm__("SetPlayerCamera__22kellyslater_controllerP11game_camera");__asm__(".equ SetPlayerCamera__22kellyslater_controllerP11game_camera,0x002125B0");extern "C" void start_secondary(controller_layout*self,camera*cur) __asm__("start_secondary_cam__22kellyslater_controllerP6camera");void start_secondary(controller_layout*self,camera*cur){if(self->state==7||self->super_state==6||self->super_state==3||self->super_state==8||self->super_state==1||cur==self->photo_cam_ptr)return;camera*secondary=self->look_back_cam_ptr;if(cur!=secondary)set_camera(self,secondary);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002238E0)
// 0x002238E0 EndTube__22kellyslater_controller
class BalanceMeter{float current_balance,balance_acc,total_balance_time,time_to_full_acc;bool vert_meter;int player_num;public:void End();};
struct ForceControl{float scalar;void SetForceScalar(float value){scalar=value;}};
struct SurfBoardObjectClass{void*vtable;float props_forwardForce;char pad0[16];ForceControl forward;char pad1[2476];int state;void MoveForward(float degree=1.0f){forward.SetForceScalar(props_forwardForce*degree);}};
class kellyslater_controller{char base[20];public:BalanceMeter tube_meter;void*my_trail;private:int state,last_state,super_state,last_super_state;char pad0[824];SurfBoardObjectClass my_board_controller;char pad1[3024];bool bDoingTrick;public:void set_state(int n){last_state=state;state=n;}void set_super_state(int n){last_super_state=super_state;super_state=n;}void EndTube();};
extern bool ks_fx_spit_going_on();__asm__(".equ End__12BalanceMeter,0x00225240");__asm__(".equ ks_fx_spit_going_on__Fv,0x0036B600");
void kellyslater_controller::EndTube(){my_board_controller.state=0;set_state(74);set_super_state(2);tube_meter.End();if(ks_fx_spit_going_on())my_board_controller.MoveForward(0.09f*2);bDoingTrick=false;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002123E0)
// 0x002123E0 CalculateStats__22kellyslater_controller
struct turn_data{float data[4];};struct Controller{char pad[260];turn_data carve,hardCarve,grab,hardGrab,slide,hardSlide;void CalcTurnStats(turn_data*,int)__asm__("CalcTurnStats__22kellyslater_controllerP9turn_datai");};__asm__(".equ CalcTurnStats__22kellyslater_controllerP9turn_datai,0x00211FC0");extern "C" void calculate(Controller*self)__asm__("CalculateStats__22kellyslater_controller");void calculate(Controller*self){self->CalcTurnStats(&self->carve,0);self->CalcTurnStats(&self->hardCarve,3);self->CalcTurnStats(&self->grab,1);self->CalcTurnStats(&self->hardGrab,4);self->CalcTurnStats(&self->slide,2);self->CalcTurnStats(&self->hardSlide,5);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00224CF0)
// 0x00224CF0 SetConglomTexture__22kellyslater_controllerP6entityi
struct entity;struct link_interface{char pad[12];entity*first_child;entity*next_sibling;};struct entity{char pad0[104];link_interface*link;char pad1[44];int texture_frame;};struct kellyslater_controller;extern "C" void recurse(kellyslater_controller*,entity*,int)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x00224CF0");struct kellyslater_controller{void SetConglomTexture(entity*,int)__asm__("SetConglomTexture__22kellyslater_controllerP6entityi");};void kellyslater_controller::SetConglomTexture(entity*c,int b){if(!c)return;if(c->link){entity*c1=c->link->first_child;while(c1){recurse(this,c1,b);c1=c1->link->next_sibling;}c->texture_frame=b;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00211FC0)
// 0x00211FC0 CalcTurnStats__22kellyslater_controllerP9turn_datai
class turn_data{public:float TurnVel,BankAccel,BankVel,Bank;};class kellyslater_controller{char p[556];float turnRatings[7][4];float worstTurns[7][4];float bestTurns[7][4];public:void CalcTurnStats(turn_data*,int);};void kellyslater_controller::CalcTurnStats(turn_data*td,int heading){float worst,best,rating;worst=worstTurns[heading][3];best=bestTurns[heading][3];rating=turnRatings[heading][3];td->Bank=worst+(rating*(best-worst));worst=worstTurns[heading][2];best=bestTurns[heading][2];rating=turnRatings[heading][2];td->BankVel=worst+(rating*(best-worst));worst=worstTurns[heading][1];best=bestTurns[heading][1];rating=turnRatings[heading][1];td->BankAccel=worst+(rating*(best-worst));worst=worstTurns[heading][0];best=bestTurns[heading][0];rating=turnRatings[heading][0];td->TurnVel=worst+(rating*(best-worst));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00224DA0)
// 0x00224DA0 IsTubeHandInWater__22kellyslater_controller
struct Game{char p[552];int beach_id;};struct BeachData{char p[208];int bdir;char tail[320];};extern Game*g_game_ptr;extern BeachData BeachDataArray[];asm(".equ g_game_ptr,0x0046AC64");asm(".equ BeachDataArray,0x0043C198");class kellyslater_controller{char p0[56];int super_state;char p1[424];int goofy;char p2[6276];int tube_trick;char p3[24];int last_tube_trick;public:int IsTubeHandInWater();};int kellyslater_controller::IsTubeHandInWater(){if(super_state!=7)return 0;int current_trick=last_tube_trick;if(last_tube_trick==-1)current_trick=tube_trick;if(current_trick==69){if(goofy)return 1;else return 2;}if(current_trick==71){if(BeachDataArray[g_game_ptr->beach_id].bdir)return 2;else return 1;}if(current_trick==70||current_trick==73)return 3;return 0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00211F18)
// 0x00211F18 SetTurnStat__22kellyslater_controlleriiffff
class kellyslater_controller{char padding[556];float turnRatings[7][4];float worstTurns[7][4];float bestTurns[7][4];public:void SetTurnStat(int,int,float,float,float,float);};void kellyslater_controller::SetTurnStat(int table,int heading,float turnVel,float bankAccel,float bankVel,float bank){switch(table){case 0:turnRatings[heading][3]=bank;turnRatings[heading][2]=bankVel;turnRatings[heading][1]=bankAccel;turnRatings[heading][0]=turnVel;break;case 1:worstTurns[heading][3]=bank;worstTurns[heading][2]=bankVel;worstTurns[heading][1]=bankAccel;worstTurns[heading][0]=turnVel;break;case 2:bestTurns[heading][3]=bank;bestTurns[heading][2]=bankVel;bestTurns[heading][1]=bankAccel;bestTurns[heading][0]=turnVel;break;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00211488)
// 0x00211488 reset_state__22kellyslater_controller
class kellyslater_controller;extern "C" void anim_call(kellyslater_controller*,int,float,bool,float,bool)__asm__("Anim__22kellyslater_controllerifbfT3");class kellyslater_controller{char pad0[12];void*owner;char pad1[32];int state;int last_state;int super_state;int last_super_state;char pad2[3424];int wiped_out;char pad3[168];int reset_anim;public:void reset_state();void BoardAnim(int,float,bool,float);};asm(".equ Anim__22kellyslater_controllerifbfT3,0x00212660");asm(".equ BoardAnim__22kellyslater_controllerifbf,0x002128B0");void kellyslater_controller::reset_state(){last_state=0;if(reset_anim&&owner){anim_call(this,0,0.0f,false,0.0f,false);BoardAnim(0,0.0f,false,0.0f);}if(state==4||state==5)return;last_super_state=0;super_state=4;if(wiped_out)state=4;else state=5;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002125B0)
// 0x002125B0 SetPlayerCamera__22kellyslater_controllerP11game_camera
struct camera_vtable{char padding[1584];short adjustment;short reserved;void(*init)(void*);};struct game_camera{char pad[8];camera_vtable*vtable;};struct camera{};struct game{void set_player_camera(int,camera*);};extern "C" void underwater_reset()__asm__("UNDERWATER_CameraReset__Fv");extern game*g_game_ptr;asm(".equ UNDERWATER_CameraReset__Fv,0x0036D6F8");asm(".equ set_player_camera__4gameiP6camera,0x00283468");asm(".equ g_game_ptr,0x0046AC64");class kellyslater_controller{char pad0[5748];int my_player_num;char pad1[1212];game_camera*player_cam;game_camera*beach_cam_ptr;char pad2[8];game_camera*ksdebug_cam_ptr;char pad3[8];game_camera*shoulder_cam_ptr;char pad4[16];game_camera*follow_cam_ptr;game_camera*follow_close_cam_ptr;char pad5[8];game_camera*fps_cam_ptr;public:void SetPlayerCamera(game_camera*);};inline void init_camera(game_camera*c){camera_vtable*v=c->vtable;v->init((char*)c+v->adjustment);}void kellyslater_controller::SetPlayerCamera(game_camera*cam){if(!cam)return;underwater_reset();if(cam==beach_cam_ptr||cam==follow_close_cam_ptr||cam==follow_cam_ptr||cam==shoulder_cam_ptr||cam==ksdebug_cam_ptr||cam==fps_cam_ptr){player_cam=cam;init_camera(player_cam);}g_game_ptr->set_player_camera(my_player_num,(camera*)cam);asm volatile("");}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0020C740)
// 0x0020C740 debug_mode_play_anim__22kellyslater_controller
#include "KS/SRC/ks/kellyslater_controller_shared.h"

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
#endif
