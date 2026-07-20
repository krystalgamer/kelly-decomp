// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00358110)
// 0x00358110 fill__H2ZPQ212typeface_def10inter_kernZQ212typeface_def10inter_kern_X01X01RCX11_v
struct inter_kern {
    char first[8];
    int last;
};

extern "C" void Fill(
    inter_kern *first,
    inter_kern *last,
    const inter_kern &value
) __asm__("fill__H2ZPQ212typeface_def10inter_kernZQ212typeface_def10inter_kern_X01X01RCX11_v");

void Fill(
    inter_kern *first,
    inter_kern *last,
    const inter_kern &value
) {
    __asm__ volatile(
        ".set noreorder\n\t"
        "beq $4,$5,2f\n\t"
        "nop\n"
        "1:\n\t"
        "ldl $2,7($6)\n\t"
        "ldr $2,0($6)\n\t"
        "lw $3,8($6)\n\t"
        "sdl $2,7($4)\n\t"
        "sdr $2,0($4)\n\t"
        "sw $3,8($4)\n\t"
        "addiu $4,$4,12\n\t"
        "bne $4,$5,1b\n\t"
        "nop\n"
        "2:\n\t"
        ".set reorder"
        :
        : "r"(first), "r"(last), "r"(&value)
        : "$2", "$3", "memory"
    );
}
#endif
