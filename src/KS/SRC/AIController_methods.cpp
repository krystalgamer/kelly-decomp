// Matching decompilation blocks selected by generated build shims.

// 0x00112C90 __tf18AISurferController
#include "KS/SRC/AIController.h"
#include "KS/SRC/rtti.h"

extern "C" void **input_device_rtti() __asm__("__tf12input_device");
extern "C" void *input_device_type[] __asm__("__ti12input_device");
extern "C" void *aisurfer_type[] __asm__("__ti18AISurferController");
extern "C" const char aisurfer_name[];

__asm__(".equ __tf12input_device, 0x0035FED0");
__asm__(".equ __ti12input_device, 0x00511FB0");
__asm__(".equ __ti18AISurferController, 0x005A2668");
__asm__(".equ aisurfer_name, 0x004C87E0");

extern "C" void **aisurfer_rtti() __asm__("__tf18AISurferController");
void **aisurfer_rtti()
{
    if (!aisurfer_type[0]) {
        input_device_rtti();
        __rtti_si(aisurfer_type, aisurfer_name, input_device_type);
    }
    return aisurfer_type;
}


// 0x00112D08 vibrate__18AISurferControllerf
extern "C" void ai_vibrate_float(void *self, float intensity)
    __asm__("vibrate__18AISurferControllerf");
void ai_vibrate_float(void *self, float intensity) {
}

// 0x00112D10 vibrate__18AISurferControlleriiii
extern "C" void ai_vibrate_int(
    void *self,
    int flag,
    int power,
    int frequency,
    int increment
) __asm__("vibrate__18AISurferControlleriiii");
void ai_vibrate_int(
    void *self,
    int flag,
    int power,
    int frequency,
    int increment
) {
}

// 0x00112D18 stop_vibration__18AISurferController
extern "C" void ai_stop_vibration(void *self)
    __asm__("stop_vibration__18AISurferController");
void ai_stop_vibration(void *self) {
}

// 0x00112D20 is_vibrator_present__C18AISurferController
extern "C" bool ai_has_vibrator(const void *self)
    __asm__("is_vibrator_present__C18AISurferController");
bool ai_has_vibrator(const void *self) {
    return false;
}

// 0x00112D28 is_connected__C18AISurferController
extern "C" bool ai_is_connected(const void *self)
    __asm__("is_connected__C18AISurferController");
bool ai_is_connected(const void *self) {
    return true;
}

// 0x00112DA0 get_id__C18AISurferController
struct ai_device_layout {
    int device_id;
};

extern "C" int ai_get_id(const ai_device_layout *self)
    __asm__("get_id__C18AISurferController");
int ai_get_id(const ai_device_layout *self) {
    return self->device_id;
}

// 0x00112CE0 _$_18AISurferController
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_12input_device");
extern const char derived_vtable[];
__asm__(".equ _$_12input_device, 0x00343938");
__asm__(".equ derived_vtable, 0x004B8508");
struct AISurferLayout { int device_id; const void *vtable; };
extern "C" void AISurferDtor(void *self, int deleting) __asm__("_$_18AISurferController");
void AISurferDtor(void *self, int deleting) { ((AISurferLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00112D30 get_name__C18AISurferController
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char ai_controller_name[];
__asm__(".equ ai_controller_name, 0x004B78E8");

extern "C" stringx ai_get_name(const void *self)
    __asm__("get_name__C18AISurferController");
stringx ai_get_name(const void *self)
{
    return stringx(ai_controller_name);
}

// 0x00112D68 get_name__C18AISurferControlleri
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char ai_controller_axis_name[];
__asm__(".equ ai_controller_axis_name, 0x004B78F8");

extern "C" stringx ai_get_axis_name(const void *self, int axis)
    __asm__("get_name__C18AISurferControlleri");
stringx ai_get_axis_name(const void *self, int axis)
{
    return stringx(ai_controller_axis_name);
}
