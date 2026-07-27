#ifndef KELLY_DECOMP_GAME_MARKY_CAM_SHARED_H
#define KELLY_DECOMP_GAME_MARKY_CAM_SHARED_H

class camera;

struct marky_camera_vtable {
    char data_before_collide[0x460];
    short collide_adjustment;
    short collide_padding;
    void (*collide)(void *self, bool value);
    char data_before_sync[0x1b8];
    short sync_adjustment;
    short sync_padding;
    void (*sync)(void *self, camera &other);
};

class marky_camera {
    char data_before_vtable[8];
    marky_camera_vtable *vtable;
    char data_before_priority[0x2e4];
    float priority;

public:
    float get_priority() const {
        return priority;
    }

    void sync(camera &other) {
        marky_camera_vtable *table = vtable;
        table->sync(
            (char *)this + table->sync_adjustment,
            other
        );
    }

    void camera_set_collide_with_world(bool value) {
        marky_camera_vtable *table = vtable;
        table->collide(
            (char *)this + table->collide_adjustment,
            value
        );
    }
};

class world_dynamics_system {
    char data_before_marky_camera[0x16c];
    marky_camera *marky_camera_ptr;

public:
    marky_camera *get_marky_cam_ptr() {
        return marky_camera_ptr;
    }

    void enable_marky_cam(bool enable, float priority);
};

class game {
    char data_before_world[0x0c];
    world_dynamics_system *the_world;
    char data_before_current_view_camera[0x18];
    camera *current_view_camera;

public:
    void enable_marky_cam(
        bool enable,
        bool sync_camera,
        float priority
    ) __asm__("enable_marky_cam__4gamebT1f");
};

bool FEDone();

__asm__(".equ FEDone__Fv, 0x00199150");
__asm__(
    ".equ enable_marky_cam__21world_dynamics_systembf, "
    "0x002A3AE8"
);

#endif
