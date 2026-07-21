// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00112F90)
// 0x00112F90 __tf7ai_goal
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FA0"); asm(".equ type_name, 0x004C8818");
extern "C" void *GetTypeInfo() __asm__("__tf7ai_goal");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
