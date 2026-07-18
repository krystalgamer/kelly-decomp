extern int memory_checkpoint;
__asm__(".equ memory_checkpoint, 0x00570554");

int mem_set_checkpoint() {
    return memory_checkpoint;
}
