class entity_track_tree { public: static const char* binary_extension(); static const char* extension(); };
__asm__(".equ binary_extension__17entity_track_tree, 0x00114E60");
const char* entity_track_tree::extension() { const char* result = binary_extension(); __asm__ volatile(""); return result; }
