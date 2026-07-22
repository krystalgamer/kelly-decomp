#ifndef KELLY_DECOMP_BOARD_FRONT_END_SHARED_H
#define KELLY_DECOMP_BOARD_FRONT_END_SHARED_H

#pragma interface

#include "KS/SRC/ks/FEMenu_shared.h"

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
    bool CamIsMoving() {
        return !cam_stopped;
    }
};

class FEManager {
public:
    IGOFrontEnd *IGO;
    PauseMenuSystem *pms;
    GraphicalMenuSystem *gms;
    FEEntityManager *em;
};

class BoardFrontEnd : public FEMultiMenu {
public:
    virtual void Load();
    virtual void OnAnyButtonPress(int controller, int button);

private:
    virtual void SetPQIndices();
};

#endif
