// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/vm_symbol.h"

// 0x00354220 serial_in__FR10chunk_fileP9vm_symbol
__asm__(".equ serial_in__FR10chunk_fileP7stringx, 0x003369F8");
__asm__(".equ serial_in__FR10chunk_filePi, 0x003368A0");
extern "C" void serial_in_integer(chunk_file &io, int *value)
    __asm__("serial_in__FR10chunk_filePi");

void serial_in(chunk_file &io, vm_symbol *s) {
    serial_in(io, &s->type_name);
    serial_in(io, &s->name);
    void (*read_offset)(chunk_file &, int *) = serial_in_integer;
    read_offset(io, &s->offset);
}

// 0x003541A0 __9vm_symbol
__asm__(".equ __7stringx, 0x0034D3E0");

vm_symbol::vm_symbol()
    : type_name(),
      name(),
      offset(0)
{
}

// 0x003541D8 __9vm_symbolRC9vm_symbol
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");

vm_symbol::vm_symbol(const vm_symbol &b)
    : type_name(b.type_name),
      name(b.name),
      offset(b.offset)
{
}
