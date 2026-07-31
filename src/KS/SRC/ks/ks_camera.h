#ifndef KS_CAMERA_H
#define KS_CAMERA_H

#pragma interface

#include "KS/SRC/camera.h"

class kellyslater_controller;

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
public:
    photo_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller
    );
    virtual void init();
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
    virtual void frame_advance(float time_inc);
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
