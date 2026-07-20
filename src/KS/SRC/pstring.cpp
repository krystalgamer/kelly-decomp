// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00335498)
// 0x00335498 __7pstringRC7stringx
class stringx {
    const char *text;

public:
    const char *c_str() const {
        return text;
    }
};

class pstring {
public:
    pstring(const stringx &target_string);
    void pack_string(const char *text);
};

__asm__(".equ pack_string__7pstringPCc, 0x003354D0");

pstring::pstring(const stringx &target_string) {
    pack_string(target_string.c_str());
}
#endif
