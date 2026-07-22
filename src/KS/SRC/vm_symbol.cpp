// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_003541A0) || \
    defined(KELLY_DECOMP_FUNCTION_003541D8) || \
    defined(KELLY_DECOMP_FUNCTION_00354220)
#include "KS/SRC/vm_symbol_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00354220)
// 0x00354220 serial_in__FR10chunk_fileP9vm_symbol
__asm__(".equ serial_in__FR10chunk_fileP7stringx, 0x003369F8");
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");

void serial_in(chunk_file &io, vm_symbol *s) {
    serial_in(io, &s->type_name);
    serial_in(io, &s->name);
    serial_in(io, &s->offset);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003541A0)
// 0x003541A0 __9vm_symbol
__asm__(".equ __7stringx, 0x0034D3E0");

vm_symbol::vm_symbol()
    : type_name(),
      name(),
      offset(0)
{
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003541D8)
// 0x003541D8 __9vm_symbolRC9vm_symbol
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");

vm_symbol::vm_symbol(const vm_symbol &b)
    : type_name(b.type_name),
      name(b.name),
      offset(b.offset)
{
}
#endif
