// Matching decompilation blocks selected by generated build shims.

#ifndef KELLY_DECOMP_STRINGX_H
#define KELLY_DECOMP_STRINGX_H

struct string_buf {
    unsigned long long *data;
    int ref_count;
    int char_length;
    int block_length;
    int max_blocks;

    inline int compare(const char *text) const {
        const char *value =
            reinterpret_cast<const char *>(data);
        int index;
        for (index = 0; index < char_length; ++index) {
            if (text[index] == 0)
                return -1;
            if (value[index] == text[index])
                continue;
            if (text[index] > value[index])
                return 1;
            if (text[index] < value[index])
                return -1;
        }
        return text[index] == 0 ? 0 : 1;
    }
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
    stringx &operator=(const stringx &);
    inline const char *c_str() const { return chars; }
    inline char *data() const { return chars; }
    int length() const;
    int find(const char *text) const;
    void lock();
    void fork_data(int new_length = -1);
    inline int size() const { return my_buf->char_length; }
    inline bool operator==(const char *text) const {
        return my_buf->compare(text) == 0;
    }
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
