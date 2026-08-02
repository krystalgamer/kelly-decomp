#include "KS/SRC/fcs.h"

// 0x003003A0 frame_advance__20force_control_systemf
void force_control_system::frame_advance(float time_inc)
{
    locked = false;
}

// 0x003003A8 reset_targets__20force_control_system
void force_control_system::reset_targets()
{
}
