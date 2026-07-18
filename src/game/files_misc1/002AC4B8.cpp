extern bool malloc_locked;
__asm__(".equ malloc_locked, 0x004322D4");

bool mem_malloc_locked() {
    return malloc_locked;
}
