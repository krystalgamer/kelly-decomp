// Item definitions extracted by generated one-function shims.

// 0x002B85A0 is_an_item__C4item
#include "KS/SRC/item.h"
bool item::is_an_item() const { return true; }

// 0x002B85A8 get_count__C4item
#include "KS/SRC/item.h"
int item::get_count() const { return count; }

// 0x002B85B0 inc_count__4item
#include "KS/SRC/item.h"
void item::inc_count() { ++count; }

// 0x002B85C0 dec_count__4item
#include "KS/SRC/item.h"
void item::dec_count() { --count; }

// 0x002B85D0 set_count__4itemi
#include "KS/SRC/item.h"
void item::set_count(int value) { count = value; }

// 0x002B85D8 is_usable__C4item
struct item_usable_vtable {
    char padding[0x628];
    short adjustment;
    short padding2;
    int (*get_count)(void *self);
};
struct item_usable_layout {
    char padding[8];
    item_usable_vtable *vtable;
};
extern "C" bool item_is_usable(
    const item_usable_layout *self)
    __asm__("is_usable__C4item");
bool item_is_usable(const item_usable_layout *self) {
    item_usable_vtable *table = self->vtable;
    return table->get_count(
        (char *)self + table->adjustment) > 0;
}

// 0x002B8608 get_number__C4item
#include "KS/SRC/item.h"
int item::get_number() const { return count; }

// 0x002B8610 is_ammo__C4item
#include "KS/SRC/item.h"
bool item::is_ammo() const { return usage_type == AMMO; }

// 0x002B8620 is_health__C4item
#include "KS/SRC/item.h"
bool item::is_health() const { return usage_type == HEALTH; }

// 0x002B8630 is_armor__C4item
#include "KS/SRC/item.h"
bool item::is_armor() const { return usage_type == ARMOR; }

// 0x002B8640 is_brain_weapon__C4item
#include "KS/SRC/item.h"
bool item::is_brain_weapon() const { return false; }

// 0x002B8648 holster__4itemb
#include "KS/SRC/item.h"
void item::holster(bool make_visible) {}

// 0x002B8650 draw__4itemb
#include "KS/SRC/item.h"
void item::draw(bool make_visible) {}

// 0x002B8658 hide__4item
#include "KS/SRC/item.h"
void item::hide() {}

// 0x002B8660 show__4item
#include "KS/SRC/item.h"
void item::show() {}

// 0x002B8758 is_a_visual_item__C11visual_item
#include "KS/SRC/item.h"
bool visual_item::is_a_visual_item() const { return true; }

// 0x002B87E8 is_a_morphable_item__C14morphable_item
#include "KS/SRC/item.h"
bool morphable_item::is_a_morphable_item() const { return true; }

// 0x002B8550 __tf4item
#include "KS/SRC/rtti.h"
extern "C" void **item_base_rtti() __asm__("__tf6entity");
extern "C" void *item_type[] __asm__("__ti4item");
extern "C" const char item_name[];
extern "C" void *item_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti4item, 0x005A3DB0");
__asm__(".equ item_name, 0x004FE490");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **item_rtti() __asm__("__tf4item");
void **item_rtti(){if(!item_type[0]){item_base_rtti();__rtti_si(item_type,item_name,item_base_type);}return item_type;}

// 0x002B8708 __tf11visual_item
#include "KS/SRC/rtti.h"
extern "C" void **visual_item_base_rtti() __asm__("__tf6entity");
extern "C" void *visual_item_type[] __asm__("__ti11visual_item");
extern "C" const char visual_item_name[];
extern "C" void *visual_item_base_type[] __asm__("__ti6entity");
__asm__(".equ __tf6entity, 0x001449C8");
__asm__(".equ __ti11visual_item, 0x005A3DC0");
__asm__(".equ visual_item_name, 0x004FE498");
__asm__(".equ __ti6entity, 0x005A27C8");
extern "C" void **visual_item_rtti() __asm__("__tf11visual_item");
void **visual_item_rtti(){if(!visual_item_type[0]){visual_item_base_rtti();__rtti_si(visual_item_type,visual_item_name,visual_item_base_type);}return visual_item_type;}
