#ifndef KELLY_DECOMP_KELLYSLATER_CONTROLLER_SHARED_H
#define KELLY_DECOMP_KELLYSLATER_CONTROLLER_SHARED_H

enum {
    SUPER_STATE_IN_TUBE = 7,
    STATE_TUBE_RAILGRAB = 78,
    TRICK_TUBE_RAIL_GRAB = 20,
};

class ScoringManager {
    char data[0x7FC];

public:
    void AddTrick(int trick);
};

class kellyslater_controller {
    char data_to_state[0x30];
    int state;
    char data_to_super_state[4];
    int super_state;
    char data_to_score_manager[0x10BC];
    ScoringManager my_scoreManager;
    int currentTrick;
    int completedTrick;
    int newTrick;
    int airIKtrick;
    bool trick_complete;
    char data_to_tube_trick[0x164];
    int tube_trick;
    char data_to_last_tube_trick[0x18];
    int last_tube_trick;

public:
    void SetCompletedTrick();
    int GetCurrentTrick();
};

#endif
