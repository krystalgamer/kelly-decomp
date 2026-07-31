#ifndef _KELLYSLATER_CONTROLLER_H_
#define _KELLYSLATER_CONTROLLER_H_

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/game.h"
#include "KS/SRC/ks/trickdata.h"

enum {
    SUPER_STATE_FLYBY = 1,
    SUPER_STATE_IN_TUBE = 7,
    STATE_TUBE_RAILGRAB = 78,
    TRICK_TUBE_RAIL_GRAB = 20
};

struct ScoringManagerStorage {
    char data[0x550];
};

struct SpecialMeterStorage {
    char data[0x2C];
};

class camera;
class entity;
class game_camera;
class turn_data;

class kellyslater_controller {
    // Known members retain their released names and order. The remaining
    // intervals cover source fields whose dependent declarations are not yet
    // canonicalized.
    char data_to_state[0x30];
    int state;
    char data_to_super_state[4];
    int super_state;
    char data_to_score_manager[0x10BC];
    ScoringManagerStorage my_scoreManager;
    SpecialMeterStorage specialMeter;
    int my_player_num;
    char data_to_current_trick[0x27C];
    int currentTrick;
    int completedTrick;
    int newTrick;
    int airIKtrick;
    bool trick_complete;
    bool manual;
    bool current_trick_type;
    bool trick_queued;
    bool bDoingTrick;
    char data_to_tube_trick[0x154];
    int tube_trick;
    char data_to_last_tube_trick[0x18];
    int last_tube_trick;
    char data_to_player_cam[0xA8];
    game_camera *player_cam;
    char data_to_look_back_cam[0x10];
    camera *look_back_cam_ptr;

public:
    void Anim(
        int animation,
        float blend_time,
        bool loop = true,
        float start_time = 0.0f,
        bool reverse = false
    ) __asm__("Anim__22kellyslater_controllerifbfT3");
    void BoardAnim(
        int animation,
        float blend_time,
        bool loop = true,
        float start_time = 0.0f
    );
    void debug_mode_play_anim();
    void SetCompletedTrick();
    void SetCompletedTrick(int trick);
    void SetNewTrick(int trick);
    void SetCurrentTrick();
    void ResetTricks();
    void ClearTricks();
    void StartGrind(const vector3d direction);
    void StartCelebration();
    void StartDisappointment();
    void SetTubeTrick(int trick, int anim, int board_anim);
    void set_player_num(int player);
    int GetCurrentTrick();
    int get_super_state() const { return super_state; }
    float CtrlEvent(int control);
    bool IsAIPlayer();
    void TurnDegree();
    bool Z_Within_Tube();
    void EndTube();
    void CalculateStats();
    void SetConglomTexture(entity *conglomerate, int texture);
    void CalcTurnStats(turn_data *data, int heading);
    int IsTubeHandInWater();
    void SetTurnStat(
        int table,
        int heading,
        float turn_velocity,
        float bank_acceleration,
        float bank_velocity,
        float bank);
    void reset_state();
    void SetPlayerCamera(game_camera *camera);
    void start_secondary_cam(camera *current_camera);
    void end_secondary_cam();
    void ResetPierEntities();
    void OnNewWave();
    bool IsDoingSomething();
    float Lip_Distance();
};

extern const int ManualFlag;
extern int anim_num;
extern int anim_num_last;

__asm__(".equ anim_num, 0x00424B5C");
__asm__(".equ anim_num_last, 0x00424B60");
__asm__(".equ Anim__22kellyslater_controllerifbfT3, 0x00212660");
__asm__(".equ BoardAnim__22kellyslater_controllerifbf, 0x002128B0");

#endif
