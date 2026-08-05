#ifndef KS_CAMERA_H
#define KS_CAMERA_H

#pragma interface

#include "KS/SRC/camera.h"

class kellyslater_controller;
class PanelAnimFile;
class PanelAnim;

class debug_camera : public game_camera {
public:
    debug_camera(const entity_id &id, entity *target = 0);
    virtual ~debug_camera();
    virtual void sync(camera &other);
};

class old_shoulder_camera : public game_camera {
public:
    old_shoulder_camera(const entity_id &id, entity *target = 0);
    virtual ~old_shoulder_camera();
};

class shoulder_camera : public game_camera {
public:
    shoulder_camera(const entity_id &id, entity *target = 0);
    virtual ~shoulder_camera();
};

class wipeout_camera_2 : public game_camera {
public:
    wipeout_camera_2(const entity_id &id, entity *target = 0);
    virtual ~wipeout_camera_2();
};

class wipeout_camera : public game_camera {
public:
    wipeout_camera(const entity_id &id, entity *target = 0);
    virtual ~wipeout_camera();
};

class look_back_camera : public game_camera {
    char camera_state[0x30C - sizeof(game_camera)];
    bool first_time;

public:
    look_back_camera(const entity_id &id, entity *target = 0);
    virtual ~look_back_camera();
    virtual void init();
    virtual void sync(camera &other);
};

class replay_camera : public game_camera {
    char data_to_replay_mode[0x2D0 - sizeof(game_camera)];
    int rc;
    int rcr;
    char data_to_region_change_time[0x1C];
    float regionChangeTime;
    int regionChangeFrame;
    char data_to_hold_cam_timer[0x13C];
    float holdCamTimer;

public:
    replay_camera(const entity_id &id, entity *target = 0);
    virtual ~replay_camera();
    virtual void sync(camera &other);
    void reset();
};

class stationary_camera : public game_camera {
public:
    stationary_camera(const entity_id &id, entity *target = 0);
    virtual ~stationary_camera();
    virtual void sync(camera &other);
};

class fps_camera : public game_camera {
public:
    fps_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller);
    virtual ~fps_camera();
    virtual void sync(camera &other);
};

class big_wave_camera : public game_camera {
public:
    big_wave_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller
    );
    virtual ~big_wave_camera();
    virtual void frame_advance(float time_inc);
    virtual void init();
    void Reset();
};

class photo_camera : public game_camera {
    bool first_time;
    char photo_state_to_jump_time[0x30];
    float jump_time_elapsed;

public:
    photo_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller
    );
    virtual void init();
};

class follow_camera : public game_camera {
    bool first_time;
    char follow_state_to_jump_time[0x30];
    float jump_time_elapsed;

public:
    follow_camera(const entity_id &id, entity *target = 0);
    virtual ~follow_camera();
    virtual void frame_advance(float time_inc);
    void init();
};

class buoy_camera : public game_camera {
    bool first_time;
    char buoy_state_to_jump_time[0x30];
    float jump_time_elapsed;

public:
    buoy_camera(const entity_id &id, entity *target = 0);
    virtual ~buoy_camera();
    virtual void frame_advance(float time_inc);
    void init();
};

class duckdive_camera : public game_camera {
public:
    duckdive_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller);
    virtual ~duckdive_camera();
    virtual void frame_advance(time_value_t time_inc);
    void Reset();
    void SetExitTransition();
    void SetReset();

    bool do_reset;
};

class auto_camera : public game_camera {
    char auto_state_to_break_mode[
        720 - sizeof(game_camera)];
    int break_camera_state;
    char auto_state_to_filter[168];
    bool initialize_filter;

public:
    auto_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller);
    void Reset();
    virtual void sync(camera &other);
    virtual void frame_advance(float time_inc);

protected:
    virtual int GetCameraType();
};

class beach_camera : public auto_camera {
public:
    beach_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller);

private:
    virtual int GetCameraType();
};

class flyby_camera : public game_camera {
    PanelAnimFile *animation;
    bool is_playing;
    float current_anim_time;
    PanelAnim *camera;
    PanelAnim *target;

public:
    flyby_camera(const entity_id &id, entity *target = 0);
    virtual ~flyby_camera();
    virtual void frame_advance(float time_inc);
    bool load();
    void start();
    bool is_finished();
};

struct beach_camera_data {
    char state[208];
    bool left_breaker;
    char tail[320];
};

class camera_game {
    char state_to_beach[552];
    int beach_id;

public:
    inline int get_beach_id() const { return beach_id; }
};

extern float beach_camera_yaw;
extern float beach_camera_magnitude_x;
extern float beach_camera_magnitude_y;
extern float beach_camera_magnitude_z;
extern float beach_camera_magnitude_yaw;
extern float beach_camera_destination[3];
extern camera_game *g_game_ptr;
extern beach_camera_data BeachDataArray[];

__asm__(".equ beach_camera_yaw, 0x00424D70");
__asm__(".equ beach_camera_magnitude_x, 0x00424D74");
__asm__(".equ beach_camera_magnitude_y, 0x00424D78");
__asm__(".equ beach_camera_magnitude_z, 0x00424D7C");
__asm__(".equ beach_camera_magnitude_yaw, 0x00424D80");
__asm__(".equ beach_camera_destination, 0x00554AD0");
__asm__(".equ g_game_ptr, 0x0046AC64");
__asm__(".equ BeachDataArray, 0x0043C198");

#endif
