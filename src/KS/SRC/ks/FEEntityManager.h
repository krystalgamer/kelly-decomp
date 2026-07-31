#ifndef FEENTITYMANAGER_H
#define FEENTITYMANAGER_H

typedef float time_value_t;

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

    void Update(time_value_t time_inc);
    void LoadAll();
    void JumpTo(int position);
    void ExitState();
    bool CamIsMoving() const { return !cam_stopped; }
};

#endif
