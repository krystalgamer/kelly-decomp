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
