// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EEAA8)
// 0x002EEAA8 CreateAllSemaphores__Fv
struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};

extern "C" int CreateSema(SemaParam *);
extern int LoadNewStashSema;
extern int AllocMemorySema;
extern int StallSurferLoadSema;
__asm__(".equ CreateSema, 0x003DB660");
__asm__(".equ LoadNewStashSema, 0x0046ABCC");
__asm__(".equ AllocMemorySema, 0x0046ABD0");
__asm__(".equ StallSurferLoadSema, 0x0046ABD4");

void CreateAllSemaphores()
{
    SemaParam s;
    s.initCount = 1;
    s.maxCount = 1;
    LoadNewStashSema = CreateSema(&s);
    AllocMemorySema = CreateSema(&s);
    StallSurferLoadSema = CreateSema(&s);
}
#endif
