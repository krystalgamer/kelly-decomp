#ifndef AI_CONTROLLER_H
#define AI_CONTROLLER_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/inputmgr.h"

class kellyslater_controller;

class AISurferController : public input_device {
public:
    AISurferController();
    virtual ~AISurferController();
    virtual void vibrate(float intensity);
    virtual void vibrate(
        int vibrator_flag,
        int vibrator_power,
        int vibrator_frequency,
        int vibrator_increment);
    virtual void stop_vibration();
    virtual bool is_vibrator_present() const;
    virtual bool is_connected() const;
    virtual void poll();
    virtual stringx get_name() const;
    virtual stringx get_name(int axis) const;
    virtual device_id_t get_id() const;
    virtual int get_axis_count() const;
    virtual axis_id_t get_axis_id(int axis) const;
    virtual rational_t get_axis_state(
        axis_id_t axis,
        int control_axis) const;
    virtual rational_t get_axis_old_state(
        axis_id_t axis,
        int control_axis) const;
    virtual rational_t get_axis_delta(
        axis_id_t axis,
        int control_axis) const;

private:
    enum AI_SURFER_STATE {
        STATE_STANDING,
        STATE_CHASE,
        STATE_DO_TRICK,
        STATE_AVOID_SURFER,
        STATE_BOUNCE_AROUND_WAVE,
        STATE_LAST_STATE
    };

    enum AI_SURFER_SUBSTATE {
        NO_SUBSTATE,
        TRICK_APPROACH,
        TRICK_LAUNCH,
        TRICK_DOING_TRICK,
        TRICK_LANDING,
        TRICK_DONE,
        STATE_LAST_SUBSTATE
    };

    vector3d target;
    vector3d toTube;
    vector3d right;
    vector3d velocity;
    vector3d dir;
    vector3d paddleDirVec;
    AI_SURFER_STATE myState;
    AI_SURFER_SUBSTATE mySubstate;
    float offdh;
    float diffAngle;
    float paddleAngle;
    float toTargetDistance;
    float lastToTargetDistance;
    float relativeVelocityToTarget;
    float lastRelativeVelocityToTarget;
    float toTubeDist;
    float last_toward_tube_velocity;
    float this_toward_tube_velocity;
    vector3d heading;
    float acel;
    float oldAcel;
    kellyslater_controller *ksctl;
    bool hitRegionPocket;
    float X;
    float Y;
    float XRight;
    float YRight;
    bool ButtonX;
    bool ButtonO;
    bool ButtonSq;
    bool ButtonTr;
    bool ButtonL1;
    bool ButtonL2;
    bool ButtonL3;
    bool ButtonR1;
    bool ButtonR2;
    bool ButtonR3;
    bool ButtonSelect;
    bool ButtonStart;
    float oldX;
    float oldY;
    float oldXRight;
    float oldYRight;
    bool oldButtonX;
    bool oldButtonO;
    bool oldButtonSq;
    bool oldButtonTr;
    bool oldButtonL1;
    bool oldButtonL2;
    bool oldButtonL3;
    bool oldButtonR1;
    bool oldButtonR2;
    bool oldButtonR3;
    bool oldButtonSelect;
    bool oldButtonStart;
    int curTrick;

    void checkCollisions();
    int downWaveSign();
    void setupStateVars();
    bool doStandUp();
    void moveToTarget();
    void clearButtons();
    bool doTrick();
    void pressButton(int which);
    void releaseButton(int which);
    void pressDir(int which, float amount);
    bool buttonStatus(int which);
};

#endif
