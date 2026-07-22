#ifndef KELLY_DECOMP_MUSTASH_SHARED_H
#define KELLY_DECOMP_MUSTASH_SHARED_H

class multistash {
    friend class stash;

    char stash_state[0x24C];
    unsigned char *stored_buf;
    unsigned int stored_buf_end;
    unsigned int stored_buf_max;
    bool first_pass_temp;
    bool first_pass_stored;
    bool first_pass_aram;
    unsigned char *big_ass_buffer;
    unsigned int big_ass_buffer_max;
    unsigned char *temp_buf;
    unsigned int temp_buf_end;
    unsigned int temp_buf_max;
    char remaining_stash_state[0xA0];

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
    static unsigned int add_stored(
        class os_file &file,
        unsigned char *raw_data,
        unsigned int data_size);
    static unsigned int add_temp(
        class os_file &file,
        unsigned char *raw_data,
        unsigned int data_size);

private:
    static int curstash;
    static multistash substash[STASH_LIMIT];
};

class os_file {
public:
    int write(void *data, int size);
};

extern void *arch_memalign(
    unsigned int boundary,
    unsigned int size,
    const char *description,
    int line);
extern const char acquire_stash_bufferspace_desc[];

__asm__(".equ _5stash$substash, 0x0046B7B8");
__asm__(".equ _5stash$curstash, 0x0046D9C0");
__asm__(".equ release_stash_bufferspace__10multistash, 0x003471B0");
__asm__(".equ write__7os_filePvi, 0x001E0980");

#endif
