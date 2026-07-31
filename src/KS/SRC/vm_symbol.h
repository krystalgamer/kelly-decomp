#ifndef VM_SYMBOL_H
#define VM_SYMBOL_H

#include "KS/SRC/stringx.h"

class chunk_file;
class vm_symbol;
void serial_in(chunk_file &io, vm_symbol *symbol);

class vm_symbol {
protected:
    stringx type_name;
    stringx name;
    int offset;

public:
    vm_symbol();
    vm_symbol(const vm_symbol &other);

    friend void serial_in(chunk_file &io, vm_symbol *symbol);
};

void serial_in(chunk_file &io, stringx *text);
void serial_in(chunk_file &io, int *value);

#endif
