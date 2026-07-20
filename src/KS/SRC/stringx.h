// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00144388)
// 0x00144388 length__C7stringx
struct stringx_buffer {
    char padding[0x8];
    int char_length;
};

class stringx {
    char* chars;
    stringx_buffer* my_buf;
public:
    int length() const;
};

int stringx::length() const {
    return my_buf->char_length;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D84D0)
// 0x001D84D0 lock__7stringx
struct string_buf {
    char padding[4];
    int ref_count;
};

class stringx {
    char *chars;
    string_buf *my_buf;

public:
    void lock();
    void fork_data(int new_length = -1);
};

__asm__(".equ fork_data__7stringxi, 0x0034DF70");

void stringx::lock() {
    if (my_buf->ref_count < 2) {
        return;
    }
    fork_data();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
