#ifndef KELLY_DECOMP_VM_SYMBOL_SHARED_H
#define KELLY_DECOMP_VM_SYMBOL_SHARED_H

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
};

#endif
