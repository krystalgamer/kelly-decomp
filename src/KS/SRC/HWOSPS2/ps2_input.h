#ifndef PS2_INPUT_H
#define PS2_INPUT_H

#pragma interface

#include "KS/SRC/inputmgr.h"

extern "C" void* memset(void*, int, unsigned int);

#define RDATA_SIZE 32
#define PS2_JOYPAD_DUALSHOCK2 (char)0x79

class ps2_joypad_device : public input_device {
public:
    void clear_state();
    bool is_connected() const;
    device_id_t get_id() const;
    int get_axis_count() const;
    axis_id_t get_axis_id(int axis) const;
    virtual void set_stick(int stick, int x, int y);

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
};

#endif
