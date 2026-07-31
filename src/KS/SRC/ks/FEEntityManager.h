#ifndef FEENTITYMANAGER_H
#define FEENTITYMANAGER_H

#include "KS/SRC/entity_anim.h"
#include "KS/SRC/ks/trickdata.h"
#include "KS/SRC/matfac.h"
#include "KS/SRC/po.h"

typedef int nslEmitterId;
typedef int SSEventId;
typedef int scene_anim_handle_t;
typedef float time_value_t;

class camera;
class conglomerate;
class entity;
class FEManager;

class ik_object {
    entity *floor_obj;
    entity *pelvis;
    entity *l_thigh;
    entity *l_calf;
    entity *l_foot;
    entity *r_thigh;
    entity *r_calf;
    entity *r_foot;
    conglomerate *biped_obj;
    float r_thigh_ik_invc;
    float r_thigh_ik_c;
    float r_calf_ik_invc;
    float r_calf_ik_c;
    float l_thigh_ik_invc;
    float l_thigh_ik_c;
    float l_calf_ik_invc;
    float l_calf_ik_c;

public:
    ik_object(entity *floor, conglomerate *biped);
    ik_object();
    ~ik_object();
    void InitIK(entity *floor, conglomerate *biped);
    void SetFloorObj(entity *floor) { floor_obj = floor; }
    void SetBipedObj(conglomerate *biped) { biped_obj = biped; }
    void PerformIK();
};

class FEEntityManager {
public:
    enum state_t {
        STATE_MAIN,
        STATE_SURFER1,
        STATE_SURFER2,
        STATE_TRICK,
        STATE_BEACH,
        STATE_BOARD,
        STATE_OTHER_SET,
        STATE_OTHER
    };

    enum camera_position_t {
        CAM_POS_WALL_1,
        CAM_POS_WALL_2_IN,
        CAM_POS_WALL_2_OUT,
        CAM_POS_WALL_3_MAP,
        CAM_POS_WALL_3_CLOSET,
        CAM_POS_WALL_4,
        CAM_POS_END
    };

    entity *surfer_ent;
    bool mm_anims_loaded;
    bool all_loaded;
    float camera_roll_time;
    int camera_roll_stop;

private:
    int surfer_anim_count;
    int current_surfer_index;
    int previous_surfer_index[2];
    int loading_surfer_index;
    int loading_surfer_ent;
    int surfer_index_2;
    int current_board_index;
    FEManager *manager;
    nglMaterial set_material;
    float turnaround_length;
    entity *map;
    entity *porthole;
    po porthole_start_po;

public:
    nslEmitterId behindTheCamera;
    entity *board;
    entity *my_board;
    entity *my_board_member;
    entity *my_rotate_object;
    entity *my_parent_node;

private:
    bool boards_loaded;
    bool board_draw;
    int board_tail_type;
    entity_anim_tree *board_tree;
    SSEventId doorEvent;
    int cam_pos_goal;
    bool cam_stopped;
    int cam_stopped_at;
    float stops[CAM_POS_END];
    scene_anim_handle_t cam_anim_handle;
    entity_anim_tree *cam_anim_tree;
    bool cam_reverse;
    bool skip_map_zoom;
    entity *closet_door[2];
    float closet_pos[2];
    float closet_movement;
    int closet_state;
    float closet_timer;
    bool closet_open[2];

public:
    camera *fe_camera;
    camera *active_camera;

private:
    entity_anim_tree *surfer_tree;
    bool dont_draw_surfer;
    int btwn_idle_count;
    bool old_pers;
    int next_anim;
    int cur_anim;
    int cur_b_anim;
    int cur_trick_anim;
    int cur_trick;
    int cur_state;
    int last_state;
    bool op_ext;
    bool forward;
    bool loop_around;
    float beaches[13];
    bool surfer_loaded;
    bool tricks_loaded;
    bool in_flyin;
    bool trick_playing;
    po surfer_select_po;
    po surfer_trick_po;
    po board_select_po;
    po board_trick_po;
    ik_object *my_ik_object;

public:
    void PerformIK();
    void Update(time_value_t time_inc);
    void LoadAll();
    void JumpTo(int position);
    void ExitState();
    bool CamIsMoving() const { return !cam_stopped; }
};

const int DoIkFlag = 0x00001;
const int IkBlendFlag = 0x00002;
const int BoardNodeFlag = 0x00004;

#endif
