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

#if defined(KELLY_DECOMP_FUNCTION_002B7DE0)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/beam_shared.h"

extern "C" void **beam_effect_alpha_base_rtti()
    __asm__("__tf16beam_effect_type");
extern "C" void *beam_effect_alpha_type[]
    __asm__("__ti17beam_effect_alpha");
extern "C" const char beam_effect_alpha_name[];
extern "C" void *beam_effect_alpha_base_type[]
    __asm__("__ti16beam_effect_type");

__asm__(".equ __tf16beam_effect_type, 0x002B95A0");
__asm__(".equ __ti17beam_effect_alpha, 0x005A3D80");
__asm__(".equ beam_effect_alpha_name, 0x004FE448");
__asm__(".equ __ti16beam_effect_type, 0x00512140");

// 0x002B7DE0 __tf17beam_effect_alpha
extern "C" void **beam_effect_alpha_rtti()
    __asm__("__tf17beam_effect_alpha");
void **beam_effect_alpha_rtti()
{
    if (!beam_effect_alpha_type[0]) {
        beam_effect_alpha_base_rtti();
        __rtti_si(
            beam_effect_alpha_type,
            beam_effect_alpha_name,
            beam_effect_alpha_base_type
        );
    }
    return beam_effect_alpha_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7C70)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/beam_shared.h"

extern "C" void **beam_effect_width_base_rtti()
    __asm__("__tf16beam_effect_type");
extern "C" void *beam_effect_width_type[]
    __asm__("__ti17beam_effect_width");
extern "C" const char beam_effect_width_name[];
extern "C" void *beam_effect_width_base_type[]
    __asm__("__ti16beam_effect_type");

__asm__(".equ __tf16beam_effect_type, 0x002B95A0");
__asm__(".equ __ti17beam_effect_width, 0x005A3D70");
__asm__(".equ beam_effect_width_name, 0x004FE430");
__asm__(".equ __ti16beam_effect_type, 0x00512140");

// 0x002B7C70 __tf17beam_effect_width
extern "C" void **beam_effect_width_rtti()
    __asm__("__tf17beam_effect_width");
void **beam_effect_width_rtti()
{
    if (!beam_effect_width_type[0]) {
        beam_effect_width_base_rtti();
        __rtti_si(
            beam_effect_width_type,
            beam_effect_width_name,
            beam_effect_width_base_type
        );
    }
    return beam_effect_width_type;
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

#if defined(KELLY_DECOMP_FUNCTION_002B8440)
// 0x002B8440 is_delaying__C11beam_effect
class beam_effect { char padding0[10]; signed char mode; public: bool is_delaying() const; };
bool beam_effect::is_delaying() const { return mode == 1 || mode == -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8468)
// 0x002B8468 is_active__C11beam_effect
class beam_effect { char padding0[10]; signed char mode; public: bool is_active() const; };
bool beam_effect::is_active() const { return mode == 2 || mode == -2; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8490)
// 0x002B8490 is_looping__C11beam_effect
class beam_effect { char padding0[16]; float loop_delay; public: bool is_looping() const; };
bool beam_effect::is_looping() const { float delay = loop_delay; float zero = 0.0f; __asm__ volatile("nop"); return zero <= delay; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7D30)
// 0x002B7D30 apply_delta_vals__17beam_effect_widthP4beamf
class beam { public: char padding[0x200]; float thickness; void set_thickness(float value); };
__asm__(".equ set_thickness__4beamf, 0x00271790");
class beam_effect_width { char padding[0x0c]; float delta; public: void apply_delta_vals(beam *value, float time); };
void beam_effect_width::apply_delta_vals(beam *value, float time) { value->set_thickness(value->thickness + delta * time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7CC0)
// 0x002B7CC0 _$_17beam_effect_width
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FEA50");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17beam_effect_width");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B7E30)
// 0x002B7E30 _$_17beam_effect_alpha
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FEA50");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17beam_effect_alpha");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B80A0)
// 0x002B80A0 _$_17beam_effect_color
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FEA50");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_17beam_effect_color");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B95E0)
// 0x002B95E0 _$_16beam_effect_type
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004FEA50");

struct target_layout {
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_16beam_effect_type");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B83E0)
// 0x002B83E0 __tf11beam_effect
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512120"); asm(".equ type_name, 0x004FE478");
extern "C" void *GetTypeInfo() __asm__("__tf11beam_effect");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B95A0)
// 0x002B95A0 __tf16beam_effect_type
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512140"); asm(".equ type_name, 0x004FEAB8");
extern "C" void *GetTypeInfo() __asm__("__tf16beam_effect_type");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
#if defined(KELLY_DECOMP_FUNCTION_002B7B38)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/beam_shared.h"

extern "C" void **beam_base_rtti() __asm__("__tf6entity");
extern "C" void *beam_type[] __asm__("__ti4beam");
extern "C" const char beam_name[];
extern "C" void *beam_base_type[] __asm__("__ti6entity");

__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti4beam, 0x005A3D60");
__asm__(".equ beam_name, 0x004FE428");
__asm__(".equ __ti6entity, 0x005A27C8");

// 0x002B7B38 __tf4beam
extern "C" void **beam_rtti() __asm__("__tf4beam");
void **beam_rtti()
{
    if (!beam_type[0]) {
        beam_base_rtti();
        __rtti_si(beam_type, beam_name, beam_base_type);
    }
    return beam_type;
}
#endif
