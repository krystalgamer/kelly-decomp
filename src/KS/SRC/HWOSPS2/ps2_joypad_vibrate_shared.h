#ifndef KELLY_DECOMP_PS2_JOYPAD_VIBRATE_SHARED_H
#define KELLY_DECOMP_PS2_JOYPAD_VIBRATE_SHARED_H

class os_developer_options {
    char built_fields[0x4c];
    bool no_rumble;

public:
    static os_developer_options *instance;
    static inline os_developer_options *inst() {
        return instance;
    }
    inline bool rumble_disabled() const {
        return no_rumble;
    }
};

class ps2_joypad_device {
    char built_fields[100];
    signed char port_id;

public:
    void vibrate(
        int vibrator_flag,
        int vibrator_power,
        int vibrator_frequency,
        int vibrator_increment);
};

extern "C" int scePadSetActDirect(
    int port,
    int slot,
    unsigned char *motors);
extern "C" void *memset(
    void *destination,
    int value,
    unsigned int size);

__asm__(".equ _20os_developer_options$instance, 0x0046B180");
__asm__(".equ scePadSetActDirect, 0x003BBC68");
__asm__(".equ memset, 0x003D18D0");

#endif
