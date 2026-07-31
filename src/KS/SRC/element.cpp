// Matching decompilation blocks selected by generated build shims.

// 0x002CA428 do_event__11color_eventRCf
#include "KS/SRC/element.h"

void color_event::do_event(const float &lerp)
{
    for (int index = 0; index < 4; ++index)
    {
        owner->mycolor[index].r +=
            (mycolor.r - owner->mycolor[index].r) * lerp;
        owner->mycolor[index].g +=
            (mycolor.g - owner->mycolor[index].g) * lerp;
        owner->mycolor[index].b +=
            (mycolor.b - owner->mycolor[index].b) * lerp;
        owner->mycolor[index].a +=
            (mycolor.a - owner->mycolor[index].a) * lerp;
    }
}

// 0x002CA4F0 do_event__10move_eventRCf
#include "KS/SRC/element.h"
void move_event::do_event(const float& lerp){owner->T[0]+=(x-owner->T[0])*lerp;owner->T[1]+=(y-owner->T[1])*lerp;}

// 0x002CA5C0 do_event__11scale_eventRCf
#include "KS/SRC/element.h"
void scale_event::do_event(const float& lerp){owner->S[0]+=(sx-owner->S[0])*lerp;owner->S[1]+=(sy-owner->S[1])*lerp;}

// 0x002CA2A8 _$_15element_manager
#include "KS/SRC/element.h"

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

extern "C" void destroy_element_manager(
    element_manager_destruction_layout *, int)
    __asm__("_$_15element_manager");

void destroy_element_manager(
    element_manager_destruction_layout *self,
    int deleting)
{
    self->vtable = element_manager_vtable;

    font_def_destruction_layout *owned_font = font;
    if (owned_font) {
        if (owned_font->frame && --owned_font->frame->count == 0) {
            hw_texture_destruction_layout *texture = owned_font->frame;
            if (texture) {
                gcc2_deleting_vtable *vtable = texture->vtable;
                vtable->destroy(
                    reinterpret_cast<char *>(texture) + vtable->adjustment,
                    3);
            }
        }
        builtin_delete(owned_font);
    }

    clear_element_context_list(&self->context_sentinel);
    element_context_list_node *sentinel = self->context_sentinel;
    sentinel->next = context_pool.free_list;
    context_pool.free_list = sentinel;

    destroy_string(&self->interface_font_name, 2);
    self->vtable = singleton_vtable;

    if (deleting & 1)
        builtin_delete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
