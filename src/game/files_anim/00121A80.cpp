class entity;

template <class T>
class anim {
public:
    virtual void get_value(float time, T *destination) const;
};

template <>
void anim<entity *>::get_value(float time, entity **destination) const {
}
