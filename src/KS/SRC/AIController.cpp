// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00100200)
// 0x00100200 get_axis_count__C18AISurferController
class AISurferController {
public:
    int get_axis_count() const;
};

int AISurferController::get_axis_count() const {
    return 23;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00100330)
// 0x00100330 get_axis_id__C18AISurferControlleri
class AISurferController {
public:
    int get_axis_id(int axis) const;
};

int AISurferController::get_axis_id(int axis) const {
    return axis;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00100568)
// 0x00100568 clearButtons__18AISurferController
class AISurferController {
    char padding[0x9c];
    float X, Y, XRight, YRight;
    bool ButtonX, ButtonO, ButtonSq, ButtonTr;
    bool ButtonL1, ButtonL2, ButtonL3, ButtonR1, ButtonR2, ButtonR3;
    bool ButtonSelect, ButtonStart;
public:
    void clearButtons();
};
void AISurferController::clearButtons()
{
  X = Y = 0;
  ButtonX = ButtonO = ButtonSq = ButtonTr = false;
  ButtonL1 = ButtonL2 = ButtonL3 = false;
  ButtonR1 = ButtonR2 = ButtonR3 = false;
  ButtonStart = ButtonSelect = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00103ED0)
// 0x00103ED0 buttonStatus__18AISurferControlleri
#include "KS/SRC/ai_rtti_shared.h"

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
#endif
