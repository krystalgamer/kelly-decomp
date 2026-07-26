#ifndef KELLY_DECOMP_TRICK_MENU_ACTIVATION_SHARED_H
#define KELLY_DECOMP_TRICK_MENU_ACTIVATION_SHARED_H

struct trick_menu_layout;
struct trick_menu_entry;

struct trick_menu_entry_vtable
{
    char entries_to_get_disable[0x30];
    short get_disable_adjustment;
    short get_disable_padding;
    bool (*get_disable)(void *self);
};

struct trick_menu_entry
{
    char data_to_vtable[0x60];
    trick_menu_entry_vtable *vtable;
};

struct trick_menu_vtable
{
    char entries_to_set_high[0x18];
    short set_high_adjustment;
    short set_high_padding;
    void (*set_high)(
        void *self,
        trick_menu_entry *entry,
        bool animate
    );
    short set_vis_adjustment;
    short set_vis_padding;
    void (*set_vis)(void *self, trick_menu_entry *entry);
    char entries_to_init[0x08];
    short init_adjustment;
    short init_padding;
    void (*init)(void *self);
    char entries_to_highlight_default[0x30];
    short highlight_default_adjustment;
    short highlight_default_padding;
    void (*highlight_default)(void *self);
};

struct trick_menu_layout
{
    char data_to_first_visible[0x44];
    trick_menu_entry *first_visible;
    char data_to_highlighted[0x04];
    trick_menu_entry *highlighted;
    char data_to_vtable[0x24];
    trick_menu_vtable *vtable;
};

#endif
