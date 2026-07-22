// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001E25D0)
#include "KS/SRC/HWOSPS2/ps2_input_shared.h"
asm(".equ _17ps2_joypad_device$rdata, 0x005A39C0");
asm(".equ memset, 0x003D18D0");

// 0x001E25D0 clear_state__17ps2_joypad_device
void ps2_joypad_device::clear_state()
{
    memset(rdata, 0xFF, RDATA_SIZE);
    rdata[1] = PS2_JOYPAD_DUALSHOCK2;
    rdata[6] = 127;
    rdata[7] = 127;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E14D8)
// 0x001E14D8 get_id__C17ps2_joypad_device
class ps2_joypad_device {
    int device_id;
public:
    int get_id() const;
};

int ps2_joypad_device::get_id() const {
    return device_id;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E16C0)
// 0x001E16C0 get_axis_count__C17ps2_joypad_device
class ps2_joypad_device {
public:
    int get_axis_count() const;
};

int ps2_joypad_device::get_axis_count() const {
    return 23;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E16C8)
// 0x001E16C8 get_axis_id__C17ps2_joypad_devicei
class ps2_joypad_device {
public:
    int get_axis_id(int axis) const;
};

int ps2_joypad_device::get_axis_id(int axis) const {
    return axis;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2288)
// 0x001E2288 set_stick__17ps2_joypad_deviceiii
extern unsigned char ps2_rdata[];
__asm__(".equ ps2_rdata, 0x005A39C0");
class ps2_joypad_device { public: void set_stick(int stick, int x, int y); };
void ps2_joypad_device::set_stick(int stick, int x, int y) { if (stick == 0) { ps2_rdata[6] = x; ps2_rdata[7] = y; } else { ps2_rdata[4] = x; ps2_rdata[5] = y; } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E1690)
// 0x001E1690 is_vibrator_present__C17ps2_joypad_device
struct developer_options { char padding[0x4c]; int no_rumble; };
extern developer_options *developer_options_ptr;
__asm__(".equ developer_options_ptr, 0x0046B180");
class ps2_joypad_device { char padding[0x66]; signed char pad_type; public: bool is_vibrator_present() const; };
bool ps2_joypad_device::is_vibrator_present() const { if (developer_options_ptr->no_rumble) return false; return pad_type == 0x79; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2258)
// 0x001E2258 set_button_a__17ps2_joypad_deviceii
struct joypad_vtable {
    char padding[0x88];
    short adjustment;
    short padding2;
    void (*set_button_d)(void *self, int button, bool state);
};

class ps2_joypad_device {
    char padding[4];
    joypad_vtable *vtable;

public:
    void set_button_a(int button, int state);
};

void ps2_joypad_device::set_button_a(int button, int state) {
    joypad_vtable *table = vtable;
    table->set_button_d(
        (char *)this + table->adjustment,
        button,
        state > 127
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E1468)
// 0x001E1468 get_name__C17ps2_joypad_device
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char joypad_name[];
__asm__(".equ joypad_name, 0x004DE760");

class ps2_joypad_device {
public:
    stringx get_name() const;
};

stringx ps2_joypad_device::get_name() const
{
    return stringx(joypad_name);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E14A0)
// 0x001E14A0 get_name__C17ps2_joypad_devicei
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char joypad_name[];
__asm__(".equ joypad_name, 0x004DE760");

class ps2_joypad_device {
public:
    stringx get_name(int axis) const;
};

stringx ps2_joypad_device::get_name(int axis) const
{
    return stringx(joypad_name);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E1BB8)
// 0x001E1BB8 record_demo_stop__17ps2_joypad_device
asm(".equ close__7os_file, 0x001E03A0");
class os_file {
    char padding[0x0C];
    int opened;
public:
    bool is_open() const { return opened != 0; }
    void close();
};
class ps2_joypad_device {
    char padding_to_recording[0x78];
    int recording_demo;
    char padding_to_log[0x10];
    os_file demo_log;
public:
    void record_demo_stop();
};
void ps2_joypad_device::record_demo_stop()
{
    if (demo_log.is_open())
        demo_log.close();
    recording_demo = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E2218)
// 0x001E2218 set_button_d__17ps2_joypad_deviceib
extern unsigned char rdata[];
asm(".equ rdata, 0x005A39C0");
class ps2_joypad_device {
public:
    void set_button_d(int button_num, bool state);
};
void ps2_joypad_device::set_button_d(int button_num, bool state)
{
    int rdata_index = 2;
    if (button_num > 7) {
        rdata_index = 3;
        button_num -= 8;
    }
    rdata[rdata_index] &= ~(1 << button_num);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E16D0)
// 0x001E16D0 get_axis_old_state__C17ps2_joypad_deviceii
__asm__(".equ get_axis_state__C17ps2_joypad_deviceiPUc, 0x001E17D8");
typedef float rational_t; typedef int axis_id_t;
class ps2_joypad_device { public: char data[0x5c]; unsigned char *curr_rdata; unsigned char *prev_rdata; char data2[8]; int disconnected; int was_disconnected; rational_t get_axis_state(axis_id_t axis, int control_axis) const; rational_t get_axis_old_state(axis_id_t axis, int control_axis) const; rational_t get_axis_state(axis_id_t axis, unsigned char *rdata) const; };
rational_t ps2_joypad_device::get_axis_old_state(axis_id_t axis, int control_axis) const { if (axis != 22) return get_axis_state(axis, prev_rdata); rational_t result = 1.0f; if (was_disconnected != 1) result = 0.0f; return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E1790)
// 0x001E1790 get_axis_state__C17ps2_joypad_deviceii
__asm__(".equ get_axis_state__C17ps2_joypad_deviceiPUc, 0x001E17D8");
typedef float rational_t; typedef int axis_id_t;
class ps2_joypad_device { public: char data[0x5c]; unsigned char *curr_rdata; unsigned char *prev_rdata; char data2[8]; int disconnected; int was_disconnected; rational_t get_axis_state(axis_id_t axis, int control_axis) const; rational_t get_axis_state(axis_id_t axis, unsigned char *rdata) const; };
rational_t ps2_joypad_device::get_axis_state(axis_id_t axis, int control_axis) const { if (axis != 22) return get_axis_state(axis, curr_rdata); rational_t result = 1.0f; if (disconnected != 1) result = 0.0f; return result; }
#endif
