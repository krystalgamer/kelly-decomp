// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00120A40)
// 0x00120A40 set_flag__16entity_anim_tree12anim_flags_t
enum anim_flags_t {
    ANIM_ATTACHED = 16
};

struct anim_control {
    char padding0[0x18];
    unsigned int flags;
    char padding1[0x20];

    void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled) {
            flags |= flag;
        } else {
            flags &= ~flag;
        }
    }
};

class entity_anim {
    unsigned short flags;

public:
    void set_flag(anim_flags_t flag) {
        flags |= flag;
    }
};

class entity_anim_tree : public entity_anim {
    char padding[0x46];
    anim_control control;
    anim_control control_b;

public:
    void set_flag(anim_flags_t flag);
};

void entity_anim_tree::set_flag(anim_flags_t flag) {
    control.set_flag(flag, true);
    control_b.set_flag(flag, true);
    entity_anim::set_flag(flag);
}
#endif
