// Released script-manufacturing accessors.

#include "KS/SRC/script_lib_mfg.h"

extern const char script_signal_name_literal[];

// 0x0031A078 get_signal_name__C10script_mfgUs
const char *script_mfg::get_signal_name(unsigned short index) const
{
    return script_signal_name_literal;
}
