class po_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__7po_animUi, 0x00119930");
void* po_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = po_anim::operator new(size); __asm__ volatile(""); return result; }
