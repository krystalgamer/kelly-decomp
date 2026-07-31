// stringx definitions extracted by generated one-function shims.

#include "KS/SRC/stringx.h"

// 0x00144388 length__C7stringx
int stringx::length() const {
    return my_buf->char_length;
}

// 0x001D84D0 lock__7stringx
__asm__(".equ fork_data__7stringxi, 0x0034DF70");

void stringx::lock() {
    if (my_buf->ref_count < 2) {
        return;
    }
    fork_data();
    KELLY_DECOMP_COMPILER_BARRIER();
}
