// Matching decompilation blocks selected by generated build shims.

// 0x00337890 read__9text_fileP7stringx
#include "KS/SRC/textfile.h"

extern char work[4096];
__asm__(".equ work, 0x0046DCE8");
__asm__(".equ read__9text_filePci, 0x003378D8");
__asm__(".equ __as__7stringxPCc, 0x0034E118");
extern "C" void assign_text(stringx *text, const char *value)
    __asm__("__as__7stringxPCc");

void text_file::read(stringx *s) {
    read(work, sizeof(work) - 1);
    void (*assign)(stringx *, const char *) = assign_text;
    assign(s, work);
}

// 0x00338110 peek_char__9text_file
#include "KS/SRC/textfile.h"
char text_file::peek_char() { char value; if (pushbackdata >= 0) value = pushbackdata; else value = buf[bufpos]; return value; }

// 0x00337170 close__9text_file
#include "KS/SRC/textfile.h"
__asm__(".equ close__7os_file, 0x001E03A0");
extern "C" void close_os_file(os_file *file)
    __asm__("close__7os_file");

void text_file::close()
{
    if (use_stash)
        the_stash.close();
    else {
        void (*close_file)(os_file *) = close_os_file;
        close_file(&io);
    }
}

// 0x00338138 read_char__9text_file
#include "KS/SRC/textfile.h"
__asm__(".equ refill_buf__9text_file,0x00338078");
char text_file::read_char(){char ch;if(pushbackdata>=0){ch=pushbackdata;pushbackdata=-1;}else{ch=buf[bufpos];if(++bufpos>=bufamt)refill_buf();}return ch;}
