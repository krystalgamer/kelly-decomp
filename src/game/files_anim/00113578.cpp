class entity_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__11entity_animUi, 0x001134F0");
void* entity_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity_anim::operator new(size); __asm__ volatile(""); return result; }
