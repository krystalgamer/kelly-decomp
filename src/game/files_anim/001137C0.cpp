class entity_anim_tree { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__16entity_anim_treeUi, 0x00113738");
void* entity_anim_tree::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = entity_anim_tree::operator new(size); __asm__ volatile(""); return result; }
