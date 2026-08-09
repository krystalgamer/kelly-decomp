#ifndef ATTRIBUTE_TEMPLATE_CLASS_HEADER
#define ATTRIBUTE_TEMPLATE_CLASS_HEADER

#include "KS/SRC/pstring.h"

template <class Type>
class basic_attribute {
private:
    static pstring type_name;
    Type value;

public:
    basic_attribute(
        const char *attribute_type_name,
        const Type &new_value,
        const Type &min_value,
        const Type &max_value);
    basic_attribute(const char *attribute_type_name, const Type &new_value);
    basic_attribute(const basic_attribute &other);
    virtual ~basic_attribute() {}

    virtual const pstring &get_class_name() const {
        return type_name;
    }

    const Type &get() const {
        return value;
    }

    operator Type() {
        return value;
    }

    void set(const Type &new_value) {
        value = new_value;
    }
};

template <class Type>
class bounded_attribute {
private:
    static pstring type_name;
    Type max_value;
    Type min_value;
    Type value;

public:
    bounded_attribute(
        const char *attribute_type_name,
        const Type &new_value,
        const Type &min_value,
        const Type &max_value);
    bounded_attribute(const bounded_attribute &other);
    virtual ~bounded_attribute() {}

    virtual const pstring &get_class_name() const {
        return type_name;
    }
};

#endif

#if defined(KELLY_DECOMP_FUNCTION_001452F8)
// 0x001452F8 __tft15basic_attribute1Zf
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512010"); asm(".equ type_name, 0x004CEA70");
extern "C" void *GetTypeInfo() __asm__("__tft15basic_attribute1Zf");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145758)
// 0x00145758 __tft15basic_attribute1Zi
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512018"); asm(".equ type_name, 0x004CEB30");
extern "C" void *GetTypeInfo() __asm__("__tft15basic_attribute1Zi");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00145870)
// 0x00145870 __tft15basic_attribute1Z7pstring
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512020"); asm(".equ type_name, 0x004CEB68");
extern "C" void *GetTypeInfo() __asm__("__tft15basic_attribute1Z7pstring");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001464E0)
// 0x001464E0 __tft3map4Z9entity_idZP6entityZt4less1Z9entity_idZt23__malloc_alloc_template1i0
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512000"); asm(".equ type_name, 0x004CEC90");
extern "C" void *GetTypeInfo() __asm__("__tft3map4Z9entity_idZP6entityZt4less1Z9entity_idZt23__malloc_alloc_template1i0");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003136C8)
// 0x003136C8 __tft17bounded_attribute1Zi
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *bounded_attribute_type[] __asm__("__tit17bounded_attribute1Zi");
extern "C" char bounded_attribute_name[] __asm__("__tnt17bounded_attribute1Zi");
__asm__(".equ __tit17bounded_attribute1Zi, 0x005121A8");
__asm__(".equ __tnt17bounded_attribute1Zi, 0x00508A28");
__asm__(".equ __rtti_user, 0x003CE2F8");

extern "C" void **bounded_attribute_rtti() __asm__("__tft17bounded_attribute1Zi");
void **bounded_attribute_rtti()
{
    if (!bounded_attribute_type[0])
        __rtti_user(bounded_attribute_type, bounded_attribute_name);
    return bounded_attribute_type;
}
#endif
