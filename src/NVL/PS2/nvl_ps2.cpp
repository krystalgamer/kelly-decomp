// Matching decompilation blocks selected by generated build shims.


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

// 0x0038B2F0 nvlMovieGetFrame__FPC8nvlMovie
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

int nvlMovieGetFrame(const nvlMovie *movie)
{
    if (!(nvlSystemInitialized && movie))
        __assert(nvl_file, 623, nvl_movie_assert);
    return movie->currentFrame;
}

// 0x0038AE40 nvlStopAllMovies__Fv
struct Source{int refs;};struct Movie{Source*src;};struct System{char pad[16];Movie*pMovies[4];};extern int initialized;extern System system_data;extern "C" void stop(Movie*)__asm__("nvlStopMovie__FP8nvlMovie");extern "C" void release(Source*)__asm__("nvlReleaseMovieSource__FP14nvlMovieSource");__asm__(".equ initialized,0x0049B010");__asm__(".equ system_data,0x00597108");__asm__(".equ nvlStopMovie__FP8nvlMovie,0x0038B890");__asm__(".equ nvlReleaseMovieSource__FP14nvlMovieSource,0x0038B128");extern "C" void stop_all()__asm__("nvlStopAllMovies__Fv");void stop_all(){if(initialized){for(int i=0;i<4;i++){if(system_data.pMovies[i]){Source*src=system_data.pMovies[i]->src;stop(system_data.pMovies[i]);if(src&&src->refs==0)release(src);}}}}

// 0x0038ADA8 nvlShutdown__Fv
struct NvlSystemData{int fromIPUHandlerID;int toIPUHandlerID;int disableToIPU;int disableFromIPU;void*pMovies[4];int runFullAdvance,currentMovieIdx,advanceOK,ioPending,initInterrupts;};extern NvlSystemData nvlSystemData;extern int nvlSystemInitialized;extern "C" void nvlStopAllMovies() __asm__("nvlStopAllMovies__Fv");extern "C" int DisableDmac(int);extern "C" int EnableDmac(int);extern "C" int RemoveDmacHandler(int,int);asm(".equ nvlSystemData,0x00597108");asm(".equ nvlSystemInitialized,0x0049B010");asm(".equ nvlStopAllMovies__Fv,0x0038AE40");asm(".equ DisableDmac,0x003DBE30");asm(".equ EnableDmac,0x003DBE98");asm(".equ RemoveDmacHandler,0x003DB4A0");extern "C" void nvlShutdown() __asm__("nvlShutdown__Fv");void nvlShutdown(){if(nvlSystemInitialized){nvlStopAllMovies();DisableDmac(3);RemoveDmacHandler(3,nvlSystemData.fromIPUHandlerID);if(!nvlSystemData.disableFromIPU)EnableDmac(3);DisableDmac(4);RemoveDmacHandler(4,nvlSystemData.toIPUHandlerID);if(!nvlSystemData.disableToIPU)EnableDmac(4);nvlSystemInitialized=0;}}

// 0x0038B128 nvlReleaseMovieSource__FP14nvlMovieSource
struct nvlMovieSource {
    int refs;
    char *filename;
};

extern int nvlSystemInitialized;
extern void (*nvlFreeFunc)(void *);
extern "C" void nvl_assert(const char *, int, const char *)
    __asm__("__assert");
extern "C" void free_memory(void *) __asm__("free");
extern const char nvl_source_file[];
extern const char initialized_message[];
extern const char source_message[];
extern const char refs_message[];

__asm__(".equ nvlSystemInitialized, 0x0049B010");
__asm__(".equ nvlFreeFunc, 0x00597140");
__asm__(".equ __assert, 0x003CF6B0");
__asm__(".equ free, 0x003D0BC8");
__asm__(".equ nvl_source_file, 0x0051B818");
__asm__(".equ initialized_message, 0x0051B938");
__asm__(".equ source_message, 0x0051B968");
__asm__(".equ refs_message, 0x0051B980");

void nvlReleaseMovieSource(nvlMovieSource *source)
{
    if (!nvlSystemInitialized)
        nvl_assert(nvl_source_file, 588, initialized_message);
    if (!(source && source->filename))
        nvl_assert(nvl_source_file, 589, source_message);
    if (source->refs != 0)
        nvl_assert(nvl_source_file, 590, refs_message);

    if (nvlFreeFunc)
    {
        nvlFreeFunc(source->filename);
        nvlFreeFunc(source);
        __asm__ __volatile__("");
    }
    else
    {
        free_memory(source->filename);
        free_memory(source);
        __asm__ __volatile__("");
    }
}

// 0x0038B9F8 nvlMovieStatus__FPC8nvlMovie
enum nvlResult {
    NVL_RESULT_ERROR = -1,
    NVL_RESULT_PLAYING = 2,
    NVL_RESULT_PAUSED = 3
};

enum {
    NVL_FLAG_PAUSED = 0x1,
    NVL_FLAG_PLAYING = 0x2,
    NVL_FLAG_STARTING = 0x8
};

struct nvlMovie {
    char padding[0x2c];
    int flags;
};

nvlResult nvlMovieStatus(const nvlMovie *movie)
{
    int flags = movie->flags;
    if (!(flags & (NVL_FLAG_PLAYING | NVL_FLAG_STARTING))) {
        register int result __asm__("$2") = NVL_RESULT_ERROR;
        register int paused_result __asm__("$3") =
            NVL_RESULT_PAUSED;
        if (flags & NVL_FLAG_PAUSED)
            result = paused_result;
        return (nvlResult)result;
    }
    return NVL_RESULT_PLAYING;
}
