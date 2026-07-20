// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003480D0)
// 0x003480D0 get_name__C5stash
class pstring {};

class stash {
    char padding[0x18];
    pstring fullname;
public:
    const pstring& get_name() const;
};

const pstring& stash::get_name() const {
    return fullname;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003480E8)
// 0x003480E8 get_size__5stash
struct stash_index { char padding[0x24]; int size; };
class stash { stash_index* index; public: int get_size(); };
int stash::get_size() { return index->size; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00346FC0)
// 0x00346FC0 free_stored__5stashi
class multistash {
    char storage[0x318];

public:
    void free_stored();
};

__asm__(".equ free_stored__10multistash, 0x00346FF0");

extern multistash substash[];
__asm__(".equ substash, 0x0046B7B8");

class stash {
public:
    static void free_stored(int stashid);
};

void stash::free_stored(int stashid) {
    substash[stashid].free_stored();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
