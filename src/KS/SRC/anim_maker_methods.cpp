// Animation maker definitions extracted by generated one-function shims.

// 0x00120EF8 __tf10anim_maker
extern "C" void __rtti_user(void *info, const char *name);
asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int anim_maker_typeinfo[];
extern const char anim_maker_type_name[];
asm(".equ anim_maker_typeinfo, 0x00511FB8");
asm(".equ anim_maker_type_name, 0x004CA4E8");
extern "C" void *AnimMakerRtti() __asm__("__tf10anim_maker");
void *AnimMakerRtti(){if(!anim_maker_typeinfo[0])__rtti_user(anim_maker_typeinfo,anim_maker_type_name);return anim_maker_typeinfo;}
