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
