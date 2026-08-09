#ifndef PS2_INPUT_H
#define PS2_INPUT_H

#pragma interface

#include "KS/SRC/inputmgr.h"
#include "KS/SRC/osfile.h"

extern "C" void* memset(void*, int, unsigned int);

#define RDATA_SIZE 32
#define PS2_JOYPAD_DUALSHOCK2 (char)0x79

class ps2_joypad_device : public input_device {
public:
    ps2_joypad_device(int port = 0, int slot = 0);
    virtual ~ps2_joypad_device();
    virtual stringx get_name() const;
    virtual stringx get_name(int axis) const;
    virtual device_id_t get_id() const;
    virtual int get_axis_count() const;
    virtual axis_id_t get_axis_id(int axis) const;
    virtual rational_t get_axis_state(axis_id_t axis, int control_axis) const;
    virtual rational_t get_axis_old_state(axis_id_t axis, int control_axis) const;
    virtual rational_t get_axis_delta(axis_id_t axis, int control_axis) const;
    virtual void vibrate(float intensity);
    virtual void vibrate(
        int vibrator_flag,
        int vibrator_power,
        int vibrator_frequency,
        int vibrator_increment);
    virtual void stop_vibration();
    virtual bool is_vibrator_present() const;
    virtual void poll();
    virtual bool is_connected() const;
    virtual void set_button_d(int button, bool state);
    virtual void set_button_a(int button, int state);
    virtual void set_stick(int stick, int x, int y);
    virtual void clear_state();

private:
    int pad_id;
    int term_id;
    int g_error_count;
    int phase;
    int state;
    unsigned char rdata1[RDATA_SIZE];
    unsigned char rdata2[RDATA_SIZE];
    unsigned char* curr_rdata;
    unsigned char* prev_rdata;
    static unsigned char rdata[RDATA_SIZE];
    char port_id;
    char slot_id;
    char pad_type;
    bool port_opened;
    int disconnected;
    int was_disconnected;
    char data_before_recording_demo[4];
    int recording_demo;
    char data_before_demo_log[0x10];
    os_file demo_log;
    rational_t get_axis_state(axis_id_t axis, unsigned char *data) const;

public:
    void record_demo_stop();
};

#endif
