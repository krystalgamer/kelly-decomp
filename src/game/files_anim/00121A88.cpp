class anim_control_t;
class signal_key {
};

template <class T>
class anim {
public:
    virtual void get_value(
        const anim_control_t &control,
        T *destination
    ) const;
};

template <>
void anim<signal_key>::get_value(
    const anim_control_t &control,
    signal_key *destination
) const {
}
