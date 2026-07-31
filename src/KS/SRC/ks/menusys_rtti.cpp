// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00270210)
extern "C" void MENU_TermMenus() __asm__("MENU_TermMenus__Fv");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char menu_render_vtable[];

__asm__(".equ MENU_TermMenus__Fv, 0x00240388");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ menu_render_vtable, 0x004D5E28");

struct MenuRenderLayout {
    char data[0x458];
    const void *vtable;
};

// 0x00270210 _$_10MenuRender
extern "C" void MenuRenderDtor(void *self, int deleting)
    __asm__("_$_10MenuRender");
void MenuRenderDtor(void *self, int deleting)
{
    ((MenuRenderLayout *)self)->vtable = menu_render_vtable;
    MENU_TermMenus();
    if (deleting & 1) {
        BuiltinDelete(self);
        // Prevent the demonstrated operator-delete tail call in this generated destructor.
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002702A0)
// 0x002702A0 _$_9MenuInput
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5E00");

struct target_layout {
    char padding[0x10];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_9MenuInput");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002701D0)
// 0x002701D0 __tf10MenuRender
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120E8"); asm(".equ type_name, 0x004E5068");
extern "C" void *GetTypeInfo() __asm__("__tf10MenuRender");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270260)
// 0x00270260 __tf9MenuInput
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x005120F0"); asm(".equ type_name, 0x004E5078");
extern "C" void *GetTypeInfo() __asm__("__tf9MenuInput");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00270368)
// 0x00270368 _$_10MenuSystem
extern "C" void term_menus() __asm__("MENU_TermMenus__Fv");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_render_vtable[];
extern const char menu_input_vtable[];
__asm__(".equ MENU_TermMenus__Fv, 0x00240388");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ menu_render_vtable, 0x004D5E28");
__asm__(".equ menu_input_vtable, 0x004D5E00");
struct menu_system_layout {
    char padding[0x458];
    const void *render_vtable;
    char padding2[0x10];
    const void *input_vtable;
};
extern "C" void destroy_menu_system(
    menu_system_layout *self,int flags
) __asm__("_$_10MenuSystem");
void destroy_menu_system(menu_system_layout *self,int flags) {
    register menu_system_layout *object __asm__("$17")=self;
    register int delete_flags __asm__("$16")=flags;
    register const void *render __asm__("$6")=menu_render_vtable;
    register const void *input __asm__("$4")=menu_input_vtable;
    __asm__ __volatile__(
        "" : "+r"(object), "+r"(delete_flags), "+r"(render), "+r"(input)
    );
    object->input_vtable=input;
    object->render_vtable=render;
    term_menus();
    if (delete_flags&1) {
        object_delete(object);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
