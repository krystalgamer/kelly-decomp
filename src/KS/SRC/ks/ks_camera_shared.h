#ifndef KELLY_DECOMP_KS_CAMERA_SHARED_H
#define KELLY_DECOMP_KS_CAMERA_SHARED_H

#pragma interface

class entity_id;
class entity;
class kellyslater_controller;

class camera {
    char camera_data[8];

public:
    virtual ~camera();
};

class game_camera : public camera {
    char camera_context[0x208];
    kellyslater_controller *ksctrl;

public:
    game_camera(const entity_id &id, entity *target);
    virtual ~game_camera();
    inline void set_ks_controller(kellyslater_controller *controller) {
        ksctrl = controller;
    }
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
public:
    photo_camera(
        const entity_id &id,
        entity *target,
        kellyslater_controller *controller
    );
    virtual void init();
};

#endif
