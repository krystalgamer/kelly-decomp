// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026F200)
// 0x0026F200 GetCameraType__11auto_camera
class auto_camera {
public:
    int GetCameraType();
};

int auto_camera::GetCameraType() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F2C0)
// 0x0026F2C0 GetCameraType__12beach_camera
class beach_camera {
public:
    int GetCameraType();
};

int beach_camera::GetCameraType() {
    return 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EE08)
// 0x0026EE08 _$_12debug_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_12debug_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EE80)
// 0x0026EE80 _$_16look_back_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_16look_back_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026EEF8)
// 0x0026EEF8 _$_13replay_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_13replay_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F010)
// 0x0026F010 _$_10fps_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_10fps_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F148)
// 0x0026F148 _$_11auto_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_11auto_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F170)
// 0x0026F170 init__11auto_camera
struct camera_vtable_layout { char padding[0x628]; short adjustment; short padding2; void (*reset)(void *self); };
class auto_camera { char padding[8]; camera_vtable_layout *vtable; public: void init(); };
void auto_camera::init() { camera_vtable_layout *table = vtable; table->reset((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F1D8)
// 0x0026F1D8 OnNewWave__11auto_camera
struct camera_vtable_layout { char padding[0x628]; short adjustment; short padding2; void (*reset)(void *self); };
class auto_camera { char padding[8]; camera_vtable_layout *vtable; public: void OnNewWave(); };
void auto_camera::OnNewWave() { camera_vtable_layout *table = vtable; table->reset((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F210)
// 0x0026F210 _$_12beach_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_12beach_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F318)
// 0x0026F318 _$_15big_wave_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_15big_wave_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F340)
// 0x0026F340 init__15big_wave_camera
struct camera_vtable_layout { char padding[0x628]; short adjustment; short padding2; void (*reset)(void *self); };
class big_wave_camera { char padding[8]; camera_vtable_layout *vtable; public: void init(); };
void big_wave_camera::init() { camera_vtable_layout *table = vtable; table->reset((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F4B0)
// 0x0026F4B0 _$_13follow_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_13follow_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026F528)
// 0x0026F528 _$_19follow_close_camera
extern "C" void CameraDtor(void *self, int deleting) __asm__("_$_6camera");
extern const char camera_vtable[];
__asm__(".equ _$_6camera, 0x002C38A8");
__asm__(".equ camera_vtable, 0x004F3AD0");
struct camera_layout { char padding[8]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_19follow_close_camera");
void DerivedDtor(void *self, int deleting) { ((camera_layout *)self)->vtable = camera_vtable; CameraDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
