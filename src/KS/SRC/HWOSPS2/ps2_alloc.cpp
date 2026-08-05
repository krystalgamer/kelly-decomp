// Matching decompilation blocks selected by generated build shims.


// 0x001DF9B8 os_alloc_init__Fv
void os_alloc_init() {
}

// 0x001DF9C0 os_alloc_shutdown__Fv
void os_alloc_shutdown() {
}

// 0x001DF9C8 os_malloc__Fi
#include "KS/SRC/archalloc.h"

extern const char os_malloc_description[];
void *os_malloc(int size) { return arch_malloc(size, os_malloc_description, 0); }

// 0x001DFA10 os_malloc32__Fi
#include "KS/SRC/archalloc.h"

extern const char os_malloc32_description[];
void *os_malloc32(int size) { return arch_malloc(size, os_malloc32_description, 0); }
