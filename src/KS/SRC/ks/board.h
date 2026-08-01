#ifndef BOARD_H
#define BOARD_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/ks/physics.h"

class entity;
class kellyslater_controller;

enum BoardStateEnum {
    BOARD_NONE
};

class SurfBoardObjectClass {
    float props_forwardForce;
    PhysicsObjectClass *rb;
    char data_to_extents[0x1C];
    float x_extent;
    float y_extent;
    float z_extent;
    char data_to_max_lean_angle[0xA8];
    float maxLeanAngle;
    char data_to_float_jump[0x1C];
    bool float_jump;
    char data_to_state[0x8C8];
    int state;
    char data_to_current_lean_angle[0x8];
    float curLeanAngle;
    entity *my_board;
    char data_to_controller[0x4];
    kellyslater_controller *ksctrl;
    char data_to_backwards_time[0x74];
    float backwards_time;
    char data_to_max_wipeout_time[0x4];
    float max_wipeout_time;
    float standing_time;
    char data_to_turn_type[0x20];
    int turn_type;
    char data_to_float_speed[0x18];
    float float_speed;
    vector3d float_pos;
    char remaining_state[0x18];

public:
    SurfBoardObjectClass();
    virtual ~SurfBoardObjectClass();
    virtual int Terminate();
    virtual int Load(char *name);
    virtual int Update(float time_inc);
    virtual int Init();
    virtual void OnNewWave();

    inline kellyslater_controller *get_ks_controller() {
        return ksctrl;
    }

    bool DoingFaceTurn();
    void ResetTimers();
    void IncrementFloatSpeed();
    float GetLeanPercentage();
    void SetWipeoutDone();
    float CalculatePathPeakTime();
    bool CollideWithLip();
};

#endif
