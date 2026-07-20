// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00146460)
// 0x00146460 get_class_name__Ct15basic_attribute1Zi
class pstring {};

extern const pstring basic_attribute_int_type_name;
__asm__(".equ basic_attribute_int_type_name, 0x005A2628");

template <class Type>
class basic_attribute {
public:
    const pstring& get_class_name() const;
};

template <class Type>
const pstring& basic_attribute<Type>::get_class_name() const {
    return basic_attribute_int_type_name;
}

template const pstring& basic_attribute<int>::get_class_name() const;
#endif

#if defined(KELLY_DECOMP_FUNCTION_00146470)
// 0x00146470 get_class_name__Ct15basic_attribute1Z7pstring
class pstring {};

extern const pstring basic_attribute_pstring_type_name;
__asm__(".equ basic_attribute_pstring_type_name, 0x005A2648");

template <class Type>
class basic_attribute {
public:
    const pstring& get_class_name() const;
};

template <class Type>
const pstring& basic_attribute<Type>::get_class_name() const {
    return basic_attribute_pstring_type_name;
}

template const pstring& basic_attribute<pstring>::get_class_name() const;
#endif

#if defined(KELLY_DECOMP_FUNCTION_00146480)
// 0x00146480 get_class_name__Ct15basic_attribute1Zf
class pstring {};

extern const pstring basic_attribute_float_type_name;
__asm__(".equ basic_attribute_float_type_name, 0x005A2608");

template <class Type>
class basic_attribute {
public:
    const pstring& get_class_name() const;
};

template <class Type>
const pstring& basic_attribute<Type>::get_class_name() const {
    return basic_attribute_float_type_name;
}

template const pstring& basic_attribute<float>::get_class_name() const;
#endif

#if defined(KELLY_DECOMP_FUNCTION_003141B8)
// 0x003141B8 get_class_name__Ct17bounded_attribute1Zi
class pstring {};
extern const pstring bounded_attribute_int_type_name;
__asm__(".equ bounded_attribute_int_type_name, 0x005A2758");
template <class Type> class bounded_attribute { public: const pstring& get_class_name() const; };
template <class Type> const pstring& bounded_attribute<Type>::get_class_name() const { return bounded_attribute_int_type_name; }
template const pstring& bounded_attribute<int>::get_class_name() const;
#endif

#if defined(KELLY_DECOMP_FUNCTION_001453E0)
// 0x001453E0 _$_t15basic_attribute1Zf
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CDFE0");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_t15basic_attribute1Zf");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145840)
// 0x00145840 _$_t15basic_attribute1Zi
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CDF00");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_t15basic_attribute1Zi");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145958)
// 0x00145958 _$_t15basic_attribute1Z7pstring
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004CDEC0");

struct target_layout {
    char padding[0x20];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_t15basic_attribute1Z7pstring");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003137B0)
// 0x003137B0 _$_t17bounded_attribute1Zi
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004F7C58");

struct target_layout {
    char padding[0xc];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_t17bounded_attribute1Zi");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
