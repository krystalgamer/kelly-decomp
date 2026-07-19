// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0011DDC8)
// 0x0011DDC8 set_time__11signal_animf
class signal_key {
};

template <class T>
class anim {
public:
    void set_time(float time) {
    }
};

class signal_anim : public anim<signal_key> {
public:
    void set_time(float time);
};

void signal_anim::set_time(float time) {
    anim<signal_key>::set_time(time);
}
#endif
