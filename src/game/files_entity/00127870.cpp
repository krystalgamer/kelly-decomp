class entity { public: class movement_info { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); }; };
__asm__(".equ __nw__Q26entity13movement_infoUi, 0x001277E8");
void* entity::movement_info::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity::movement_info::operator new(size); __asm__ volatile(""); return result; }
