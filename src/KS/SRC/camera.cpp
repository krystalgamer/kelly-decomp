// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C6200)
// 0x002C6200 camera_set_roll__12marky_cameraf
class marky_camera {
    char padding[0x2DC];
    float roll;
public:
    void camera_set_roll(float angle);
};

void marky_camera::camera_set_roll(float angle) {
    roll = angle;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C69B0)
// 0x002C69B0 camera_get_target__12marky_camera
class vector3d { public: float x; float y; float z; vector3d(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {} };
class marky_camera { public: vector3d camera_get_target(); };
vector3d marky_camera::camera_get_target() { return vector3d(0.0f, 0.0f, 0.0f); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C61E0)
// 0x002C61E0 camera_set_target__12marky_cameraRC8vector3d
struct vector3d { float x; float y; float z; vector3d &operator=(const vector3d &other) { x = other.x; y = other.y; z = other.z; return *this; } };
class marky_camera { char padding[0x2d0]; vector3d target; public: void camera_set_target(const vector3d &position); };
void marky_camera::camera_set_target(const vector3d &position) { target = position; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C61B0)
// 0x002C61B0 sync__12marky_cameraR6camera
class camera;

extern "C" void GameCameraSync(void *self, camera &other)
    __asm__("sync__11game_cameraR6camera");
__asm__(".equ sync__11game_cameraR6camera, 0x002C41B0");

class marky_camera {
    char padding[0x78];
    int flags;

public:
    void sync(camera &other);
};

void marky_camera::sync(camera &other) {
    if ((flags >> 20) & 1) {
        return;
    }
    GameCameraSync(this, other);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C38A8)
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
#endif
