// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B7B88)
// 0x002B7B88 is_a_beam__C4beam
class beam {
public:
    bool is_a_beam() const;
};

bool beam::is_a_beam() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8420)
// 0x002B8420 is_dead__C11beam_effect
class beam_effect {
    char padding[0xA];
    signed char mode;
public:
    bool is_dead() const;
};

bool beam_effect::is_dead() const {
    return mode == 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8430)
// 0x002B8430 is_alive__C11beam_effect
class beam_effect {
    char padding[0xA];
    signed char mode;
public:
    bool is_alive() const;
};

bool beam_effect::is_alive() const {
    return mode != 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B84B8)
// 0x002B84B8 is_inverted__C11beam_effect
class beam_effect { char padding[0xA]; unsigned char mode; public: bool is_inverted() const; };
bool beam_effect::is_inverted() const { return (unsigned char)(mode + 2) < 2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B84D0)
// 0x002B84D0 get_id__C11beam_effect
class beam_effect {
    char padding[0x8];
    unsigned short id;
public:
    unsigned short get_id() const;
};

unsigned short beam_effect::get_id() const {
    return id;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B84D8)
// 0x002B84D8 set_id__11beam_effectUs
class beam_effect {
    char padding[0x8];
    unsigned short id;
public:
    void set_id(unsigned short value);
};

void beam_effect::set_id(unsigned short value) {
    id = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9610)
// 0x002B9610 apply_start_vals__16beam_effect_typeP4beam
class beam;

class beam_effect_type {
public:
    void apply_start_vals(beam* value);
};

void beam_effect_type::apply_start_vals(beam* value) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9618)
// 0x002B9618 apply_target_vals__16beam_effect_typeP4beam
class beam;

class beam_effect_type {
public:
    void apply_target_vals(beam* value);
};

void beam_effect_type::apply_target_vals(beam* value) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9620)
// 0x002B9620 apply_delta_vals__16beam_effect_typeP4beamf
class beam;

class beam_effect_type {
public:
    void apply_delta_vals(beam* value, float time);
};

void beam_effect_type::apply_delta_vals(beam* value, float time) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9628)
// 0x002B9628 reverse__16beam_effect_type
class beam_effect_type {
public:
    void reverse();
};

void beam_effect_type::reverse() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9630)
// 0x002B9630 make_instance__16beam_effect_type
class beam_effect_type {
public:
    beam_effect_type* make_instance();
};

beam_effect_type* beam_effect_type::make_instance() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7CF0)
// 0x002B7CF0 apply_start_vals__17beam_effect_widthP4beam
class beam { public: void set_thickness(float width); };
__asm__(".equ set_thickness__4beamf, 0x00271790");
class beam_effect_width { char padding[4]; float start; float target; float delta; public: void apply_start_vals(beam *value); };
void beam_effect_width::apply_start_vals(beam *value) { value->set_thickness(start); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7D10)
// 0x002B7D10 apply_target_vals__17beam_effect_widthP4beam
class beam { public: void set_thickness(float width); };
__asm__(".equ set_thickness__4beamf, 0x00271790");
class beam_effect_width { char padding[4]; float start; float target; float delta; public: void apply_target_vals(beam *value); };
void beam_effect_width::apply_target_vals(beam *value) { value->set_thickness(target); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7D60)
// 0x002B7D60 reverse__17beam_effect_width
class beam_effect_width { char padding[4]; float start; float target; float delta; public: void reverse(); };
void beam_effect_width::reverse() { float temporary = start; start = target; target = temporary; delta = -delta; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7FC8)
// 0x002B7FC8 reverse__17beam_effect_alpha
class beam_effect_alpha { char padding[4]; unsigned char start; unsigned char target; char padding2[2]; float delta; public: void reverse(); };
void beam_effect_alpha::reverse() { unsigned char temporary = start; start = target; target = temporary; delta = -delta; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7BA0)
// 0x002B7BA0 possibly_active__C4beam
struct entity_vtable_layout { char padding[0x158]; short adjustment; short padding2; bool (*is_visible)(void *self); };
class beam { char padding[8]; entity_vtable_layout *vtable; public: bool possibly_active() const; };
bool beam::possibly_active() const { entity_vtable_layout *table = vtable; return table->is_visible((char *)this + table->adjustment); }
#endif
