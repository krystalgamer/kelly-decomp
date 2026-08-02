// Matching decompilation blocks selected by generated build shims.


// 0x001E9728 is_connected__C17ps2_joypad_device
#include "KS/SRC/HWOSPS2/ps2_input.h"

bool ps2_joypad_device::is_connected() const {
    return disconnected == 0;
}
