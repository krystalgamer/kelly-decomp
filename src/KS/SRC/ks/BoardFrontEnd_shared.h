#ifndef KELLY_DECOMP_BOARD_FRONT_END_SHARED_H
#define KELLY_DECOMP_BOARD_FRONT_END_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/mode.h"

class IGOFrontEnd;
class PauseMenuSystem;
class GraphicalMenuSystem;

class FEEntityManager {
    char entity_manager_data[0x1c0];
    bool cam_stopped;

public:
    enum {
        CAM_POS_WALL_1,
        CAM_POS_WALL_2_IN,
        CAM_POS_WALL_2_OUT,
        CAM_POS_WALL_3_MAP,
        CAM_POS_WALL_3_CLOSET
    };

    void JumpTo(int position);
    void ExitState();
    inline bool CamIsMoving() {
        return !cam_stopped;
    }
};

class FEManager {
public:
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
    GraphicalMenuSystem *gms;
    FEEntityManager *em;

private:
    char manager_data[0x1566c - 16];

public:
    game_mode_t tmp_game_mode;
};

class BoardFrontEnd : public FEMultiMenu {
    bool unlocked;
    GraphicalMenuSystem *sys;

public:
    virtual void Load();
    virtual void OnAnyButtonPress(int controller, int button);
    virtual void OnTriangle(int controller);

private:
    virtual void SetPQIndices();
};

#endif
