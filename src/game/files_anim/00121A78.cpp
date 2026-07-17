class anim_control_t;
class entity;

template <class T>
class anim {
public:
    virtual void get_value(
        const anim_control_t &control,
        T *destination
    ) const;
};

template <>
void anim<entity *>::get_value(
    const anim_control_t &control,
    entity **destination
) const {
}
