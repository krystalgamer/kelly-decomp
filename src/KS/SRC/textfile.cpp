// Matching decompilation blocks selected by generated build shims.

// 0x00337890 read__9text_fileP7stringx
#include "KS/SRC/textfile.h"

extern char work[4096];
__asm__(".equ work, 0x0046DCE8");
__asm__(".equ read__9text_filePci, 0x003378D8");
__asm__(".equ __as__7stringxPCc, 0x0034E118");

void text_file::read(stringx *s) {
    read(work, sizeof(work) - 1);
    *s = work;
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00338110 peek_char__9text_file
#include "KS/SRC/textfile.h"
char text_file::peek_char() { char value; if (pushbackdata >= 0) value = pushbackdata; else value = buf[bufpos]; return value; }

// 0x00337170 close__9text_file
#include "KS/SRC/textfile.h"
__asm__(".equ close__7os_file, 0x001E03A0");
void text_file::close()
{
    if (use_stash)
        the_stash.close();
    else {
        io.close();
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}

// 0x00336DD8 _$_9text_file
extern "C" void os_free32(void *memory)
    __asm__("os_free32__FPv");
extern "C" void OsFileDtor(void *self, int deleting)
    __asm__("_$_7os_file");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");

__asm__(".equ os_free32__FPv, 0x001DFA38");
__asm__(".equ _$_7os_file, 0x001DFD10");
__asm__(".equ __builtin_delete, 0x002AC6B0");

struct text_file_layout
{
    char os_file_and_fields[0x7c];
    void *buffer;
};

extern "C" void TextFileDtor(void *self, int deleting)
    __asm__("_$_9text_file");

void TextFileDtor(void *self, int deleting)
{
    text_file_layout *file = (text_file_layout *)self;
    os_free32(file->buffer);
    OsFileDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x00338138 read_char__9text_file
#include "KS/SRC/textfile.h"
__asm__(".equ refill_buf__9text_file,0x00338078");
char text_file::read_char(){char ch;if(pushbackdata>=0){ch=pushbackdata;pushbackdata=-1;}else{ch=buf[bufpos];if(++bufpos>=bufamt)refill_buf();}return ch;}
