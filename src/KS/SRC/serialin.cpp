// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002AB238)
// 0x002AB238 serial_in__FR10chunk_fileP13texture_coord
#include "KS/SRC/texture_coord.h"

class chunk_file;
void serial_in(chunk_file& io, float *value);
asm(".equ serial_in__FR10chunk_filePf, 0x00336998");
extern "C" void serial_in_float(chunk_file &file, float *value)
    __asm__("serial_in__FR10chunk_filePf");

void serial_in(chunk_file& io, texture_coord *tc)
{
    serial_in(io, &tc->x);
    void (*read_float)(chunk_file &, float *) = serial_in_float;
    read_float(io, &tc->y);
}
#endif
