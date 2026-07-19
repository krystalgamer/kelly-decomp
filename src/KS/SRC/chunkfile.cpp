// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00336B28)
// 0x00336B28 c_str__C12chunk_flavor
class chunk_flavor {
    char flavor[1];
public:
    const char* c_str() const;
};

const char* chunk_flavor::c_str() const {
    return flavor;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00336B60)
// 0x00336B60 __eq__C12chunk_flavorRC12chunk_flavor
extern "C" int strcmp(const char *left, const char *right);
__asm__(".equ strcmp, 0x003D3E88");
class chunk_flavor { char text[1]; public: bool operator==(const chunk_flavor &other) const; };
bool chunk_flavor::operator==(const chunk_flavor &other) const { return strcmp(text, other.text) == 0; }
#endif
