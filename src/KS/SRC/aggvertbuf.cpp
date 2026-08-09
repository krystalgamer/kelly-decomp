// Matching decompilation blocks selected by generated build shims.


// 0x003381B0 __18aggregate_vert_buf
#include "KS/SRC/aggvertbuf.h"

aggregate_vert_buf::aggregate_vert_buf() : mat(0), frame(0), force_flags(0), nquads(0), vertbuf(), send_flags(0), locked(false) {}

// 0x003382B0 unlock__18aggregate_vert_buf
#include "KS/SRC/aggvertbuf.h"

__asm__(".equ unlock__16vert_buf_xformed, 0x001E2C70");

void aggregate_vert_buf::unlock() {
    vertbuf->unlock();
    locked = false;
}
