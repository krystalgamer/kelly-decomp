// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002AB238)
// 0x002AB238 serial_in__FR10chunk_fileP13texture_coord
class chunk_file;
struct texture_coord { float x; float y; };
void serial_in(chunk_file& io, float *value);
asm(".equ serial_in__FR10chunk_filePf, 0x00336998");
void serial_in(chunk_file& io, texture_coord *tc)
{
    serial_in(io, &tc->x);
    serial_in(io, &tc->y);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
