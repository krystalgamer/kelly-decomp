extern bool nglUsingProView;
__asm__(".equ nglUsingProView, 0x004BB794");
void nglSetProViewPS2(bool value) { nglUsingProView = value; }
