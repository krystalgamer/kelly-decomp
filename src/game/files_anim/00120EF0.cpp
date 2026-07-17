class anim_control_t;
class signal_key {
};

template <class T>
class anim {
public:
    virtual void frame_advance(const anim_control_t &control, T *destination);
};

template <>
void anim<signal_key>::frame_advance(
    const anim_control_t &control,
    signal_key *destination
) {
}
