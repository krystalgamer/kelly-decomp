#ifndef KELLY_DECOMP_NVLSTREAM_PS2_SHARED_H
#define KELLY_DECOMP_NVLSTREAM_PS2_SHARED_H

struct nvlStream {
    int idx;
    unsigned int startSector;
    unsigned int endSector;
    unsigned int readSector;
    unsigned int filesize;
    int bytes_in_last_sect;
    int bufsize;
    char *buf;
    char *endbuf;
    char *pRead;
    char *pWrite;
    char *pLock;
    char *pEndOfData;
    char *pStartOfData;
    int private_buffer;
    int bitrate;
};

extern "C" void __assert(const char *file, int line, const char *expression);
extern const char nvlstream_source_file[];
extern const char nvlstream_assert_stream[];

__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ nvlstream_source_file, 0x0051AD40");
__asm__(".equ nvlstream_assert_stream, 0x0051B120");

#endif
