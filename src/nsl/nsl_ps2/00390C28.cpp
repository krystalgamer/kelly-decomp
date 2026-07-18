struct nslState { char padding[0x15864]; int speaker_mode; };
extern nslState nsl;
__asm__(".equ nsl, 0x0049B5F0");
int nslGetSpeakerMode() { return nsl.speaker_mode; }
