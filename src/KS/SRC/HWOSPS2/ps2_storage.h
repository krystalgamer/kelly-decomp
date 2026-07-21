// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001E9858)
// 0x001E9858 __tf29storage_unit_changed_callback
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120B0"); asm(".equ type_name, 0x004DF9F8");
extern "C" void *GetTypeInfo() __asm__("__tf29storage_unit_changed_callback");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
