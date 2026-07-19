// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00338638)
// 0x00338638 __10frame_info
class frame_info { float age; float frame_rate; int ifl_frame_locked; public: frame_info(); };
frame_info::frame_info() { age = 0.0f; frame_rate = 0.0f; ifl_frame_locked = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338650)
// 0x00338650 get_ifl_frame_locked__C10frame_info
class frame_info {
    char padding[0x8];
    int ifl_frame_locked;
public:
    int get_ifl_frame_locked() const;
};

int frame_info::get_ifl_frame_locked() const {
    return ifl_frame_locked;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338658)
// 0x00338658 set_ifl_frame_locked__10frame_infoi
class frame_info {
    char padding[0x8];
    int ifl_frame_locked;
public:
    void set_ifl_frame_locked(int value);
};

void frame_info::set_ifl_frame_locked(int value) {
    ifl_frame_locked = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00338660)
// 0x00338660 get_age__C10frame_info
class frame_info {
    float age;
public:
    float get_age() const;
};

float frame_info::get_age() const {
    return age;
}
#endif
