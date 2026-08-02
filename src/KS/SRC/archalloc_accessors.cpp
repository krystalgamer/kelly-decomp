// Released allocator state accessors.

#include "KS/SRC/archalloc.h"

// 0x002AC4B8 mem_malloc_locked__Fv
bool mem_malloc_locked() {
    return malloc_locked;
}

// 0x002AC4F8 mem_set_checkpoint__Fv
int mem_set_checkpoint() {
    return heaps[SYSTEM_HEAP].GetCurrentMemMarker();
}
