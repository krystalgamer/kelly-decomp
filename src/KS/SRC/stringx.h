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
