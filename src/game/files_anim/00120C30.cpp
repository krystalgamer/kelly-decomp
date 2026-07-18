class signal_key;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void clear_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::clear_flag(anim_flags_t flag) { flags &= ~flag; }
template void anim<signal_key>::clear_flag(anim_flags_t flag);
