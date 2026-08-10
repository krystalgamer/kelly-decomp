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
    void (*sync_camera)(void *, camera &) = GameCameraSync;
    sync_camera(this, other);
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

// Source implementation boundary.
// 0x002FECE0 is_a_camera__C6camera
#include "KS/SRC/camera.h"
bool camera::is_a_camera() const { return true; }

// 0x002FECE8 Reset__6camera
#include "KS/SRC/camera.h"
void camera::Reset() {}

// 0x002FEDA0 init__11game_camera
#include "KS/SRC/camera.h"
void game_camera::init() {}

// 0x002FEDD0 is_a_game_camera__C11game_camera
#include "KS/SRC/camera.h"
bool game_camera::is_a_game_camera() const { return true; }

// 0x002FEEB8 is_a_marky_camera__C12marky_camera
#include "KS/SRC/camera.h"
bool marky_camera::is_a_marky_camera() const { return true; }

// 0x002FEEC0 camera_set_collide_with_world__12marky_camerab
#include "KS/SRC/camera.h"
void marky_camera::camera_set_collide_with_world(bool value) {
    do_collide_with_world = value;
}

// 0x002FEDA8 GetStartPosition__11game_camera
#include "KS/SRC/camera.h"
extern const vector3d ZEROVEC;
__asm__(".equ ZEROVEC, 0x005887F0");
vector3d game_camera::GetStartPosition() {
    return ZEROVEC;
}

// 0x002FEC90 __tf6camera
#include "KS/SRC/rtti.h"
extern "C" void **CameraBaseRtti() __asm__("__tf6entity");
extern "C" void *camera_type[] __asm__("__ti6camera");
extern "C" const char camera_name[];
extern "C" void *camera_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti6camera, 0x005A3EF0");
__asm__(".equ camera_name, 0x004F4AF8");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **CameraRtti() __asm__("__tf6camera");
void **CameraRtti(){if(!camera_type[0]){CameraBaseRtti();__rtti_si(camera_type,camera_name,camera_base_type);}return camera_type;}
