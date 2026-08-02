// Released script-controller accessors.

#include "KS/SRC/script_lib_controller.h"

extern const char script_signal_name_literal[];

// 0x003196B8 get_signal_name__C17script_controllerUs
const char *script_controller::get_signal_name(
    unsigned short index) const
{
    return script_signal_name_literal;
}
