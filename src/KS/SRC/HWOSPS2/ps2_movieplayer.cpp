// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E6840)
// 0x001E6840 myOutputFunc__FP8nvlMoviePUiPv
#include "NGL/PS2/ngl_ps2.h"

struct nvlMovie;
static void *myOutputFunc(nvlMovie *movie, unsigned int *size, void *data) { nglTexture *texture = (nglTexture *)data; *size = texture->Width * texture->Height << 2; return texture->Data; }
#endif

// 0x001E6860 __11movieplayer
#include "KS/SRC/HWOSPS2/ps2_movieplayer.h"

movieplayer::movieplayer() { movieStarted = 0; isPlaying = 0; movie = 0; texture = 0; movieBuf = 0; movieSource = 0; }

// 0x001E6B30 shutdown__11movieplayer
#include "KS/SRC/HWOSPS2/ps2_movieplayer.h"

void nvlShutdown();
void nvlStreamSystemShutdown(int system = 0);
__asm__(".equ nvlShutdown__Fv, 0x0038ADA8");
__asm__(".equ nvlStreamSystemShutdown__Fi, 0x00386520");
void shutdown_nvl_stream(int system)
    __asm__("nvlStreamSystemShutdown__Fi");

void movieplayer::shutdown() {
    if (hiRes) {
        return;
    }
    nvlShutdown();
    void (*shutdown_stream)(int) = shutdown_nvl_stream;
    shutdown_stream(0);
}


#if defined(KELLY_DECOMP_FUNCTION_001E6D60)
// 0x001E6D60 is_playing__11movieplayer
struct nvlMovie;extern "C" int status(const nvlMovie*)__asm__("nvlMovieStatus__FPC8nvlMovie");extern "C" int frame(const nvlMovie*)__asm__("nvlMovieGetFrame__FPC8nvlMovie");extern "C" int frames(const nvlMovie*)__asm__("nvlMovieGetFrameNum__FPC8nvlMovie");__asm__(".equ nvlMovieStatus__FPC8nvlMovie,0x0038B9F8");__asm__(".equ nvlMovieGetFrame__FPC8nvlMovie,0x0038B2F0");__asm__(".equ nvlMovieGetFrameNum__FPC8nvlMovie,0x0038B2A0");struct movieplayer{char pad0[4];bool hiRes;char pad1[576];nvlMovie*movie;char pad2[104];bool movieStarted;bool isPlaying;};extern "C" bool playing(movieplayer*self)__asm__("is_playing__11movieplayer");bool playing(movieplayer*self){if(self->hiRes)return self->isPlaying;else{if(self->movieStarted)return status(self->movie)==2&&frame(self->movie)<frames(self->movie)-1;else return false;}}
#endif
