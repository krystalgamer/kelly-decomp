#ifndef KELLY_DECOMP_MUSTASH_SHARED_H
#define KELLY_DECOMP_MUSTASH_SHARED_H

class multistash {
    char stash_state[0x264];
    unsigned char *big_ass_buffer;
    unsigned int big_ass_buffer_max;

public:
    void acquire_stash_bufferspace(int size);
};

extern void *arch_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description,
    int line);
extern const char acquire_stash_bufferspace_desc[];

#endif
