// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00347118)
#include "KS/SRC/mustash_shared.h"

__asm__(".equ arch_memalign__FUiUiPCci, 0x002AC740");
__asm__(".equ acquire_stash_bufferspace_desc, 0x00502808");

// 0x00347118 acquire_stash_bufferspace__10multistashi
void multistash::acquire_stash_bufferspace(int size) {
    big_ass_buffer = (unsigned char *)arch_memalign(
        128, size, acquire_stash_bufferspace_desc, 0);
    big_ass_buffer_max = size;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00347230)
#include "KS/SRC/mustash_shared.h"

// 0x00347230 add_temp__5stashR7os_filePUcUi
unsigned int stash::add_temp(
    os_file &the_file,
    unsigned char *raw_data,
    unsigned int data_size)
{
    the_file.write(raw_data, data_size);
    multistash &current = substash[curstash];
    unsigned int ret_val = current.temp_buf_end;
    current.temp_buf_end += data_size;
    return ret_val;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003471E0)
#include "KS/SRC/mustash_shared.h"

// 0x003471E0 add_stored__5stashR7os_filePUcUi
unsigned int stash::add_stored(
    os_file &the_file,
    unsigned char *raw_data,
    unsigned int data_size)
{
    the_file.write(raw_data, data_size);
    multistash &current = substash[curstash];
    unsigned int ret_val = current.stored_buf_end;
    current.stored_buf_end += data_size;
    return ret_val;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003480D0)
// 0x003480D0 get_name__C5stash
class pstring {};

class stash {
    char padding[0x18];
    pstring fullname;
public:
    const pstring& get_name() const;
};

const pstring& stash::get_name() const {
    return fullname;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003480E8)
// 0x003480E8 get_size__5stash
struct stash_index { char padding[0x24]; int size; };
class stash { stash_index* index; public: int get_size(); };
int stash::get_size() { return index->size; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00346FC0)
// 0x00346FC0 free_stored__5stashi
class multistash {
    char storage[0x318];

public:
    void free_stored();
};

__asm__(".equ free_stored__10multistash, 0x00346FF0");

extern multistash substash[];
__asm__(".equ substash, 0x0046B7B8");

class stash {
public:
    static void free_stored(int stashid);
};

void stash::free_stored(int stashid) {
    substash[stashid].free_stored();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00345BC0)
// 0x00345BC0 WaitForStashLoad__5stash
extern int LoadNewStashSema;
__asm__(".equ LoadNewStashSema, 0x0046ABCC");

extern "C" int WaitSema(int semaphore);
extern "C" int SignalSema(int semaphore);
__asm__(".equ WaitSema, 0x003DB6A0");
__asm__(".equ SignalSema, 0x003DB680");

class stash {
public:
    static void WaitForStashLoad();
};

void stash::WaitForStashLoad()
{
    WaitSema(LoadNewStashSema);
    SignalSema(LoadNewStashSema);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00347CE0)
// 0x00347CE0 open__5stashPCc
class pstring {
    char data[0x20];

public:
    void pack_string(const char *text);
};

__asm__(".equ pack_string__7pstringPCc, 0x003354D0");

class stash {
public:
    bool open(const char *name);
    bool open(const pstring &name);
};

__asm__(".equ open__5stashRC7pstring, 0x00347D18");

bool stash::open(const char *name)
{
    pstring packed;
    packed.pack_string(name);
    return open(packed);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00346F80)
// 0x00346F80 close_stash__10multistash
extern "C" void arch_free(void *pointer) __asm__("arch_free__FPv");
__asm__(".equ arch_free__FPv, 0x002AC768");
class multistash {
    char padding0[0x26C];
    void *temp_buf;
    char padding1[0x54];
    int pre_opened;
    char padding2[0x18];
    int stash_file_is_open;
public:
    void close_stash();
};
void multistash::close_stash()
{
    if (temp_buf != 0)
        arch_free(temp_buf);
    temp_buf = 0;
    stash_file_is_open = false;
    pre_opened = false;
}
#endif
