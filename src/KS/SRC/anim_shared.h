#ifndef KELLY_DECOMP_ANIM_SHARED_H
#define KELLY_DECOMP_ANIM_SHARED_H

enum anim_flags_t {
    ANIM_REVERSE = 0x0001,
    ANIM_LOOPING = 0x0002,
    ANIM_AUTOKILL = 0x0004,
    ANIM_SUSPENDED = 0x0008,
    ANIM_ATTACHED = 0x0010,
    ANIM_RELATIVE_TO_START = 0x0020,
    ANIM_ALLOW_CONTROLS = 0x0080,
    ANIM_COMPUTE_SECTOR = 0x0100,
    ANIM_NONCOSMETIC = 0x0200,
    ANIM_WAS_LOOPED = 0x0400,
    ANIM_TWEEN = 0x0800,
    ANIM_VALID = 0x1000,
    ANIM_PO_FIXUP = 0x2000,
    ANIM_FORCE_ABSOLUTE = 0x4000
};

class anim_control_t;

template <class animatable_t>
class anim {
protected:
    unsigned short flags;

public:
    virtual void set_flag(anim_flags_t flag) {
        flags |= flag;
    }

    virtual void clear_flag(anim_flags_t flag) {
        flags &= ~flag;
    }

    virtual void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled)
            set_flag(flag);
        else
            clear_flag(flag);
    }

    virtual void set_time(float time) {}
    virtual void frame_advance(const anim_control_t &control, animatable_t *destination) {}
    virtual void get_value(const anim_control_t &control, animatable_t *destination) const {}
    virtual void get_value(float time, animatable_t *destination) const {}
};

#endif
