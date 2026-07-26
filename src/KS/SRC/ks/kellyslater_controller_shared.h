#ifndef KELLY_DECOMP_KELLYSLATER_CONTROLLER_SHARED_H
#define KELLY_DECOMP_KELLYSLATER_CONTROLLER_SHARED_H

#include "KS/SRC/game_shared.h"
#include "KS/SRC/ks/trickdata.h"

enum {
    SUPER_STATE_FLYBY = 1,
    SUPER_STATE_IN_TUBE = 7,
    STATE_TUBE_RAILGRAB = 78,
    TRICK_TUBE_RAIL_GRAB = 20,
};

class ScoringManager {
    char data[0x550];

public:
    void AddTrick(int trick);
};

class SpecialMeter {
    char data[0x2C];
};

class camera;
class game_camera;

class kellyslater_controller {
    char data_to_state[0x30];
    int state;
    char data_to_super_state[4];
    int super_state;
    char data_to_score_manager[0x10BC];
    ScoringManager my_scoreManager;
    SpecialMeter specialMeter;
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
    game_camera* player_cam;
    char data_to_look_back_cam[0x10];
    camera* look_back_cam_ptr;

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
    int GetCurrentTrick();
    inline int get_super_state() const {
        return super_state;
    }
    void SetPlayerCamera(game_camera*);
    void end_secondary_cam();
};

extern const int ManualFlag;
extern int anim_num;
extern int anim_num_last;

__asm__(".equ anim_num, 0x00424B5C");
__asm__(".equ anim_num_last, 0x00424B60");
__asm__(".equ Anim__22kellyslater_controllerifbfT3, 0x00212660");
__asm__(".equ BoardAnim__22kellyslater_controllerifbf, 0x002128B0");

#endif
