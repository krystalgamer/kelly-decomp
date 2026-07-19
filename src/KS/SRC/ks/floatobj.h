// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026F900)
// 0x0026F900 is_surfing_object__12beach_object
class beach_object {
public:
    bool is_surfing_object();
};

bool beach_object::is_surfing_object() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FA70)
// 0x0026FA70 get_type__C12water_object
class water_object {
public:
    int get_type() const;
};

int water_object::get_type() const {
    return -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FD10)
// 0x0026FD10 spawn__17generic_anim_misc
class generic_anim_misc {
    char padding[0x34];
    int state;
public:
    void spawn();
};

void generic_anim_misc::spawn() {
    state = 5;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FDF0)
// 0x0026FDF0 spawn__19generic_anim_animal
class generic_anim_animal {
    char padding[0x28];
    int state;
public:
    void spawn();
};

void generic_anim_animal::spawn() {
    state = 2;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FED0)
// 0x0026FED0 spawn__16generic_anim_ice
class generic_anim_ice {
    char padding[0x2C];
    int state;
public:
    void spawn();
};

void generic_anim_ice::spawn() {
    state = 3;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FF88)
// 0x0026FF88 is_surfing_object__14surfing_object
class surfing_object {
public:
    bool is_surfing_object();
};

bool surfing_object::is_surfing_object() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FF90)
// 0x0026FF90 get_type__C14surfing_object
class surfing_object {
    char padding[0x2E0];
    int my_type;
public:
    int get_type() const;
};

int surfing_object::get_type() const {
    return my_type;
}
#endif
