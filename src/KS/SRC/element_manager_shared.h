#ifndef KELLY_DECOMP_ELEMENT_MANAGER_SHARED_H
#define KELLY_DECOMP_ELEMENT_MANAGER_SHARED_H

struct gcc2_deleting_vtable {
    char prefix[8];
    short adjustment;
    short unused;
    void (*destroy)(void *, int);
};

struct hw_texture_destruction_layout {
    unsigned count;
    char payload[60];
    gcc2_deleting_vtable *vtable;
};

struct font_def_destruction_layout {
    char char_infos[0x1800];
    hw_texture_destruction_layout *frame;
};

struct element_context_list_node {
    element_context_list_node *next;
};

struct element_manager_destruction_layout {
    const void *vtable;
    char interface_font_name[8];
    char projection_and_padding[68];
    element_context_list_node *context_sentinel;
};

struct element_context_list_pool {
    element_context_list_node *unused;
    element_context_list_node *free_list;
};

extern font_def_destruction_layout *font;
extern element_context_list_pool context_pool;
extern const char element_manager_vtable[];
extern const char singleton_vtable[];

extern "C" void clear_element_context_list(void *)
    __asm__(
        "clear__t10_List_base2ZPQ215element_manager7contextZt12my_allocator1ZPQ215element_manager7context");
extern "C" void destroy_string(void *, int) __asm__("_$_7stringx");
extern "C" void builtin_delete(void *) __asm__("__builtin_delete");

__asm__(".equ font, 0x0044AB90");
__asm__(".equ context_pool, 0x003E5628");
__asm__(".equ element_manager_vtable, 0x004F1E68");
__asm__(".equ singleton_vtable, 0x004CE7A8");
__asm__(
    ".equ clear__t10_List_base2ZPQ215element_manager7contextZt12my_allocator1ZPQ215element_manager7context, "
    "0x002F3C08");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");

#endif
