// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00337890)
#include "KS/SRC/textfile_shared.h"

__asm__(".equ work, 0x0046DCE8");
__asm__(".equ read__9text_filePci, 0x003378D8");
__asm__(".equ __as__7stringxPCc, 0x0034E118");

// 0x00337890 read__9text_fileP7stringx
void text_file::read(stringx *s) {
    read(work, sizeof(work) - 1);
    *s = work;
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338110)
// 0x00338110 peek_char__9text_file
class text_file { public: char padding0[0x7c]; char *buffer; int index; char padding1[8]; int pushed_char; int peek_char(); };
int text_file::peek_char() { if (pushed_char >= 0) return (signed char)pushed_char; register int saved_index __asm__("$3") = index; __asm__ volatile("" : "+r"(saved_index)); register char *saved_buffer __asm__("$2") = buffer; return (signed char)saved_buffer[saved_index]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00337170)
// 0x00337170 close__9text_file
class os_file { char storage[0x40]; public: void close(); };
__asm__(".equ close__7os_file, 0x001E03A0");
class stash {
    void *index;
    int opened;
    int eof;
    unsigned fp;
    unsigned max_fp;
public:
    void close() { index = 0; eof = false; opened = false; fp = 0; max_fp = 0; }
};
class text_file {
    os_file io;
    stash the_stash;
    char padding[0x34];
    bool use_stash;
public:
    void close();
};
void text_file::close()
{
    if (use_stash)
        the_stash.close();
    else {
        io.close();
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
