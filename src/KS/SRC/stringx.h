// Matching decompilation blocks selected by generated build shims.

#ifndef KELLY_DECOMP_STRINGX_H
#define KELLY_DECOMP_STRINGX_H

struct string_buf {
    unsigned long long *data;
    int ref_count;
    int char_length;
    int block_length;
    int max_blocks;
};

class stringx {
protected:
    char *chars;
    string_buf *my_buf;

public:
    stringx();
    stringx(const stringx &);
    stringx(const char *, int = -1);
    explicit stringx(float);
    explicit stringx(int);
    explicit stringx(unsigned int);
    ~stringx();
    int length() const;
    void lock();
    void fork_data(int new_length = -1);
};

#if defined(KELLY_DECOMP_FUNCTION_00144388)
// 0x00144388 length__C7stringx
int stringx::length() const {
    return my_buf->char_length;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D84D0)
// 0x001D84D0 lock__7stringx
__asm__(".equ fork_data__7stringxi, 0x0034DF70");

void stringx::lock() {
    if (my_buf->ref_count < 2) {
        return;
    }
    fork_data();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#endif
