#ifndef SEMAPHORES_H
#define SEMAPHORES_H

struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};

extern int LoadNewStashSema;
extern int AllocMemorySema;
extern int StallSurferLoadSema;

void CreateAllSemaphores();

#endif
