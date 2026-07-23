// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038B200)
// 0x0038B200 nvlMovieGetWidth__FPC8nvlMovie
struct nvlMovie {
    void *src;
    void *stream;
    int dataSize;
    int width;
    int height;
    volatile int currentFrame;
    int framesTotal;
};

extern int nvlSystemInitialized;
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char nvl_file[];
extern const char nvl_movie_assert[];

__asm__(".equ nvlSystemInitialized, 0x0049B010");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ nvl_file, 0x0051B818");
__asm__(".equ nvl_movie_assert, 0x0051B9B0");

int nvlMovieGetWidth(const nvlMovie *movie)
{
    if (!(nvlSystemInitialized && movie))
        __assert(nvl_file, 605, nvl_movie_assert);
    return movie->width;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038B250)
// 0x0038B250 nvlMovieGetHeight__FPC8nvlMovie
struct nvlMovie {
    void *src;
    void *stream;
    int dataSize;
    int width;
    int height;
    volatile int currentFrame;
    int framesTotal;
};

extern int nvlSystemInitialized;
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char nvl_file[];
extern const char nvl_movie_assert[];

__asm__(".equ nvlSystemInitialized, 0x0049B010");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ nvl_file, 0x0051B818");
__asm__(".equ nvl_movie_assert, 0x0051B9B0");

int nvlMovieGetHeight(const nvlMovie *movie)
{
    if (!(nvlSystemInitialized && movie))
        __assert(nvl_file, 611, nvl_movie_assert);
    return movie->height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038B2A0)
// 0x0038B2A0 nvlMovieGetFrameNum__FPC8nvlMovie
struct nvlMovie {
    void *src;
    void *stream;
    int dataSize;
    int width;
    int height;
    volatile int currentFrame;
    int framesTotal;
};

extern int nvlSystemInitialized;
extern "C" void __assert(const char *file, int line, const char *expression);
extern const char nvl_file[];
extern const char nvl_movie_assert[];

__asm__(".equ nvlSystemInitialized, 0x0049B010");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ nvl_file, 0x0051B818");
__asm__(".equ nvl_movie_assert, 0x0051B9B0");

int nvlMovieGetFrameNum(const nvlMovie *movie)
{
    if (!(nvlSystemInitialized && movie))
        __assert(nvl_file, 617, nvl_movie_assert);
    return movie->framesTotal;
}
#endif
