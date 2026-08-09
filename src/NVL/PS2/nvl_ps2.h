#ifndef NVL_PS2_H
#define NVL_PS2_H

struct nvlMovie {
    void *src;
    void *stream;
    int dataSize;
    int width;
    int height;
    volatile int currentFrame;
    int framesTotal;
};

int nvlMovieGetWidth(const nvlMovie *movie);
int nvlMovieGetHeight(const nvlMovie *movie);
int nvlMovieGetFrameNum(const nvlMovie *movie);
int nvlMovieGetFrame(const nvlMovie *movie);

#endif
