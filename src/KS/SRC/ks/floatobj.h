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

#if defined(KELLY_DECOMP_FUNCTION_0026F8C0)
// 0x0026F8C0 __tf12beach_object
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120D0"); asm(".equ type_name, 0x004E4F50");
extern "C" void *GetTypeInfo() __asm__("__tf12beach_object");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FB30)
// 0x0026FB30 __tf12generic_anim
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120D8"); asm(".equ type_name, 0x004E4FB0");
extern "C" void *GetTypeInfo() __asm__("__tf12generic_anim");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FB70)
// 0x0026FB70 _$_12generic_anim
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char generic_anim_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ generic_anim_vtable, 0x004D6030");

struct generic_anim_layout
{
    char string_and_fields[0x1c];
    const void *vtable;
};

extern "C" void GenericAnimDtor(void *self, int deleting)
    __asm__("_$_12generic_anim");

void GenericAnimDtor(void *self, int deleting)
{
    ((generic_anim_layout *)self)->vtable = generic_anim_vtable;
    StringDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026FD98)
// 0x0026FD98 _$_19generic_anim_animal
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char generic_anim_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ generic_anim_vtable, 0x004D6030");

struct generic_anim_layout
{
    char string_and_fields[0x1c];
    const void *vtable;
};

extern "C" void GenericAnimAnimalDtor(void *self, int deleting)
    __asm__("_$_19generic_anim_animal");

void GenericAnimAnimalDtor(void *self, int deleting)
{
    ((generic_anim_layout *)self)->vtable = generic_anim_vtable;
    StringDtor(self, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
