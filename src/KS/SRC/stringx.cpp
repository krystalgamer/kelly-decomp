// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034D358)
// 0x0034D358 clear__10string_buf
extern "C" void *memset(void *destination, int value, unsigned int size);
__asm__(".equ memset, 0x003D18D0");
class string_buf { void *data; char padding[12]; unsigned int max_blocks; public: void clear(); };
void string_buf::clear() { memset(data, 0, max_blocks * 8); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E148)
// 0x0034E148 __apl__7stringxRC7stringx
class stringx { public: stringx &operator+=(const stringx &other); void append(const stringx &other); };
__asm__(".equ append__7stringxRC7stringx, 0x0034E528");
stringx &stringx::operator+=(const stringx &other) { append(other); return *this; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E118)
// 0x0034E118 __as__7stringxPCc
class stringx {
public:
    stringx &operator=(const char *text);
    void copy(const char *text, int length = -1);
};

__asm__(".equ copy__7stringxPCci, 0x0034E270");

stringx &stringx::operator=(const char *text) {
    copy(text);
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E170)
// 0x0034E170 __apl__7stringxPCc
class stringx {
public:
    stringx &operator+=(const char *text);
    void append(const char *text, int length = -1);
};

__asm__(".equ append__7stringxPCci, 0x0034E3F0");

stringx &stringx::operator+=(const char *text) {
    append(text);
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E7C0)
// 0x0034E7C0 rfind__C7stringxc
struct string_buf {
    char padding[8];
    int char_length;
};

class stringx {
    char *chars;
    string_buf *my_buf;

public:
    int rfind(char value) const;
    int rfind(char value, int position) const;
};

__asm__(".equ rfind__C7stringxci, 0x0034E750");

int stringx::rfind(char value) const {
    return rfind(value, my_buf->char_length - 1);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034D728)
// 0x0034D728 is_buffer_mine__C7stringxP10string_buf
class string_buf;

extern char string_buffers_begin[];
extern char string_buffers_end[];
__asm__(".equ string_buffers_begin, 0x005A5660");
__asm__(".equ string_buffers_end, 0x006114F0");

class stringx {
public:
    bool is_buffer_mine(string_buf *buffer) const;
};

bool stringx::is_buffer_mine(string_buf *buffer) const
{
    register bool result __asm__("$2");
    __asm__ volatile(
        ".set noreorder\n\t"
        "lui $2,0x5a\n\t"
        "addiu $2,$2,22112\n\t"
        "sltu $2,$5,$2\n\t"
        "bnez $2,2f\n\t"
        "daddu $2,$0,$0\n\t"
        "lui $3,0x61\n\t"
        "addiu $3,$3,5360\n\t"
        "sltu $3,$5,$3\n\t"
        "bnez $3,2f\n\t"
        "addiu $2,$0,1\n\t"
        "daddu $2,$0,$0\n"
        "2:\n\t"
        ".set reorder"
        : "=r"(result)
        : "r"(buffer)
        : "$3"
    );
    return result;
}
#endif
