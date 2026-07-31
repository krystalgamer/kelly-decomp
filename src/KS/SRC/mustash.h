#ifndef MUSTASH_H
#define MUSTASH_H

#include "KS/SRC/avltree.h"
#include "KS/SRC/osfile.h"
#include "KS/SRC/pstring.h"

class stash_index_entry {
    friend class stash;

    enum Flags {
        IS_VALID = 0x1,
        IS_STORED = 0x2,
        WAS_USED = 0x4,
        IN_ARAM = 0x8
    };

    pstring name;
    unsigned int file_offset;
    unsigned int entry_size;
    unsigned char file_type;
    unsigned char flags;
    unsigned short padding1;
    unsigned char *raw_data;
    int raw_data_size;
    unsigned int padding2;
    unsigned int padding3;
    unsigned int padding4;

public:
    enum index_entry_t {
        STASH_INDEX_ENTRY_UNUSED,
        STASH_INDEX_ENTRY_RAW,
        STASH_INDEX_ENTRY_PS2MESH,
        STASH_INDEX_ENTRY_XBMESH,
        STASH_INDEX_ENTRY_GCMESH,
        STASH_INDEX_ENTRY_ANMX,
        STASH_INDEX_ENTRY_TEX,
        STASH_INDEX_ENTRY_SNMX,
        STASH_INDEX_ENTRY_MISC
    };

    inline bool is_stored() {
        return (flags & IS_STORED) == IS_STORED;
    }

    inline bool is_valid() {
        return (flags & IS_VALID) == IS_VALID;
    }

    inline void set_offset(unsigned int new_offset) {
        file_offset = new_offset;
    }

    inline bool was_used() {
        return (flags & WAS_USED) == WAS_USED;
    }

    inline const char *get_name() {
        return name;
    }
};

typedef TreeNode<stash_index_entry> AvlNode;

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
    void free_stored();
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
    enum stash_section_t {
        STASH_SECTION_STORED,
        STASH_SECTION_TEMP,
        STASH_SECTION_ARAM,
        STASH_SECTION_INDEX
    };

    static void WaitForStashLoad();
    static void free_stored(int stashid);
    static void release_stash_bufferspace();
    static void write_tree(
        class os_file &file,
        AvlNode *node,
        stash_section_t section);
    static unsigned int add_stored(
        class os_file &file,
        unsigned char *raw_data,
        unsigned int data_size);
    static unsigned int add_temp(
        os_file &file,
        unsigned char *raw_data,
        unsigned int data_size);

    enum filepos_t {
        FP_BEGIN,
        FP_CURRENT,
        FP_END
    };

    stash()
      : index(0),
        opened(false),
        eof(false),
        fp(0),
        max_fp(0)
    {
    }
    ~stash() {}
    bool open(const pstring &name);
    bool open(const char *name);
    unsigned int read(void *data, int bytes);
    unsigned int get_size();
    void set_fp(int position, filepos_t base);
    unsigned int get_fp();
    inline void close() {
        index = 0;
        eof = false;
        opened = false;
        fp = 0;
        max_fp = 0;
    }
    const pstring &get_name() const;
    inline bool is_open() const { return opened; }
    inline bool at_eof() const { return eof; }

private:
    static int curstash;
    static multistash substash[STASH_LIMIT];
    stash_index_entry *index;
    bool opened;
    bool eof;
    unsigned int fp;
    unsigned int max_fp;
    pstring fullname;
};

extern const pstring ps2mesh_type;
extern const pstring xbmesh_type;
extern const pstring gcmesh_type;
extern const pstring unused_type;
extern const pstring raw_type;
extern const pstring anmx_type;
extern const pstring tex_type;
extern const pstring snmx_type;
extern const pstring misc_type;
extern const pstring unknown_type;

void debug_print(const char *format, ...);

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
__asm__(".equ unpack_string__C7pstring, 0x00335648");
__asm__(".equ debug_print__FPCce, 0x00120790");
__asm__(".equ ps2mesh_type, 0x0058ACA8");
__asm__(".equ xbmesh_type, 0x0058ACC8");
__asm__(".equ gcmesh_type, 0x0058ACE8");
__asm__(".equ unused_type, 0x0058AD08");
__asm__(".equ raw_type, 0x0058AD28");
__asm__(".equ anmx_type, 0x0058AD48");
__asm__(".equ tex_type, 0x0058AD68");
__asm__(".equ snmx_type, 0x0058AD88");
__asm__(".equ misc_type, 0x0058ADA8");
__asm__(".equ unknown_type, 0x0058ADC8");

#endif
