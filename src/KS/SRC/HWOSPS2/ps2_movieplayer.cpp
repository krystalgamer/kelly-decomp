// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E6840)
// 0x001E6840 myOutputFunc__FP8nvlMoviePUiPv
struct nvlMovie;
struct nglTexture { char padding0[8]; unsigned short Width; unsigned short Height; char padding1[0x14]; void *Data; };
__asm__(".globl myOutputFunc__FP8nvlMoviePUiPv");
static void *myOutputFunc(nvlMovie *movie, unsigned int *size, void *data) { nglTexture *texture = (nglTexture *)data; *size = texture->Width * texture->Height << 2; return texture->Data; }
#endif
