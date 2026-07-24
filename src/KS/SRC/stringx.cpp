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

#if defined(KELLY_DECOMP_FUNCTION_0034D3E0)
// 0x0034D3E0 __7stringx
struct string_buf { char *data; };
extern int stringx_initialized;
extern const char empty_text[];
extern "C" void StringInit() __asm__("init__7stringx");
extern "C" string_buf *Acquire(const char *text, int length)
    __asm__("acquire_buffer__7stringxPCci");
__asm__(".equ stringx_initialized, 0x0046DB1C");
__asm__(".equ empty_text, 0x00500D28");
__asm__(".equ init__7stringx, 0x0034D850");
__asm__(".equ acquire_buffer__7stringxPCci, 0x0034DA48");
class stringx {
    char *chars;
    string_buf *my_buf;
public:
    stringx();
};
stringx::stringx() {
    if (!stringx_initialized)
        StringInit();
    my_buf=Acquire(empty_text,-1);
    chars=my_buf->data;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E300)
// 0x0034E300 copy__7stringxR7stringx
struct string_buf {
    char *data;
    int ref_count;
};
extern "C" void AddCache(string_buf *buffer)
    __asm__("add_buf_to_cache__7stringxP10string_buf");
__asm__(".equ release_buffer__7stringx, 0x0034D760");
__asm__(".equ add_buf_to_cache__7stringxP10string_buf, 0x0034DEB8");
class stringx {
    char *chars;
    string_buf *my_buf;
public:
    void release_buffer();
    void copy(stringx &other);
};
void stringx::copy(stringx &other) {
    release_buffer();
    my_buf=other.my_buf;
    ++my_buf->ref_count;
    AddCache(my_buf);
    chars=my_buf->data;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034D380)
// 0x0034D380 null_terminate__C10string_buf
extern const char length_error[];
extern "C" void report_error(const char *,...)
    __asm__("error__FPCce");
__asm__(".equ length_error, 0x005032F8");
__asm__(".equ error__FPCce, 0x001DFBD8");
class string_buf {
    unsigned long long *data;
    int ref_count;
    int char_length;
    int block_length;
    int max_blocks;
public:
    void null_terminate() const;
};
void string_buf::null_terminate() const {
    char *chars=(char *)data;
    int capacity=max_blocks*8-1;
    if (char_length>capacity)
        report_error(length_error,char_length,capacity);
    register int length __asm__("$2")=char_length;
    chars[length]=0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E0B8)
// 0x0034E0B8 __as__7stringxRC7stringx
struct string_buf {
    void *data;
    int ref_count;
};
class stringx {
    char *chars;
    string_buf *my_buf;
public:
    void release_buffer();
    static void add_buf_to_cache(string_buf *buffer);
    stringx &operator=(const stringx &copy);
};
__asm__(".equ release_buffer__7stringx, 0x0034D760");
__asm__(".equ add_buf_to_cache__7stringxP10string_buf, 0x0034DEB8");
stringx &stringx::operator=(const stringx &copy) {
    release_buffer();
    my_buf=copy.my_buf;
    my_buf->ref_count++;
    add_buf_to_cache(my_buf);
    chars=(char *)my_buf->data;
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034D4D0)
// 0x0034D4D0 __7stringxRC7stringx
struct string_buf { void *data; int ref_count; };
extern int stringx_initialized;
extern "C" void initialize_stringx() __asm__("init__7stringx");
__asm__(".equ stringx_initialized,0x0046DB1C");
__asm__(".equ init__7stringx,0x0034D850");
class stringx { char *chars; string_buf *my_buf; public: stringx(const stringx &copy); };
stringx::stringx(const stringx &copy)
{
    if (!stringx_initialized)
        initialize_stringx();
    my_buf = copy.my_buf;
    ++my_buf->ref_count;
    chars = (char *)my_buf->data;
}
#endif
