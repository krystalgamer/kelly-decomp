// Matching decompilation blocks selected by generated build shims.


// 0x002C6200 camera_set_roll__12marky_cameraf
#include "KS/SRC/camera.h"

void marky_camera::camera_set_roll(float angle) {
    roll = angle;
}

// 0x002C69B0 camera_get_target__12marky_camera
#include "KS/SRC/camera.h"
vector3d marky_camera::camera_get_target() { return vector3d(0.0f, 0.0f, 0.0f); }

// 0x002C61E0 camera_set_target__12marky_cameraRC8vector3d
#include "KS/SRC/camera.h"
void marky_camera::camera_set_target(const vector3d &position) { target = position; }

// 0x002C61B0 sync__12marky_cameraR6camera
#include "KS/SRC/camera.h"

extern "C" void GameCameraSync(void *self, camera &other)
    __asm__("sync__11game_cameraR6camera");
__asm__(".equ sync__11game_cameraR6camera, 0x002C41B0");

void marky_camera::sync(camera &other) {
    if (is_externally_controlled()) {
        return;
    }
    GameCameraSync(this, other);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002C38A8 _$_6camera
struct mic_vtable { char padding[8]; short adjustment; short reserved; void (*destroy)(void *, int); };
struct mic { char padding[8]; mic_vtable *vtable; };
extern "C" void destroy_entity(void *, int) __asm__("_$_6entity");
extern const char camera_vtable[];
__asm__(".equ _$_6entity,0x001298C8");
__asm__(".equ camera_vtable,0x004F4118");
struct camera_layout { char padding[8]; const void *vtable; char padding2[500]; mic *microphone; };
extern "C" void destroy_camera(camera_layout *self, int deleting) __asm__("_$_6camera");
void destroy_camera(camera_layout *self, int deleting)
{
    self->vtable = camera_vtable;
    mic *microphone = self->microphone;
    if (microphone) {
        mic_vtable *table = microphone->vtable;
        table->destroy((char *)microphone + table->adjustment, 3);
    }
    destroy_entity(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}

// 0x002C41B0 sync__11game_cameraR6camera
#include "KS/SRC/camera.h"

extern const po po_identity_matrix;
__asm__(".equ sync__6cameraR6camera, 0x002C3910");
__asm__(".equ po_identity_matrix, 0x00588930");

void game_camera::sync(camera &other)
{
    if (is_externally_controlled())
        return;
    camera::sync(other);
    last_frame_valid = false;
    temporary_lock = false;
    ground_pitch_po = po_identity_matrix;
    crawl_mode = false;
    crawl_mode_firstperson = false;
}
