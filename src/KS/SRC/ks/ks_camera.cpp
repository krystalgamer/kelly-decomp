// ks_camera definitions extracted by generated one-function shims.

// 0x0022C808 Reset__11auto_camera
#include "KS/SRC/ks/ks_camera.h"

void auto_camera::Reset()
{
    beach_camera_destination[0] =
        beach_camera_magnitude_x;
    beach_camera_destination[1] =
        beach_camera_magnitude_y;
    beach_camera_destination[2] =
        -beach_camera_magnitude_z;

    int beach = g_game_ptr->get_beach_id();
    if (BeachDataArray[beach].left_breaker)
    {
        beach_camera_yaw =
            -beach_camera_magnitude_yaw;
        beach_camera_destination[0] =
            -beach_camera_magnitude_x;
    }
    else
    {
        beach_camera_destination[0] =
            beach_camera_magnitude_x;
        beach_camera_yaw =
            beach_camera_magnitude_yaw;
    }

    break_camera_state = 0;
    initialize_filter = true;
    frame_advance(0.0f);
}

// 0x0026F0F8 __tf11auto_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *auto_camera_type[] __asm__("__ti11auto_camera");
extern "C" const char auto_camera_name[];
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti11auto_camera, 0x005A3AE0");
__asm__(".equ auto_camera_name, 0x004E4E38");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **auto_camera_rtti() __asm__("__tf11auto_camera");
void **auto_camera_rtti()
{
    if (!auto_camera_type[0]) {
        game_camera_rtti();
        __rtti_si(auto_camera_type, auto_camera_name, game_camera_type);
    }
    return auto_camera_type;
}

// 0x0026F2C8 __tf15big_wave_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *big_wave_camera_type[] __asm__("__ti15big_wave_camera");
extern "C" const char big_wave_camera_name[];
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti15big_wave_camera, 0x005A3B00");
__asm__(".equ big_wave_camera_name, 0x004E4E58");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **big_wave_camera_rtti() __asm__("__tf15big_wave_camera");
void **big_wave_camera_rtti()
{
    if (!big_wave_camera_type[0]) {
        game_camera_rtti();
        __rtti_si(
            big_wave_camera_type,
            big_wave_camera_name,
            game_camera_type
        );
    }
    return big_wave_camera_type;
}

// 0x0026F368 __tf16wipeout_camera_2
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **wipeout_camera_2_base_rtti() __asm__("__tf11game_camera");
extern "C" void *wipeout_camera_2_type[] __asm__("__ti16wipeout_camera_2");
extern "C" const char wipeout_camera_2_name[];
extern "C" void *wipeout_camera_2_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti16wipeout_camera_2, 0x005A3B10");
__asm__(".equ wipeout_camera_2_name, 0x004E4E70");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **wipeout_camera_2_rtti() __asm__("__tf16wipeout_camera_2");
void **wipeout_camera_2_rtti()
{
    if (!wipeout_camera_2_type[0]) {
        wipeout_camera_2_base_rtti();
        __rtti_si(
            wipeout_camera_2_type,
            wipeout_camera_2_name,
            wipeout_camera_2_base_type
        );
    }
    return wipeout_camera_2_type;
}

// 0x0026F3B8 __tf14wipeout_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **wipeout_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *wipeout_camera_type[] __asm__("__ti14wipeout_camera");
extern "C" const char wipeout_camera_name[];
extern "C" void *wipeout_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti14wipeout_camera, 0x005A3B20");
__asm__(".equ wipeout_camera_name, 0x004E4E88");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **wipeout_camera_rtti() __asm__("__tf14wipeout_camera");
void **wipeout_camera_rtti()
{
    if (!wipeout_camera_type[0]) {
        wipeout_camera_base_rtti();
        __rtti_si(
            wipeout_camera_type,
            wipeout_camera_name,
            wipeout_camera_base_type
        );
    }
    return wipeout_camera_type;
}

// 0x0026F410 __tf12flyby_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **flyby_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *flyby_camera_type[] __asm__("__ti12flyby_camera");
extern "C" const char flyby_camera_name[];
extern "C" void *flyby_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti12flyby_camera, 0x005A3B30");
__asm__(".equ flyby_camera_name, 0x004E4EA0");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **flyby_camera_rtti() __asm__("__tf12flyby_camera");
void **flyby_camera_rtti()
{
    if (!flyby_camera_type[0]) {
        flyby_camera_base_rtti();
        __rtti_si(flyby_camera_type, flyby_camera_name, flyby_camera_base_type);
    }
    return flyby_camera_type;
}

// 0x0026F460 __tf13follow_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **follow_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *follow_camera_type[] __asm__("__ti13follow_camera");
extern "C" const char follow_camera_name[];
extern "C" void *follow_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti13follow_camera, 0x005A3B40");
__asm__(".equ follow_camera_name, 0x004E4EB0");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **follow_camera_rtti() __asm__("__tf13follow_camera");
void **follow_camera_rtti()
{
    if (!follow_camera_type[0]) {
        follow_camera_base_rtti();
        __rtti_si(follow_camera_type, follow_camera_name, follow_camera_base_type);
    }
    return follow_camera_type;
}

// 0x0026F4D8 __tf19follow_close_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **follow_close_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *follow_close_camera_type[] __asm__("__ti19follow_close_camera");
extern "C" const char follow_close_camera_name[];
extern "C" void *follow_close_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti19follow_close_camera, 0x005A3B50");
__asm__(".equ follow_close_camera_name, 0x004E4EC0");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **follow_close_camera_rtti() __asm__("__tf19follow_close_camera");
void **follow_close_camera_rtti()
{
    if (!follow_close_camera_type[0]) {
        follow_close_camera_base_rtti();
        __rtti_si(
            follow_close_camera_type,
            follow_close_camera_name,
            follow_close_camera_base_type
        );
    }
    return follow_close_camera_type;
}

// 0x0026F550 __tf11buoy_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **buoy_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *buoy_camera_type[] __asm__("__ti11buoy_camera");
extern "C" const char buoy_camera_name[];
extern "C" void *buoy_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti11buoy_camera, 0x005A3B60");
__asm__(".equ buoy_camera_name, 0x004E4ED8");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **buoy_camera_rtti() __asm__("__tf11buoy_camera");
void **buoy_camera_rtti()
{
    if (!buoy_camera_type[0]) {
        buoy_camera_base_rtti();
        __rtti_si(buoy_camera_type, buoy_camera_name, buoy_camera_base_type);
    }
    return buoy_camera_type;
}

// 0x0026F5C8 __tf15duckdive_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **duckdive_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *duckdive_camera_type[] __asm__("__ti15duckdive_camera");
extern "C" const char duckdive_camera_name[];
extern "C" void *duckdive_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti15duckdive_camera, 0x005A3B70");
__asm__(".equ duckdive_camera_name, 0x004E4EE8");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **duckdive_camera_rtti() __asm__("__tf15duckdive_camera");
void **duckdive_camera_rtti()
{
    if (!duckdive_camera_type[0]) {
        duckdive_camera_base_rtti();
        __rtti_si(
            duckdive_camera_type,
            duckdive_camera_name,
            duckdive_camera_base_type
        );
    }
    return duckdive_camera_type;
}

// 0x0026F678 __tf12photo_camera
#include "KS/SRC/rtti.h"
#include "KS/SRC/ks/ks_camera.h"

extern "C" void **photo_camera_base_rtti() __asm__("__tf11game_camera");
extern "C" void *photo_camera_type[] __asm__("__ti12photo_camera");
extern "C" const char photo_camera_name[];
extern "C" void *photo_camera_base_type[] __asm__("__ti11game_camera");

__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti12photo_camera, 0x005A3B80");
__asm__(".equ photo_camera_name, 0x004E4F00");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **photo_camera_rtti() __asm__("__tf12photo_camera");
void **photo_camera_rtti()
{
    if (!photo_camera_type[0]) {
        photo_camera_base_rtti();
        __rtti_si(photo_camera_type, photo_camera_name, photo_camera_base_type);
    }
    return photo_camera_type;
}

// 0x0026EDB8 __tf12debug_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *debug_type[] __asm__("__ti12debug_camera");
extern "C" const char debug_name[] __asm__("debug_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti12debug_camera, 0x005A3A70");
__asm__(".equ debug_type_name, 0x004E4DA8");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **debug_rtti() __asm__("__tf12debug_camera");
void **debug_rtti()
{
    if (!debug_type[0]) {
        game_camera_rtti();
        __rtti_si(debug_type, debug_name, game_camera_type);
    }
    return debug_type;
}

// 0x0026EE30 __tf16look_back_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *look_back_type[] __asm__("__ti16look_back_camera");
extern "C" const char look_back_name[] __asm__("look_back_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti16look_back_camera, 0x005A3A80");
__asm__(".equ look_back_type_name, 0x004E4DB8");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **look_back_rtti() __asm__("__tf16look_back_camera");
void **look_back_rtti()
{
    if (!look_back_type[0]) {
        game_camera_rtti();
        __rtti_si(look_back_type, look_back_name, game_camera_type);
    }
    return look_back_type;
}

// 0x0026EEA8 __tf13replay_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *replay_type[] __asm__("__ti13replay_camera");
extern "C" const char replay_name[] __asm__("replay_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti13replay_camera, 0x005A3A90");
__asm__(".equ replay_type_name, 0x004E4DD0");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **replay_rtti() __asm__("__tf13replay_camera");
void **replay_rtti()
{
    if (!replay_type[0]) {
        game_camera_rtti();
        __rtti_si(replay_type, replay_name, game_camera_type);
    }
    return replay_type;
}

// 0x0026EF20 __tf19old_shoulder_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *old_shoulder_type[] __asm__("__ti19old_shoulder_camera");
extern "C" const char old_shoulder_name[] __asm__("old_shoulder_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti19old_shoulder_camera, 0x005A3AA0");
__asm__(".equ old_shoulder_type_name, 0x004E4DE0");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **old_shoulder_rtti() __asm__("__tf19old_shoulder_camera");
void **old_shoulder_rtti()
{
    if (!old_shoulder_type[0]) {
        game_camera_rtti();
        __rtti_si(old_shoulder_type, old_shoulder_name, game_camera_type);
    }
    return old_shoulder_type;
}

// 0x0026EF70 __tf15shoulder_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *shoulder_type[] __asm__("__ti15shoulder_camera");
extern "C" const char shoulder_name[] __asm__("shoulder_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti15shoulder_camera, 0x005A3AB0");
__asm__(".equ shoulder_type_name, 0x004E4DF8");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **shoulder_rtti() __asm__("__tf15shoulder_camera");
void **shoulder_rtti()
{
    if (!shoulder_type[0]) {
        game_camera_rtti();
        __rtti_si(shoulder_type, shoulder_name, game_camera_type);
    }
    return shoulder_type;
}

// 0x0026EFC0 __tf10fps_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *fps_type[] __asm__("__ti10fps_camera");
extern "C" const char fps_name[] __asm__("fps_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti10fps_camera, 0x005A3AC0");
__asm__(".equ fps_type_name, 0x004E4E10");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **fps_rtti() __asm__("__tf10fps_camera");
void **fps_rtti()
{
    if (!fps_type[0]) {
        game_camera_rtti();
        __rtti_si(fps_type, fps_name, game_camera_type);
    }
    return fps_type;
}

// 0x0026F038 __tf17stationary_camera
extern "C" void __rtti_si(void **type, const char *name, void **base);
__asm__(".equ __rtti_si, 0x003CE2D8");
extern "C" void **game_camera_rtti() __asm__("__tf11game_camera");
extern "C" void *stationary_type[] __asm__("__ti17stationary_camera");
extern "C" const char stationary_name[] __asm__("stationary_type_name");
extern "C" void *game_camera_type[] __asm__("__ti11game_camera");
__asm__(".equ __tf11game_camera, 0x002FECF0");
__asm__(".equ __ti17stationary_camera, 0x005A3AD0");
__asm__(".equ stationary_type_name, 0x004E4E20");
__asm__(".equ __ti11game_camera, 0x005A3D40");

extern "C" void **stationary_rtti() __asm__("__tf17stationary_camera");
void **stationary_rtti()
{
    if (!stationary_type[0]) {
        game_camera_rtti();
        __rtti_si(stationary_type, stationary_name, game_camera_type);
    }
    return stationary_type;
}


// 0x00225340 sync__12debug_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void debug_camera::sync(camera &other) {
}

// 0x002351D8 __12photo_cameraRC9entity_idP6entityP22kellyslater_controller
#include "KS/SRC/ks/ks_camera.h"
__asm__(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
__asm__(".equ _vt$12photo_camera, 0x004D6360");
__asm__(".equ init__12photo_camera, 0x00235228");
photo_camera::photo_camera(
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) : game_camera(id, target) {
    set_ks_controller(controller);
    init();
}

// 0x0022F510 __15big_wave_cameraRC9entity_idP6entityP22kellyslater_controller
#include "KS/SRC/ks/ks_camera.h"
__asm__(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
__asm__(".equ _vt$15big_wave_camera, 0x004E95A0");
__asm__(".equ Reset__15big_wave_camera, 0x0022F560");
big_wave_camera::big_wave_camera(
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) : game_camera(id, target) {
    set_ks_controller(controller);
    Reset();
}

// 0x00225E70 init__16look_back_camera
#include "KS/SRC/ks/ks_camera.h"

void look_back_camera::init() {
    first_time = true;
}

// 0x00225E80 sync__16look_back_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void look_back_camera::sync(camera &other) {
}

// 0x00226B58 sync__13replay_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void replay_camera::sync(camera &other) {
}

// 0x0022BCE0 sync__17stationary_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void stationary_camera::sync(camera &other) {
}

// 0x0022C250 sync__10fps_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void fps_camera::sync(camera &other) {
}

// 0x0022C208 __10fps_cameraRC9entity_idP6entityP22kellyslater_controller
#include "KS/SRC/ks/ks_camera.h"

__asm__(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");

fps_camera::fps_camera(const entity_id &id, entity *target, kellyslater_controller *controller)
    : game_camera(id, target)
{
    set_ks_controller(controller);
}

// 0x0022C8D0 sync__11auto_cameraR6camera
#include "KS/SRC/ks/ks_camera.h"

void auto_camera::sync(camera &other) {
}

// 0x00231CF0 start__12flyby_camera
#include "KS/SRC/ks/ks_camera.h"

void flyby_camera::start() {
    is_playing = true;
}

// 0x00231D68 init__13follow_camera
#include "KS/SRC/ks/ks_camera.h"

void follow_camera::init() { first_time = true; jump_time_elapsed = 0; }

// 0x00232A68 init__19follow_close_camera
#include "KS/SRC/ks/ks_camera.h"

void follow_close_camera::init()
{
    first_time = true;
    jump_time_elapsed = 0;
    if (ksctrl)
        frame_advance(0.0f);
}

// 0x00234648 __15duckdive_cameraRC9entity_idP6entityP22kellyslater_controller
#include "KS/SRC/ks/ks_camera.h"

__asm__(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");

duckdive_camera::duckdive_camera(const entity_id &id, entity *target, kellyslater_controller *controller)
    : game_camera(id, target)
{
    set_ks_controller(controller);
}

// 0x00233BB0 init__11buoy_camera
#include "KS/SRC/ks/ks_camera.h"

void buoy_camera::init() { first_time = true; jump_time_elapsed = 0; }

// 0x00235228 init__12photo_camera
#include "KS/SRC/ks/ks_camera.h"

void photo_camera::init() { first_time = true; jump_time_elapsed = 0; }

// 0x00229B88 interpolate_float__Ffff
float interpolate_float(float first_float, float second_float, float difference) { return (first_float * (1.0f - difference)) + (second_float * difference); }

// 0x00226B38 reset__13replay_camera
#include "KS/SRC/ks/ks_camera.h"

void replay_camera::reset() { rc = 13; rcr = 6; regionChangeTime = 0.0f; regionChangeFrame = 0; holdCamTimer = 0.0f; }

// 0x00231D00 is_finished__12flyby_camera
#include "KS/SRC/ks/FEAnim.h"
#include "KS/SRC/ks/ks_camera.h"

bool flyby_camera::is_finished() { return current_anim_time >= animation->totalseconds; }

// 0x0022E718 __12beach_cameraRC9entity_idP6entityP22kellyslater_controller
#include "KS/SRC/ks/ks_camera.h"

beach_camera::beach_camera(
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) : auto_camera(id, target, controller) {}

// 0x00225E30 __16look_back_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__16look_back_camera, 0x00225E70");
asm(".equ _vt$16look_back_camera, 0x004EC818");

look_back_camera::look_back_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}

// 0x0022A118 __15shoulder_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__15shoulder_camera, 0x0022A180");
asm(".equ _vt$15shoulder_camera, 0x004EB538");

shoulder_camera::shoulder_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}

// 0x0022FD78 __16wipeout_camera_2RC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ _vt$16wipeout_camera_2, 0x004E8F58");

wipeout_camera_2::wipeout_camera_2(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    previous_camera = 0;
    wave_hint_valid = false;
}

// 0x00230830 __14wipeout_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ _vt$14wipeout_camera, 0x004E8910");

wipeout_camera::wipeout_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    collision_object = 0;
    previous_camera = 0;
}

// 0x00231D28 __13follow_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__13follow_camera, 0x00231D68");
asm(".equ _vt$13follow_camera, 0x004D7C80");

follow_camera::follow_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}

// 0x00232A28 __19follow_close_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__19follow_close_camera, 0x00232A68");
asm(".equ _vt$19follow_close_camera, 0x004D7638");

follow_close_camera::follow_close_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}

// 0x00233B70 __11buoy_cameraRC9entity_idP6entity
#include "KS/SRC/ks/ks_camera.h"

asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__11buoy_camera, 0x00233BB0");
asm(".equ _vt$11buoy_camera, 0x004D6FF0");

buoy_camera::buoy_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}

// 0x00229D18 Init_Filter__13vector_filterG8vector3d
#include "KS/SRC/vector_filter.h"

void vector_filter::Init_Filter(const vector3d &start_vec)
{
    float *values = xwPos;
    for (int n = 0; n < 2; n++, values++) {
        values[0] = start_vec.x;
        values[2] = start_vec.y;
        values[4] = start_vec.z;
        values[6] = 0.0f;
        values[8] = 0.0f;
        values[10] = 0.0f;
    }
}

// Source implementation boundary.
// 0x0026F200 GetCameraType__11auto_camera
#include "KS/SRC/ks/ks_camera.h"

int auto_camera::GetCameraType() {
    return 0;
}

// 0x0026F2C0 GetCameraType__12beach_camera
#include "KS/SRC/ks/ks_camera.h"

int beach_camera::GetCameraType() {
    return 1;
}
