#ifndef KELLY_DECOMP_VM_SYMBOL_SHARED_H
#define KELLY_DECOMP_VM_SYMBOL_SHARED_H

class chunk_file;
class vm_symbol;
void serial_in(chunk_file &io, vm_symbol *symbol);

class stringx {
    char *chars;
    void *buffer;

public:
    stringx();
    stringx(const stringx &other);
};

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
