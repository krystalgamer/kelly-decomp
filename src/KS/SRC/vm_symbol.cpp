// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003541A0)
// 0x003541A0 __9vm_symbol
class stringx {
    char *chars;
    void *buffer;

public:
    stringx();
};

__asm__(".equ __7stringx, 0x0034D3E0");

class vm_symbol {
    stringx type_name;
    stringx name;
    int offset;

public:
    vm_symbol();
};

vm_symbol::vm_symbol()
    : type_name(),
      name(),
      offset(0)
{
}
#endif
