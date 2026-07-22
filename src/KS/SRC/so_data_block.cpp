// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00352F88)
#include "KS/SRC/so_data_block_shared.h"

// 0x00352F88 _init__13so_data_blocki
void so_data_block::_init(int size)
{
    blocksize = size;
    if (size)
        buffer = new (0, so_data_block_new_desc, 0) char[size];
    else
        buffer = 0;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00352E88)
// 0x00352E88 __13so_data_blocki
class so_data_block { int blocksize; void *buffer; public: so_data_block(int size); void _init(int size); };
__asm__(".equ _init__13so_data_blocki, 0x00352F88");
so_data_block::so_data_block(int size) { _init(size); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352F38)
// 0x00352F38 clear__13so_data_block
class so_data_block { int blocksize; void *buffer; public: void clear(); void _destroy(); };
__asm__(".equ _destroy__13so_data_block, 0x00352F60");
void so_data_block::clear() { _destroy(); blocksize = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352F60)
// 0x00352F60 _destroy__13so_data_block
extern "C" void builtin_vec_delete(void *pointer) __asm__("__builtin_vec_delete");
__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
class so_data_block { int blocksize; void *buffer; public: void _destroy(); };
void so_data_block::_destroy() { if (buffer) { builtin_vec_delete(buffer); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00352EF8)
// 0x00352EF8 init__13so_data_blocki
class so_data_block { int blocksize; char *buffer; public: void init(int size); void _destroy(); void _init(int size); };
asm(".equ _destroy__13so_data_block, 0x00352F60");
asm(".equ _init__13so_data_blocki, 0x00352F88");
void so_data_block::init(int size)
{
    _destroy();
    KELLY_DECOMP_COMPILER_BARRIER();
    _init(size);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
