class MenuEntry;
extern unsigned char profiler_enabled;
__asm__(".equ profiler_enabled, 0x00431AFF");
bool ProfButton(MenuEntry* entry, int button) { profiler_enabled = 1; return true; }
