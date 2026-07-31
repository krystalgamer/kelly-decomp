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
#include "KS/SRC/element_manager_shared.h"

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
