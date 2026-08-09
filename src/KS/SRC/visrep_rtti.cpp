// visual_rep RTTI definitions extracted by generated one-function shims.


// 0x002FEA60 __tf10visual_rep
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512158"); asm(".equ type_name, 0x004F4AC8");
extern "C" void *GetTypeInfo() __asm__("__tf10visual_rep");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
