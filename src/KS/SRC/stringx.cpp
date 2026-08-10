// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0034E638)
// 0x0034E638 find__C7stringxPCc
#include "KS/SRC/stringx.h"

extern "C" unsigned int strlen(const char *text);
__asm__(".equ strlen, 0x003D40E0");

int stringx::find(const char *str) const
{
    int sl;
    sl = strlen(str);
    for (int i = 0; i <= my_buf->char_length - sl; i++)
    {
        int c;
        for (c = 0; c < sl; c++)
        {
            if (chars[i + c] != str[c])
                break;
        }
        if (c == sl)
            return i;
    }

    return -1;
}
#endif


// 0x0034D358 clear__10string_buf
#include "KS/SRC/stringx.h"

extern "C" void *clear_memory(
    void *destination,
    int value,
    unsigned int size)
    __asm__("memset");
__asm__(".equ memset, 0x003D18D0");

void string_buf::clear()
{
    void *(*clear)(void *, int, unsigned int) = clear_memory;
    clear(data, 0, max_blocks * 8);
}

// 0x0034E148 __apl__7stringxRC7stringx
#include "KS/SRC/stringx.h"

__asm__(".equ append__7stringxRC7stringx, 0x0034E528");

stringx &stringx::operator+=(const stringx &other)
{
    append(other);
    return *this;
}

// 0x0034E118 __as__7stringxPCc
#include "KS/SRC/stringx.h"

__asm__(".equ copy__7stringxPCci, 0x0034E270");

stringx &stringx::operator=(const char *text) {
    copy(text);
    return *this;
}

// 0x0034E170 __apl__7stringxPCc
#include "KS/SRC/stringx.h"

__asm__(".equ append__7stringxPCci, 0x0034E3F0");

stringx &stringx::operator+=(const char *text) {
    append(text);
    return *this;
}

// 0x0034E7C0 rfind__C7stringxc
#include "KS/SRC/stringx.h"

__asm__(".equ rfind__C7stringxci, 0x0034E750");

int stringx::rfind(char value) const {
    return rfind(value, my_buf->char_length - 1);
}

#if defined(KELLY_DECOMP_FUNCTION_0034D3E0)
// 0x0034D3E0 __7stringx
#include "KS/SRC/stringx.h"

extern int stringx_initialized;
extern const char empty_text[];
extern "C" void StringInit() __asm__("init__7stringx");
extern "C" string_buf *Acquire(const char *text, int length)
    __asm__("acquire_buffer__7stringxPCci");
__asm__(".equ stringx_initialized, 0x0046DB1C");
__asm__(".equ empty_text, 0x00500D28");
__asm__(".equ init__7stringx, 0x0034D850");
__asm__(".equ acquire_buffer__7stringxPCci, 0x0034DA48");
stringx::stringx() {
    if (!stringx_initialized)
        StringInit();
    my_buf=Acquire(empty_text,-1);
    chars=(char *)my_buf->data;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E300)
// 0x0034E300 copy__7stringxR7stringx
#include "KS/SRC/stringx.h"

extern "C" void AddCache(string_buf *buffer)
    __asm__("add_buf_to_cache__7stringxP10string_buf");
__asm__(".equ release_buffer__7stringx, 0x0034D760");
__asm__(".equ add_buf_to_cache__7stringxP10string_buf, 0x0034DEB8");
void stringx::copy(stringx &other) {
    release_buffer();
    my_buf=other.my_buf;
    ++my_buf->ref_count;
    AddCache(my_buf);
    chars=(char *)my_buf->data;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E0B8)
// 0x0034E0B8 __as__7stringxRC7stringx
#include "KS/SRC/stringx.h"

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
#include "KS/SRC/stringx.h"

extern int stringx_initialized;
extern "C" void initialize_stringx() __asm__("init__7stringx");
__asm__(".equ stringx_initialized,0x0046DB1C");
__asm__(".equ init__7stringx,0x0034D850");
stringx::stringx(const stringx &copy)
{
    if (!stringx_initialized)
        initialize_stringx();
    my_buf = copy.my_buf;
    ++my_buf->ref_count;
    chars = (char *)my_buf->data;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034DC20)
// 0x0034DC20 find_large_buffer__7stringx
struct string_buf{char p0[4];int ref;};extern string_buf*free_long_buffers[];extern unsigned free_long_buffers_end;extern "C" void error(const char*,...) __asm__("error__FPCce");__asm__(".equ free_long_buffers,0x00626CB0");__asm__(".equ free_long_buffers_end,0x005121C8");__asm__(".equ error__FPCce,0x001DFBD8");extern const char error_text[];__asm__(".equ error_text,0x00503348");extern "C" string_buf*find_buffer() __asm__("find_large_buffer__7stringx");string_buf*find_buffer(){string_buf*buf=0;do{unsigned end=free_long_buffers_end;if(!end)goto exhausted;end--;free_long_buffers_end=end;buf=free_long_buffers[end];}while(!buf||buf->ref>0);return buf;exhausted:error(error_text);return 0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E1A0)
// 0x0034E1A0 aggressively_cache_buffer__7stringx
struct string_buf{char*data;int ref;int char_length;};extern "C" string_buf*find_cached(const char*,int)__asm__("find_cached_string__7stringxPCci");struct stringx{char*chars;string_buf*my_buf;void release_buffer();bool aggressively_cache_buffer()__asm__("aggressively_cache_buffer__7stringx");};__asm__(".equ find_cached_string__7stringxPCci,0x0034DD88");__asm__(".equ release_buffer__7stringx,0x0034D760");bool stringx::aggressively_cache_buffer(){string_buf*tmp=find_cached(chars,my_buf->char_length);if(tmp!=0&&tmp!=my_buf){release_buffer();my_buf=tmp;chars=my_buf->data;return true;}else if(tmp==my_buf){tmp->ref--;}return false;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034E270)
// 0x0034E270 copy__7stringxPCci
struct string_buf{char*data;};class stringx{public:char*chars;string_buf*my_buf;void release_buffer()__asm__("release_buffer__7stringx");static string_buf*acquire_buffer(const char*,int)__asm__("acquire_buffer__7stringxPCci");void copy(const char*,int)__asm__("copy__7stringxPCci");};extern "C" unsigned strlen(const char*);extern const char empty[];extern "C" void rec(stringx*,const char*,int)__asm__("copy_alias");__asm__(".equ release_buffer__7stringx,0x0034D760");__asm__(".equ acquire_buffer__7stringxPCci,0x0034DA48");__asm__(".equ strlen,0x003D40E0");__asm__(".equ empty,0x00500D28");__asm__(".equ copy_alias,0x0034E270");void stringx::copy(const char*str,int len){if(str==0){rec(this,empty,-1);asm volatile("");return;}if(len==-1)len=strlen(str);release_buffer();my_buf=acquire_buffer(str,len);chars=my_buf->data;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034D438)
// 0x0034D438 __7stringxPCci
struct string_buf{void*data;};extern int stringx_initialized;extern const char null_text[];extern "C" void init_stringx() __asm__("init__7stringx");extern "C" int string_len(const char*) __asm__("strlen");extern "C" string_buf*acquire(const char*,int) __asm__("acquire_buffer__7stringxPCci");asm(".equ stringx_initialized,0x0046DB1C");asm(".equ null_text,0x00500D28");asm(".equ init__7stringx,0x0034D850");asm(".equ strlen,0x003D40E0");asm(".equ acquire_buffer__7stringxPCci,0x0034DA48");class stringx{char*chars;string_buf*my_buf;public:stringx(const char*,int) __asm__("__7stringxPCci");};stringx::stringx(const char*str,int len){if(!stringx_initialized)init_stringx();char*s=(char*)str;if(s==0)s=(char*)null_text;if(len==-1)len=string_len(s);my_buf=acquire(str,len);chars=(char*)my_buf->data;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034EA00)
// 0x0034EA00 remove_leading__7stringxPCc
class stringx{char*chars;struct buf{void*data;int ref;int length;}*my_buf;public:stringx();~stringx();stringx substr(int,int)const;void copy(stringx&);void remove_leading(const char*);inline int length()const{return my_buf->length;}inline stringx slice(int start,int end)const{if(start<0)start+=length();if(end<0)end+=length();return substr(start,end-start);}};extern "C" char*find_char(const char*,int)__asm__("strchr");asm(".equ strchr,0x003D3CF8");asm(".equ substr__C7stringxii,0x0034E910");asm(".equ copy__7stringxR7stringx,0x0034E300");asm(".equ _$_7stringx,0x0034D6E0");void stringx::remove_leading(const char*remove){int start;for(start=0;start<length()&&find_char(remove,chars[start])!=0;start++)continue;register buf*b asm("$5")=my_buf;stringx result=slice(start,b->length);copy(result);}
#endif

// Source implementation boundary.
// 0x00144388 length__C7stringx
#include "KS/SRC/stringx.h"
int stringx::length() const {
    return my_buf->char_length;
}

// 0x001D84D0 lock__7stringx
#include "KS/SRC/stringx.h"
__asm__(".equ fork_data__7stringxi, 0x0034DF70");
void fork_string_data(stringx *value, int length)
    __asm__("fork_data__7stringxi");

void stringx::lock() {
    if (my_buf->ref_count < 2) {
        return;
    }
    void (*fork)(stringx *, int) = fork_string_data;
    fork(this, -1);
}
