class quaternion;
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1Z10quaternionUi, 0x00119B70");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<quaternion>::operator new(unsigned int, unsigned int, const char*, int);
