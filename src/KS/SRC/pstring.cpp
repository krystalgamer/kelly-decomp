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

#if defined(KELLY_DECOMP_FUNCTION_00335648)
// 0x00335648 unpack_string__C7pstring
#include "KS/SRC/pstring_shared.h"

__asm__(".equ _7pstring$output_index, 0x0046B510");
__asm__(".equ _7pstring$output_cache, 0x005A5470");
__asm__(".equ _7pstring$pc_to_ascii, 0x00500B88");

const char *pstring::unpack_string() const
{
    int shift;
    unsigned int index = 0;
    unsigned int character;

    for (unsigned int chunk = 0; chunk < 4; ++chunk)
    {
        shift = 58;
        while (shift >= 4)
        {
            character = char(pchunk[chunk] >> shift) & 0x3F;
            output_cache[output_index][index] =
                pc_to_ascii[character];
            if (output_cache[output_index][index] == 0)
                break;
            shift -= 6;
            ++index;
        }
    }

    output_cache[output_index][index] = 0;
    char *result = output_cache[output_index];
    output_index++;
    if (output_index >= 12)
        output_index = 0;
    return result;
}
#endif
