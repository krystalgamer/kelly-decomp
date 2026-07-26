#ifndef KELLY_DECOMP_AI_RTTI_SHARED_H
#define KELLY_DECOMP_AI_RTTI_SHARED_H

#include "KS/SRC/entity_interface_shared.h"
#include "KS/SRC/vector3d_shared.h"

class input_device {
protected:
    int device_id;

public:
    virtual ~input_device();
};

class AISurferController : public input_device {
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
    void *ksctl;
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

public:
    virtual ~AISurferController();
    bool buttonStatus(int which);
};

class ai_interface : public entity_interface {
public:
    virtual ~ai_interface();
};

#endif
