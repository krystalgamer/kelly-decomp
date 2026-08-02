// Matching decompilation blocks selected by generated build shims.


// 0x00100200 get_axis_count__C18AISurferController
#include "KS/SRC/AIController.h"
#include "KS/SRC/joystick.h"

int AISurferController::get_axis_count() const {
    return JOY_PS2_NUM_AXES;
}

// 0x00100330 get_axis_id__C18AISurferControlleri
#include "KS/SRC/AIController.h"

axis_id_t AISurferController::get_axis_id(int axis) const {
    return axis;
}

// 0x00100568 clearButtons__18AISurferController
struct ai_button_layout {
    char padding[0x9c];
    float X, Y, XRight, YRight;
    bool ButtonX, ButtonO, ButtonSq, ButtonTr;
    bool ButtonL1, ButtonL2, ButtonL3, ButtonR1, ButtonR2, ButtonR3;
    bool ButtonSelect, ButtonStart;
};
extern "C" void clear_ai_buttons(ai_button_layout *self)
    __asm__("clearButtons__18AISurferController");
void clear_ai_buttons(ai_button_layout *self)
{
  self->X = self->Y = 0;
  self->ButtonX = self->ButtonO =
      self->ButtonSq = self->ButtonTr = false;
  self->ButtonL1 = self->ButtonL2 = self->ButtonL3 = false;
  self->ButtonR1 = self->ButtonR2 = self->ButtonR3 = false;
  self->ButtonStart = self->ButtonSelect = 0;
}

// 0x00103ED0 buttonStatus__18AISurferControlleri
#include "KS/SRC/AIController.h"

enum {
    PAD_U = 1,
    PAD_D = 2,
    PAD_L = 3,
    PAD_R = 4,
    PAD_CIRCLE = 9,
    PAD_CROSS = 10,
    PAD_TRIANGLE = 11,
    PAD_SQUARE = 12,
    PAD_L1 = 13,
    PAD_L2 = 14,
    PAD_R1 = 15,
    PAD_R2 = 16
};

__asm__(".equ fptodp, 0x003CD278");
__asm__(".equ dpcmp, 0x003CC658");

extern void *button_status_table[];
__asm__(".equ button_status_table, 0x004B7B00");

bool AISurferController::buttonStatus(int which)
{
    unsigned int index;
    static void *keep_labels[]
        __attribute__((used, section(".discard"))) = {
            &&button_up,
            &&button_down,
            &&button_left,
            &&button_right,
            &&button_default,
            &&button_default,
            &&button_default,
            &&button_default,
            &&button_circle,
            &&button_cross,
            &&button_triangle,
            &&button_square,
            &&button_l1,
            &&button_l2,
            &&button_r1,
            &&button_r2
        };
    (void)keep_labels;

    index = which - 1;
    if (index >= 16)
        goto button_default;
    goto *button_status_table[index];

button_left:
    return X < -.5;
button_right:
    return X > .5;
button_up:
    return Y < -.5;
button_down:
    return Y > .5;
button_square:
    return ButtonSq;
button_triangle:
    return ButtonTr;
button_circle:
    return ButtonO;
button_cross:
    return ButtonX;
button_l1:
    return ButtonL1;
button_l2:
    return ButtonL2;
button_r1:
    return ButtonR1;
button_r2:
    return ButtonR2;
button_default:
    return false;
}

__asm__(
    ".globl .L00103F04\n"
    ".equ .L00103F04, buttonStatus__18AISurferControlleri + 0x34\n"
    ".globl .L00103F0C\n"
    ".equ .L00103F0C, buttonStatus__18AISurferControlleri + 0x3C\n"
    ".globl .L00103F14\n"
    ".equ .L00103F14, buttonStatus__18AISurferControlleri + 0x44\n"
    ".globl .L00103F40\n"
    ".equ .L00103F40, buttonStatus__18AISurferControlleri + 0x70\n"
    ".globl .L00103F68\n"
    ".equ .L00103F68, buttonStatus__18AISurferControlleri + 0x98\n"
    ".globl .L00103F70\n"
    ".equ .L00103F70, buttonStatus__18AISurferControlleri + 0xA0\n"
    ".globl .L00103F78\n"
    ".equ .L00103F78, buttonStatus__18AISurferControlleri + 0xA8\n"
    ".globl .L00103F80\n"
    ".equ .L00103F80, buttonStatus__18AISurferControlleri + 0xB0\n"
    ".globl .L00103F88\n"
    ".equ .L00103F88, buttonStatus__18AISurferControlleri + 0xB8\n"
    ".globl .L00103F90\n"
    ".equ .L00103F90, buttonStatus__18AISurferControlleri + 0xC0\n"
    ".globl .L00103F98\n"
    ".equ .L00103F98, buttonStatus__18AISurferControlleri + 0xC8\n"
    ".globl .L00103FA0\n"
    ".equ .L00103FA0, buttonStatus__18AISurferControlleri + 0xD0\n"
    ".globl .L00103FA8\n"
    ".equ .L00103FA8, buttonStatus__18AISurferControlleri + 0xD8");

// Source implementation boundary.
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
#include "KS/SRC/AIController.h"

void AISurferController::vibrate(float intensity) {
}

// 0x00112D10 vibrate__18AISurferControlleriiii
#include "KS/SRC/AIController.h"

void AISurferController::vibrate(
    int flag,
    int power,
    int frequency,
    int increment) {
}

// 0x00112D18 stop_vibration__18AISurferController
#include "KS/SRC/AIController.h"

void AISurferController::stop_vibration() {
}

// 0x00112D20 is_vibrator_present__C18AISurferController
#include "KS/SRC/AIController.h"

bool AISurferController::is_vibrator_present() const {
    return false;
}

// 0x00112D28 is_connected__C18AISurferController
#include "KS/SRC/AIController.h"

bool AISurferController::is_connected() const {
    return true;
}

// 0x00112DA0 get_id__C18AISurferController
#include "KS/SRC/AIController.h"

device_id_t AISurferController::get_id() const {
    return device_id;
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
