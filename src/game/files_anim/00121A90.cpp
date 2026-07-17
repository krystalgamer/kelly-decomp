class signal_key {
};

template <class T>
class anim {
public:
    virtual void get_value(float time, T *destination) const;
};

template <>
void anim<signal_key>::get_value(float time, signal_key *destination) const {
}
