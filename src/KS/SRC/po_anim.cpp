// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001199B8)
// 0x001199B8 __nw__7po_animUiUiPCci
class po_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__7po_animUi, 0x00119930");
void* po_anim::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = po_anim::operator new(size); __asm__ volatile(""); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119BF8)
// 0x00119BF8 __nw__t11linear_anim1Z10quaternionUiUiPCci
class quaternion;
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1Z10quaternionUi, 0x00119B70");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<quaternion>::operator new(unsigned int, unsigned int, const char*, int);
#endif

#if defined(KELLY_DECOMP_FUNCTION_00119E38)
// 0x00119E38 __nw__t11linear_anim1Z8vector3dUiUiPCci
class vector3d;
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1Z8vector3dUi, 0x00119DB0");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<vector3d>::operator new(unsigned int, unsigned int, const char*, int);
#endif

#if defined(KELLY_DECOMP_FUNCTION_0011A078)
// 0x0011A078 __nw__t11linear_anim1ZfUiUiPCci
template <class Type> class linear_anim { public: static void* operator new(unsigned int size); static void* operator new(unsigned int size, unsigned int alignment, const char* file, int line); };
__asm__(".equ __nw__t11linear_anim1ZfUi, 0x00119FF0");
template <class Type> void* linear_anim<Type>::operator new(unsigned int size, unsigned int alignment, const char* file, int line) { void* result = linear_anim<Type>::operator new(size); __asm__(""); return result; }
template void* linear_anim<float>::operator new(unsigned int, unsigned int, const char*, int);
#endif
