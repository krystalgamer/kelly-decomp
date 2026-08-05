#ifndef RUMBLE_MANAGER_H
#define RUMBLE_MANAGER_H

enum {
    RUMBLE_PADS = 2
};

class rumbleManager {
public:
    enum RumbleState {
        LANDING,
        IN_AIR,
        WIPING_OUT,
        UNDERWATER,
        GRINDING_OBJECT,
        FLOATER,
        IN_WASH,
        LIE_ON_BOARD_POCKET,
        LIE_ON_BOARD_FACE,
        LIE_ON_BOARD_CHIN,
        STANDING_NEAR_TUBE,
        RUMBLE_NONE,
        RUMBLE_STATE_END
    };

    RumbleState currentRumbleState[2];
    RumbleState lastRumbleState[2];
    bool drawState;
    float rumbleLevels[RUMBLE_STATE_END];
    float rumbleVarPeriods[RUMBLE_STATE_END];
    float rumbleVarAmplitudes[RUMBLE_STATE_END];
    float rumbleFreqs[RUMBLE_STATE_END];

    void toggleDrawState() { drawState = !drawState; }
    bool isOn(int controller);
    void turnOn(bool enabled, int controller);

private:
    float variancePeriod;
    float varianceAmplitude;
    float currentStateTime[2];
    bool on[RUMBLE_PADS];
    bool paused;
    float rumbleLevel;
    float rumbleFreq;
    int ks_state[2];
    int ks_laststate[2];
    int currentRegion[2];
    int lastRegion[2];
};

extern rumbleManager rumbleMan;

#endif
