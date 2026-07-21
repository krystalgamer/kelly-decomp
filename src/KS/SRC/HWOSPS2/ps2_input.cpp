// Matching decompilation blocks selected by generated build shims.


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
