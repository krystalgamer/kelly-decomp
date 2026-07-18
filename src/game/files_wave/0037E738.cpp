extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
int WAVETEX_GetPlayer() { return wavetex_player; }
