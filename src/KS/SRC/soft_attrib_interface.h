// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00146298)
// 0x00146298 get_soft_attrib_str__C21soft_attrib_interfaceR7pstring
class pstring { int value; public: pstring(const char *text) { pack_string(text); } pstring(const pstring &other) { value = other.value; } void pack_string(const char *text); };
__asm__(".equ pack_string__7pstringPCc, 0x003354D0");
class soft_attrib_interface { public: const pstring get_soft_attrib_str(pstring &name) const; };
const pstring soft_attrib_interface::get_soft_attrib_str(pstring &name) const { return pstring(0); }
#endif
