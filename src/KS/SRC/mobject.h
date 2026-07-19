// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF0A8)
// 0x002FF0A8 is_active__C13motion_object
class motion_object {
    bool active;
public:
    bool is_active() const;
};

bool motion_object::is_active() const {
    return active;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF0B0)
// 0x002FF0B0 set_active__13motion_objectb
class motion_object {
    bool active;
public:
    void set_active(bool value);
};

void motion_object::set_active(bool value) {
    active = value;
}
#endif
