// Matching decompilation blocks selected by generated build shims.


// 0x003381B0 __18aggregate_vert_buf
#include "KS/SRC/aggvertbuf.h"

aggregate_vert_buf::aggregate_vert_buf() : mat(0), frame(0), force_flags(0), nquads(0), vertbuf(), send_flags(0), locked(false) {}

#if defined(KELLY_DECOMP_FUNCTION_003382B0)
// 0x003382B0 unlock__18aggregate_vert_buf
class vert_buf_xformed {
public:
    void unlock();
};

__asm__(".equ unlock__16vert_buf_xformed, 0x001E2C70");

class aggregate_vert_buf {
    char padding0[0x10];
    vert_buf_xformed *vertbuf;
    char padding1[4];
    bool locked;

public:
    void unlock();
};

void aggregate_vert_buf::unlock() {
    vertbuf->unlock();
    locked = false;
}
#endif
