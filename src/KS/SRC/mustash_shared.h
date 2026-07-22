#ifndef KELLY_DECOMP_MUSTASH_SHARED_H
#define KELLY_DECOMP_MUSTASH_SHARED_H

class multistash {
    char stash_state[0x264];
    unsigned char *big_ass_buffer;
    unsigned int big_ass_buffer_max;
    char remaining_stash_state[0xAC];

public:
    void acquire_stash_bufferspace(int size);
    void release_stash_bufferspace();
};

enum StashID {
    STASH_SYSTEM,
    STASH_LEGAL,
    STASH_COMMON,
    STASH_BEACH,
    STASH_SURFER,
    STASH_SURFER_AUX,
    STASH_SURFER_BOARD,
    STASH_SURFER_2,
    STASH_SURFER_2_AUX,
    STASH_SURFER_2_BOARD,
    STASH_LEVEL,
    STASH_LIMIT
};

class stash {
public:
    static void release_stash_bufferspace();

private:
    static multistash substash[STASH_LIMIT];
};

extern void *arch_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description,
    int line);
extern const char acquire_stash_bufferspace_desc[];

__asm__(".equ _5stash$substash, 0x0046B7B8");
__asm__(".equ release_stash_bufferspace__10multistash, 0x003471B0");

#endif
