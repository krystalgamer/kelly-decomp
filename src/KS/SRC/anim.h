#ifndef ANIM_H
#define ANIM_H

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

class anim_control_t {
    float current_time;
    float time_delta;
    float duration;
    float timescale_factor;
    float cntrl_tween_duration;
    float tween_timer;
    unsigned int flags;
    short loop_count;

public:
    inline float get_time() const {
        return current_time;
    }

    inline float get_duration() const {
        return duration;
    }

    inline float get_timescale_factor() const {
        return timescale_factor;
    }

    inline void set_timescale_factor(float factor) {
        timescale_factor = factor;
    }

    inline bool is_flagged(anim_flags_t flag) const {
        return flags & flag;
    }

    inline bool is_tween() const {
        return is_flagged(ANIM_TWEEN);
    }

    inline void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }

    inline float get_tween_timer() const {
        return tween_timer;
    }

    inline float get_tween_duration() const {
        return cntrl_tween_duration;
    }
};

template <class animatable_t>
class anim {
protected:
    unsigned short flags;

public:
    virtual inline void set_flag(anim_flags_t flag) {
        flags |= flag;
    }

    virtual inline void clear_flag(anim_flags_t flag) {
        flags &= ~flag;
    }

    virtual inline void set_flag(anim_flags_t flag, bool enabled) {
        if (enabled)
            set_flag(flag);
        else
            clear_flag(flag);
    }

    virtual inline void set_time(float time) {}
    virtual inline void frame_advance(const anim_control_t &control, animatable_t *destination) {}
    virtual inline void get_value(const anim_control_t &control, animatable_t *destination) const {}
    virtual inline void get_value(float time, animatable_t *destination) const {}

    inline bool is_flagged(anim_flags_t flag) const {
        return flags & flag;
    }

    inline bool is_valid() const {
        return is_flagged(ANIM_VALID);
    }

    inline bool is_attached() const {
        return is_flagged(ANIM_ATTACHED);
    }
};

template <class animatable_t, class key_t, class track_t>
class key_anim : public anim<animatable_t> {
    track_t *track;
    typename track_t::iterator current_key;

public:
    virtual void get_value(
        const anim_control_t &control,
        animatable_t *destination
    ) const
    {
        if (control.get_time() < current_key->get_time() ||
            control.get_time() > control.get_duration())
        {
            *destination = current_key->get_value();
        }
        else
        {
            typename track_t::iterator next_key = current_key;
            ++next_key;
            if (next_key == track->m_keys + track->num_keys)
            {
                *destination = current_key->get_value();
            }
            else
            {
                *destination = current_key->get_value(
                    control.get_time(), *next_key);
            }
        }
    }

    virtual void get_value(float t, animatable_t *dest) const
    {
        typename track_t::iterator i0 = track->m_keys;
        typename track_t::iterator i1 = i0;
        typename track_t::iterator i_end =
            track->m_keys + track->num_keys;
        ++i1;
        while (i1 != i_end && t >= (*i1).get_time())
        {
            ++i0;
            ++i1;
        }
        const key_t &k0 = *i0;
        const key_t &k1 = *i1;
        if (t < k0.get_time() || i1 == i_end)
            *dest = k0.get_value();
        else
            *dest = k0.get_value(t, k1);
    }
};

#endif
