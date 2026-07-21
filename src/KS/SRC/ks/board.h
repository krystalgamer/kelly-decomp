// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026EB70)
// 0x0026EB70 __tf20SurfBoardObjectClass
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120C8"); asm(".equ type_name, 0x004E4D60");
extern "C" void *GetTypeInfo() __asm__("__tf20SurfBoardObjectClass");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
