// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00225340)
// 0x00225340 sync__12debug_cameraR6camera
class camera;

class debug_camera {
public:
    void sync(camera& other);
};

void debug_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00225E70)
// 0x00225E70 init__16look_back_camera
class look_back_camera {
    char padding[0x30C];
    bool first_time;
public:
    void init();
};

void look_back_camera::init() {
    first_time = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00225E80)
// 0x00225E80 sync__16look_back_cameraR6camera
class camera;

class look_back_camera {
public:
    void sync(camera& other);
};

void look_back_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00226B58)
// 0x00226B58 sync__13replay_cameraR6camera
class camera;

class replay_camera {
public:
    void sync(camera& other);
};

void replay_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022BCE0)
// 0x0022BCE0 sync__17stationary_cameraR6camera
class camera;

class stationary_camera {
public:
    void sync(camera& other);
};

void stationary_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022C250)
// 0x0022C250 sync__10fps_cameraR6camera
class camera;

class fps_camera {
public:
    void sync(camera& other);
};

void fps_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022C8D0)
// 0x0022C8D0 sync__11auto_cameraR6camera
class camera;

class auto_camera {
public:
    void sync(camera& other);
};

void auto_camera::sync(camera& other) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00231CF0)
// 0x00231CF0 start__12flyby_camera
class flyby_camera {
    char padding[0x2D4];
    bool is_playing;
public:
    void start();
};

void flyby_camera::start() {
    is_playing = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00231D68)
// 0x00231D68 init__13follow_camera
class follow_camera { char padding_to_first[0x2D0]; bool first_time; char padding_to_jump[0x30]; float jump_time_elapsed; public: void init(); };
void follow_camera::init() { first_time = true; jump_time_elapsed = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00233BB0)
// 0x00233BB0 init__11buoy_camera
class buoy_camera { char padding_to_first[0x2D0]; bool first_time; char padding_to_jump[0x30]; float jump_time_elapsed; public: void init(); };
void buoy_camera::init() { first_time = true; jump_time_elapsed = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00235228)
// 0x00235228 init__12photo_camera
class photo_camera { char padding_to_first[0x2D0]; bool first_time; char padding_to_jump[0x30]; float jump_time_elapsed; public: void init(); };
void photo_camera::init() { first_time = true; jump_time_elapsed = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00229B88)
// 0x00229B88 interpolate_float__Ffff
float interpolate_float(float first_float, float second_float, float difference) { return (first_float * (1.0f - difference)) + (second_float * difference); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00226B38)
// 0x00226B38 reset__13replay_camera
class replay_camera { char padding0[0x2d0]; int rc; int rcr; char padding1[0x1c]; float regionChangeTime; int regionChangeFrame; char padding2[0x13c]; float holdCamTimer; public: void reset(); };
void replay_camera::reset() { rc = 13; rcr = 6; regionChangeTime = 0.0f; regionChangeFrame = 0; holdCamTimer = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002351B0)
// 0x002351B0 SetReset__15duckdive_camera
void WAVE_EndWave(bool advance);
__asm__(".equ WAVE_EndWave__Fb, 0x00377B38");
class duckdive_camera { char padding[0x2d0]; bool do_reset; public: void SetReset(); };
void duckdive_camera::SetReset() { do_reset = true; WAVE_EndWave(true); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00228D38)
// 0x00228D38 _$_19old_shoulder_camera
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct CameraLayout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_19old_shoulder_camera");
void DerivedDtor(void *self, int deleting) { ((CameraLayout *)self)->vtable = camera_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022A158)
// 0x0022A158 _$_15shoulder_camera
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct CameraLayout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_15shoulder_camera");
void DerivedDtor(void *self, int deleting) { ((CameraLayout *)self)->vtable = camera_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022FDB8)
// 0x0022FDB8 _$_16wipeout_camera_2
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct CameraLayout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_16wipeout_camera_2");
void DerivedDtor(void *self, int deleting) { ((CameraLayout *)self)->vtable = camera_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00230870)
// 0x00230870 _$_14wipeout_camera
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct CameraLayout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_14wipeout_camera");
void DerivedDtor(void *self, int deleting) { ((CameraLayout *)self)->vtable = camera_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00231D00)
// 0x00231D00 is_finished__12flyby_camera
struct camera_animation { char padding[4]; float totalseconds; };
class flyby_camera { char padding0[0x2d0]; camera_animation *animation; char padding1[4]; float current_anim_time; public: bool is_finished(); };
bool flyby_camera::is_finished() { return current_anim_time >= animation->totalseconds; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00229F68)
// 0x00229F68 Init_Filter__12float_filterf
class float_filter { float Pos[2]; float err[2]; public: void Init_Filter(float start); };
void float_filter::Init_Filter(float start) { float *value = Pos; int index = 1; __asm__ volatile("nop"); loop: value[0] = start; --index; value[2] = 0.0f; KELLY_DECOMP_COMPILER_BARRIER(); KELLY_DECOMP_COMPILER_BARRIER(); if (index >= 0) { ++value; goto loop; } ++value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0022E718)
// 0x0022E718 __12beach_cameraRC9entity_idP6entityP22kellyslater_controller
class entity_id;
class entity;
class kellyslater_controller;

extern "C" void AutoCameraCtor(
    void *self,
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) __asm__("__11auto_cameraRC9entity_idP6entityP22kellyslater_controller");

__asm__(".equ __11auto_cameraRC9entity_idP6entityP22kellyslater_controller, 0x0022C7A0");

extern const char beach_camera_vtable[];
__asm__(".equ beach_camera_vtable, 0x004E9BE8");

struct beach_camera_layout {
    char padding[8];
    const void *vtable;
};

extern "C" void *BeachCameraCtor(
    void *self,
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) __asm__("__12beach_cameraRC9entity_idP6entityP22kellyslater_controller");

void *BeachCameraCtor(
    void *self,
    const entity_id &id,
    entity *target,
    kellyslater_controller *controller
) {
    AutoCameraCtor(self, id, target, controller);
    ((beach_camera_layout *)self)->vtable = beach_camera_vtable;
    return self;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00225E30)
// 0x00225E30 __16look_back_cameraRC9entity_idP6entity
class entity_id;
class entity;
asm(".equ __11game_cameraRC9entity_idP6entity, 0x002C40A8");
asm(".equ init__16look_back_camera, 0x00225E70");
asm(".equ _vt$16look_back_camera, 0x004EC818");
class game_camera {
    char padding[8];
public:
    game_camera(const entity_id &id, entity *target);
    virtual ~game_camera();
};
class look_back_camera : public game_camera {
public:
    look_back_camera(const entity_id &id, entity *target);
    virtual ~look_back_camera();
    void init();
};
look_back_camera::look_back_camera(const entity_id &id, entity *target)
    : game_camera(id, target)
{
    init();
}
#endif
