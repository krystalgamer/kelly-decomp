// Matching decompilation blocks selected by generated build shims.

// 0x00352F88 _init__13so_data_blocki
#include "KS/SRC/so_data_block.h"
void *operator new[](
    unsigned int size,
    unsigned int flags,
    const char *description,
    int line);
extern const char so_data_block_new_desc[];
__asm__(".equ __vn__FUiUiPCci, 0x002AC5A0");
__asm__(".equ so_data_block_new_desc, 0x00503A60");

void so_data_block::_init(int size)
{
    blocksize = size;
    if (size)
        buffer = new (0, so_data_block_new_desc, 0) char[size];
    else
        buffer = 0;
}


// 0x00352E88 __13so_data_blocki
#include "KS/SRC/so_data_block.h"
__asm__(".equ _init__13so_data_blocki, 0x00352F88");
so_data_block::so_data_block(int size) { _init(size); }

// 0x00352F38 clear__13so_data_block
#include "KS/SRC/so_data_block.h"
__asm__(".equ _destroy__13so_data_block, 0x00352F60");
void so_data_block::clear() { _destroy(); blocksize = 0; }

// 0x00352F60 _destroy__13so_data_block
#include "KS/SRC/so_data_block.h"

void delete_buffer(void *pointer)
    __asm__("__builtin_vec_delete");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");

void so_data_block::_destroy()
{
    if (buffer) {
        void (*destroy)(void *) = delete_buffer;
        destroy(buffer);
    }
}
