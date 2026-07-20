// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003382E0)
// 0x003382E0 flush__18aggregate_vert_buf
class aggregate_vert_buf {
public:
    void flush();
};

void aggregate_vert_buf::flush() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003381B0)
// 0x003381B0 __18aggregate_vert_buf
class aggregate_vert_buf { int fields[7]; public: aggregate_vert_buf(); };
aggregate_vert_buf::aggregate_vert_buf() { fields[0] = 0; fields[1] = 0; fields[2] = 0; fields[3] = 0; fields[4] = 0; fields[5] = 0; fields[6] = 0; }
#endif

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
