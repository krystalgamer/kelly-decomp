class anim_control_t;
class entity;

template <class T>
class anim {
public:
    virtual void frame_advance(const anim_control_t &control, T *destination);
};

template <>
void anim<entity *>::frame_advance(
    const anim_control_t &control,
    entity **destination
) {
}
