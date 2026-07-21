// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00112DF0)
// 0x00112DF0 process_movement__13ai_locomotionf
class ai_locomotion {
public:
    bool process_movement(float time);
};

bool ai_locomotion::process_movement(float time) {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112DA8)
// 0x00112DA8 __tf13ai_locomotion
extern "C" void __rtti_user(void *info, const char *name);
asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo");
extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511F98");
asm(".equ type_name, 0x004C87F8");
extern "C" void *GetTypeInfo() __asm__("__tf13ai_locomotion");
void *GetTypeInfo() { if (typeinfo[0] == 0) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
