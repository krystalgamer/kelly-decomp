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

#if defined(KELLY_DECOMP_FUNCTION_001E6890)
// 0x001E6890 _$_11movieplayer
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CE7A8");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_11movieplayer");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E6B30)
// 0x001E6B30 shutdown__11movieplayer
void nvlShutdown();
void nvlStreamSystemShutdown(int system = 0);
__asm__(".equ nvlShutdown__Fv, 0x0038ADA8");
__asm__(".equ nvlStreamSystemShutdown__Fi, 0x00386520");

class movieplayer {
    char padding[4];
    bool hiRes;

public:
    void shutdown();
};

void movieplayer::shutdown() {
    if (hiRes) {
        return;
    }
    nvlShutdown();
    nvlStreamSystemShutdown();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
