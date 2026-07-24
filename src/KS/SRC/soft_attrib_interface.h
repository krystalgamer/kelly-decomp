// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001461A0)
#include "KS/SRC/entity_interfaces_shared.h"

extern "C" void **soft_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *soft_base_type[] __asm__("__ti16entity_interface");
extern "C" void *soft_type[] __asm__("__ti21soft_attrib_interface");
extern "C" const char soft_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti21soft_attrib_interface, 0x005A28C8");
__asm__(".equ soft_name, 0x004CEC38");

// 0x001461A0 __tf21soft_attrib_interface
extern "C" void **soft_rtti() __asm__("__tf21soft_attrib_interface");
void **soft_rtti()
{
    if (!soft_type[0]) {
        soft_base_rtti();
        __rtti_si(soft_type, soft_name, soft_base_type);
    }
    return soft_type;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00146298)
// 0x00146298 get_soft_attrib_str__C21soft_attrib_interfaceR7pstring
class pstring { int value; public: pstring(const char *text) { pack_string(text); } pstring(const pstring &other) { value = other.value; } void pack_string(const char *text); };
__asm__(".equ pack_string__7pstringPCc, 0x003354D0");
class soft_attrib_interface { public: const pstring get_soft_attrib_str(pstring &name) const; };
const pstring soft_attrib_interface::get_soft_attrib_str(pstring &name) const { return pstring(0); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00313A78)
// 0x00313A78 get_soft_attrib_str__C31character_soft_attrib_interfaceR7pstring
class pstring {
    int value;

public:
    pstring(const char *text) {
        pack_string(text);
    }

    pstring(const pstring &other) {
        value = other.value;
    }

    void pack_string(const char *text);
};

__asm__(".equ pack_string__7pstringPCc, 0x003354D0");

class character_soft_attrib_interface {
public:
    const pstring get_soft_attrib_str(pstring &name) const;
};

const pstring character_soft_attrib_interface::get_soft_attrib_str(
    pstring &name
) const {
    return pstring(0);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00146238)
// 0x00146238 get_soft_attrib_num__C21soft_attrib_interfaceR7pstring
struct pstring { unsigned long long data[4]; };
extern const pstring soft_attribute_name;
__asm__(".equ soft_attribute_name, 0x003E59F0");
class soft_attrib_interface {
    char padding[8];
    int value;
public:
    float get_soft_attrib_num(pstring &name) const;
};
float soft_attrib_interface::get_soft_attrib_num(pstring &name) const {
    unsigned int count=0;
    const unsigned long long *left=name.data;
    const unsigned long long *right=soft_attribute_name.data;
    register int equal __asm__("$2");
    do {
        if (*left!=*right) {
            equal=0;
            goto compared;
        }
        ++count;
        ++right;
        ++left;
    } while (count<4);
    equal=1;
compared:
    __asm__ __volatile__("" : "+r"(equal));
    if (equal) goto matched;
    return 0.0f;
matched:
    return (float)value;
}
#endif
