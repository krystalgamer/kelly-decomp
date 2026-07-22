#ifndef KELLY_DECOMP_SO_DATA_BLOCK_SHARED_H
#define KELLY_DECOMP_SO_DATA_BLOCK_SHARED_H

class so_data_block {
protected:
    int blocksize;
    char *buffer;

    void _init(int size);
};

void *operator new[](
    unsigned int size,
    unsigned int flags,
    const char *description,
    int line);

extern const char so_data_block_new_desc[];

__asm__(".equ __vn__FUiUiPCci, 0x002AC5A0");
__asm__(".equ so_data_block_new_desc, 0x00503A60");

#endif
