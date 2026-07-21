// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DA3A0)
// 0x001DA3A0 Kind__C17PanelAnimInstance
enum PanelAnimKind {
    AnimInstance = 0xA1
};

class PanelAnimInstance {
public:
    PanelAnimKind Kind() const;
};

PanelAnimKind PanelAnimInstance::Kind() const {
    return AnimInstance;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA298)
// 0x001DA298 __tf9PanelAnim
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512060"); asm(".equ type_name, 0x004DD920");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelAnim");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA3A8)
// 0x001DA3A8 __tf13PanelAnimFile
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512068"); asm(".equ type_name, 0x004DD948");
extern "C" void *GetTypeInfo() __asm__("__tf13PanelAnimFile");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA3F0)
// 0x001DA3F0 __tf16PanelAnimManager
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512070"); asm(".equ type_name, 0x004DD958");
extern "C" void *GetTypeInfo() __asm__("__tf16PanelAnimManager");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
