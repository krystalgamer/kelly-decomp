enum nslPs2CdDvdMode { NSL_MODE_ZERO };
struct nslState { char padding[0x15870]; nslPs2CdDvdMode cd_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
void nslPreInitCdDvdModePS2(nslPs2CdDvdMode value) { nsl.cd_mode = value; }
