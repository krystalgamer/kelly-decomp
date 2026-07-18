struct nslState { char padding[0x15884]; bool proview; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitProviewModePS2(bool value) { nsl.proview = value; }
