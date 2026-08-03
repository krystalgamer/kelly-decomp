// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E6840)
// 0x001E6840 myOutputFunc__FP8nvlMoviePUiPv
#include "NGL/PS2/ngl_ps2.h"

struct nvlMovie;
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

#if defined(KELLY_DECOMP_FUNCTION_001E6DE0)
// 0x001E6DE0 start_frame__11movieplayerb
extern "C" void list_init() __asm__("nglListInit__Fv");extern "C" void set_volume(float) __asm__("nvlMPEGSetVolume__Ff");__asm__(".equ nglListInit__Fv,0x00397DA8");__asm__(".equ nvlMPEGSetVolume__Ff,0x0038ACE8");extern float ps2MovieVolume;__asm__(".equ ps2MovieVolume,0x0042E678");struct movie_layout{char p0[4];int hiRes;char p1[684];int movieStarted;char p2[4];int volume_frames;};extern "C" void start_frame(movie_layout*self,bool listInit) __asm__("start_frame__11movieplayerb");void start_frame(movie_layout*self,bool listInit){if(!self->hiRes){if(self->movieStarted&&listInit){list_init();int dead;__asm__("" : "=r"(dead));}}else{self->volume_frames++;float volume;if(self->volume_frames>=6)volume=ps2MovieVolume;else volume=0.0f;set_volume(volume);int dead;__asm__("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E6D60)
// 0x001E6D60 is_playing__11movieplayer
struct nvlMovie;extern "C" int status(const nvlMovie*)__asm__("nvlMovieStatus__FPC8nvlMovie");extern "C" int frame(const nvlMovie*)__asm__("nvlMovieGetFrame__FPC8nvlMovie");extern "C" int frames(const nvlMovie*)__asm__("nvlMovieGetFrameNum__FPC8nvlMovie");__asm__(".equ nvlMovieStatus__FPC8nvlMovie,0x0038B9F8");__asm__(".equ nvlMovieGetFrame__FPC8nvlMovie,0x0038B2F0");__asm__(".equ nvlMovieGetFrameNum__FPC8nvlMovie,0x0038B2A0");struct movieplayer{char pad0[4];bool hiRes;char pad1[576];nvlMovie*movie;char pad2[104];bool movieStarted;bool isPlaying;};extern "C" bool playing(movieplayer*self)__asm__("is_playing__11movieplayer");bool playing(movieplayer*self){if(self->hiRes)return self->isPlaying;else{if(self->movieStarted)return status(self->movie)==2&&frame(self->movie)<frames(self->movie)-1;else return false;}}
#endif
