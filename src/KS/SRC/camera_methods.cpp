// Camera definitions extracted by generated one-function shims.

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

// 0x002FED78 _$_11game_camera
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char base_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ base_vtable, 0x004F3AD0");
struct game_camera_destruction_layout {
    char padding[0x8];
    const void *vtable;
};
extern "C" void GameCameraDtor(void *self, int deleting)
    __asm__("_$_11game_camera");
void GameCameraDtor(void *self, int deleting) {
    ((game_camera_destruction_layout *)self)->vtable = base_vtable;
    BaseDtor(self, deleting);
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x002FEDA8 GetStartPosition__11game_camera
#include "KS/SRC/camera.h"
extern const vector3d ZEROVEC;
__asm__(".equ ZEROVEC, 0x005887F0");
vector3d game_camera::GetStartPosition() {
    return ZEROVEC;
}

// 0x002FEE90 _$_12marky_camera
extern "C" void MarkyBaseDtor(void *self, int deleting)
    __asm__("_$_6camera");
extern const char marky_base_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ marky_base_vtable, 0x004F3AD0");
struct marky_camera_destruction_layout {
    char padding[0x8];
    const void *vtable;
};
extern "C" void MarkyCameraDtor(void *self, int deleting)
    __asm__("_$_12marky_camera");
void MarkyCameraDtor(void *self, int deleting) {
    ((marky_camera_destruction_layout *)self)->vtable =
        marky_base_vtable;
    MarkyBaseDtor(self, deleting);
    KELLY_DECOMP_COMPILER_BARRIER();
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
