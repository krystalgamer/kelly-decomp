extern int display_file;
extern int display_flag;
__asm__(".equ display_file, 0x0049AFFC");
__asm__(".equ display_flag, 0x00596F9C");
static void endDisplay() { display_file = 0; display_flag = 0; }
__asm__(".globl endDisplay__Fv");
