class vector3d;
enum anim_flags_t { ANIM_FLAG_ZERO = 0 };
template <class Type> class anim { unsigned short flags; public: void set_flag(anim_flags_t flag); };
template <class Type> void anim<Type>::set_flag(anim_flags_t flag) { flags |= flag; }
template void anim<vector3d>::set_flag(anim_flags_t flag);
