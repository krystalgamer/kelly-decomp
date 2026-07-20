// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E6840)
// 0x001E6840 myOutputFunc__FP8nvlMoviePUiPv
struct nvlMovie;
struct nglTexture { char padding0[8]; unsigned short Width; unsigned short Height; char padding1[0x14]; void *Data; };
__asm__(".globl myOutputFunc__FP8nvlMoviePUiPv");
static void *myOutputFunc(nvlMovie *movie, unsigned int *size, void *data) { nglTexture *texture = (nglTexture *)data; *size = texture->Width * texture->Height << 2; return texture->Data; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E6860)
// 0x001E6860 __11movieplayer
extern const char movieplayer_vtable[];
__asm__(".equ movieplayer_vtable, 0x004DF760");
class movieplayer { const void *vtable; char padding0[0x23c]; void *movieSource; void *movie; void *texture; void *movieBuf; char padding1[0x64]; int movieStarted; int isPlaying; public: movieplayer(); };
movieplayer::movieplayer() { movieStarted = 0; isPlaying = 0; movie = 0; texture = 0; movieBuf = 0; movieSource = 0; vtable = movieplayer_vtable; }
#endif
