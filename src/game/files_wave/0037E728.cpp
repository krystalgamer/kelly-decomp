extern int wavetex_player;
__asm__(".equ wavetex_player, 0x00484EC0");
void WAVETEX_SetPlayer(int value) { wavetex_player = value; }
