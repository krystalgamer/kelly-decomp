// singleton definitions extracted by generated one-function shims.


// 0x00144398 __tf9singleton
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FF8"); asm(".equ type_name, 0x004CE9B0");
extern "C" void *GetTypeInfo() __asm__("__tf9singleton");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
