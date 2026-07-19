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
