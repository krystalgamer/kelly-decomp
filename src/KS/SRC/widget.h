// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00360300)
// 0x00360300 ignore_parent__6widget
class widget { char padding[0x14]; unsigned int flags; public: void ignore_parent(); };
void widget::ignore_parent() { flags |= 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360310)
// 0x00360310 obey_parent__6widget
class widget { char padding[0x14]; int flags; public: void obey_parent(); };
void widget::obey_parent() { flags &= -5; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360328)
// 0x00360328 ignore_parent_showing__6widget
class widget { char padding[0x14]; unsigned int flags; public: void ignore_parent_showing(); };
void widget::ignore_parent_showing() { flags |= 8; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360338)
// 0x00360338 obey_parent_showing__6widget
class widget { char padding[0x14]; int flags; public: void obey_parent_showing(); };
void widget::obey_parent_showing() { flags &= -9; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360438)
// 0x00360438 set_origin__6widgetss
class widget {
    char padding[0x38];
    short origin_x;
    short origin_y;
public:
    void set_origin(short x, short y);
};
void widget::set_origin(short x, short y) { origin_x = x; origin_y = y; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360450)
// 0x00360450 get_width__6widget
class widget { public: float get_width(); };
float widget::get_width() { return 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360460)
// 0x00360460 get_height__6widget
class widget { public: float get_height(); };
float widget::get_height() { return 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360470)
// 0x00360470 set_layer__6widgetQ26widget11rhw_layer_e
class widget {
public:
    enum rhw_layer_e { RHW_LAYER_DEFAULT };
    void set_layer(rhw_layer_e layer);
};

void widget::set_layer(rhw_layer_e layer) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360558)
// 0x00360558 deselect__16menu_item_widgetb
class menu_item_widget {
    char padding[0x150];
    bool selected;
public:
    void deselect(bool initial);
};

void menu_item_widget::deselect(bool initial) {
    selected = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360560)
// 0x00360560 set_skip__16menu_item_widgetb
class menu_item_widget {
    char padding[0x154];
    bool skip;
public:
    void set_skip(bool value);
};

void menu_item_widget::set_skip(bool value) {
    skip = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360638)
// 0x00360638 get_sel_item__C11menu_widget
class menu_item_widget;

class menu_widget {
    char padding[0x148];
    menu_item_widget* sel_item;
public:
    menu_item_widget* get_sel_item() const;
};

menu_item_widget* menu_widget::get_sel_item() const {
    return sel_item;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360640)
// 0x00360640 get_num_items__C11menu_widget
class menu_widget {
    char padding[0x144];
    int num_items;
public:
    int get_num_items() const;
};

int menu_widget::get_num_items() const {
    return num_items;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003607B0)
// 0x003607B0 get_width__13bitmap_widget
class bitmap_widget {
    char padding[0x144];
    float width;
public:
    float get_width();
};

float bitmap_widget::get_width() {
    return width;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003607B8)
// 0x003607B8 get_height__13bitmap_widget
class bitmap_widget {
    char padding[0x148];
    float height;
public:
    float get_height();
};

float bitmap_widget::get_height() {
    return height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360A18)
// 0x00360A18 get_width__11vrep_widget
class vrep_widget {
    char padding[0x148];
    float screen_radius;
public:
    float get_width();
};

float vrep_widget::get_width() {
    return screen_radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360A20)
// 0x00360A20 get_height__11vrep_widget
class vrep_widget {
    char padding[0x148];
    float screen_radius;
public:
    float get_height();
};

float vrep_widget::get_height() {
    return screen_radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360B68)
// 0x00360B68 get_width__10box_widget
class box_widget {
    char padding[0x164];
    float width;
public:
    float get_width();
};

float box_widget::get_width() {
    return width;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360B70)
// 0x00360B70 get_height__10box_widget
class box_widget {
    char padding[0x168];
    float height;
public:
    float get_height();
};

float box_widget::get_height() {
    return height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360D40)
// 0x00360D40 get_width__9fluid_bar
class fluid_bar {
    char padding[0x160];
    float width;
public:
    float get_width();
};

float fluid_bar::get_width() {
    return width;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360D48)
// 0x00360D48 get_height__9fluid_bar
class fluid_bar {
    char padding[0x164];
    float height;
public:
    float get_height();
};

float fluid_bar::get_height() {
    return height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003606C0)
// 0x003606C0 scale_to__13bitmap_widgetffff
class widget { public: void scale_to(float wait, float duration, float horizontal, float vertical); };
__asm__(".equ scale_to__6widgetffff, 0x0033ED48");
class bitmap_widget : public widget { public: void scale_to(float wait, float duration, float horizontal, float vertical); };
void bitmap_widget::scale_to(float wait, float duration, float horizontal, float vertical) { widget::scale_to(wait, duration, horizontal, vertical); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360710)
// 0x00360710 scale_to__13bitmap_widgetfff
class widget { public: void scale_to(float wait, float duration, float horizontal, float vertical); };
__asm__(".equ scale_to__6widgetffff, 0x0033ED48");
class bitmap_widget : public widget { public: void scale_to(float wait, float duration, float scale); };
void bitmap_widget::scale_to(float wait, float duration, float scale) { widget::scale_to(wait, duration, scale, scale); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360838)
// 0x00360838 show__11text_widget
class widget { public: void show(); };
__asm__(".equ show__6widget, 0x0033DDD0");
class text_widget : public widget { public: void show(); };
void text_widget::show() { widget::show(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360858)
// 0x00360858 hide__11text_widget
class widget { public: void hide(); };
__asm__(".equ hide__6widget, 0x0033DEA0");
class text_widget : public widget { public: void hide(); };
void text_widget::hide() { widget::hide(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121D08)
// 0x00121D08 _GLOBAL_$I$anim_track_flavors
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$anim_track_flavors");
__asm__(".equ __static_initialization_and_destruction_0, 0x001202D8");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00121D28)
// 0x00121D28 _GLOBAL_$D$anim_track_flavors
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$anim_track_flavors");
__asm__(".equ __static_initialization_and_destruction_0, 0x001202D8");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271108)
// 0x00271108 _GLOBAL_$I$__5beach
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$__5beach");
__asm__(".equ __static_initialization_and_destruction_0, 0x002655C0");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00271128)
// 0x00271128 _GLOBAL_$D$__5beach
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$__5beach");
__asm__(".equ __static_initialization_and_destruction_0, 0x002655C0");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003605E0)
// 0x003605E0 _$_11menu_widget
extern "C" void WidgetDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char widget_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ widget_vtable, 0x00504B70");
struct widget_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_11menu_widget");
void DerivedDtor(void *self, int deleting) { ((widget_layout *)self)->vtable = widget_vtable; WidgetDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360AA0)
// 0x00360AA0 _$_17background_widget
extern "C" void WidgetDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char widget_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ widget_vtable, 0x00504548");
struct widget_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17background_widget");
void DerivedDtor(void *self, int deleting) { ((widget_layout *)self)->vtable = widget_vtable; WidgetDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360B40)
// 0x00360B40 _$_10box_widget
extern "C" void WidgetDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char widget_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ widget_vtable, 0x00504410");
struct widget_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_10box_widget");
void DerivedDtor(void *self, int deleting) { ((widget_layout *)self)->vtable = widget_vtable; WidgetDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360BF0)
// 0x00360BF0 _$_10bar_widget
extern "C" void WidgetDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char widget_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ widget_vtable, 0x005042E0");
struct widget_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_10bar_widget");
void DerivedDtor(void *self, int deleting) { ((widget_layout *)self)->vtable = widget_vtable; WidgetDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360DC8)
// 0x00360DC8 _$_13layout_widget
extern "C" void WidgetDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char widget_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ widget_vtable, 0x00504080");
struct widget_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_13layout_widget");
void DerivedDtor(void *self, int deleting) { ((widget_layout *)self)->vtable = widget_vtable; WidgetDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360368)
// 0x00360368 scale_to__6widgetf
struct widget_vtable {
    char padding[0x78];
    short adjustment;
    short padding2;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

class widget {
    char padding[0x140];
    widget_vtable *vtable;

public:
    void scale_to(float scale);
};

void widget::scale_to(float scale) {
    widget_vtable *table = vtable;
    table->scale_to((char *)this + table->adjustment, scale, scale);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360398)
// 0x00360398 scale_to__6widgetfff
struct widget_vtable {
    char padding[0x80];
    short adjustment;
    short padding2;
    void (*scale_to)(
        void *self,
        float wait,
        float duration,
        float horizontal,
        float vertical
    );
};

class widget {
    char padding[0x140];
    widget_vtable *vtable;

public:
    void scale_to(float wait, float duration, float scale);
};

void widget::scale_to(float wait, float duration, float scale) {
    widget_vtable *table = vtable;
    table->scale_to(
        (char *)this + table->adjustment,
        wait,
        duration,
        scale,
        scale
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003606E0)
// 0x003606E0 scale_to__13bitmap_widgetf
struct widget_vtable {
    char padding[0x78];
    short adjustment;
    short padding2;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

class bitmap_widget {
    char padding[0x140];
    widget_vtable *vtable;

public:
    void scale_to(float scale);
};

void bitmap_widget::scale_to(float scale) {
    widget_vtable *table = vtable;
    table->scale_to((char *)this + table->adjustment, scale, scale);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360608)
// 0x00360608 add_child__11menu_widgetP6widget
class widget {
    char padding[0x144];

public:
    void add_child(widget *child);
};

__asm__(".equ add_child__6widgetP6widget, 0x0033E270");

class menu_widget : public widget {
    int num_items;

public:
    void add_child(widget *child);
};

void menu_widget::add_child(widget *child)
{
    widget::add_child(child);
    ++num_items;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003602B8)
// 0x003602B8 __tf6widget
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_003602B8_type[] __asm__("__ti6widget");
extern "C" char rtti_003602B8_name[] __asm__("rtti_003602B8_type_name");
__asm__(".equ __ti6widget, 0x00512148");
__asm__(".equ rtti_003602B8_type_name, 0x00505788");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_003602B8() __asm__("__tf6widget");
void **rtti_003602B8()
{
    if (!rtti_003602B8_type[0])
        __rtti_user(rtti_003602B8_type, rtti_003602B8_name);
    return rtti_003602B8_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003617C8)
// 0x003617C8 __tf6wevent
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *wevent_type[] __asm__("__ti6wevent");
extern "C" char wevent_name[];
__asm__(".equ __ti6wevent, 0x00512200");
__asm__(".equ wevent_name, 0x005070A8");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **wevent_rtti() __asm__("__tf6wevent");
void **wevent_rtti()
{
    if (!wevent_type[0])
        __rtti_user(wevent_type, wevent_name);
    return wevent_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360168)
// 0x00360168 __tf11move_wevent
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00360168()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360168[]
    __asm__("__ti11move_wevent");
extern "C" const char rtti_name_00360168[];
extern "C" void *rtti_base_type_00360168[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti11move_wevent, 0x007821F8");
__asm__(".equ rtti_name_00360168, 0x00505748");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360168() __asm__("__tf11move_wevent");

void **Rtti_00360168()
{
    if (!rtti_type_00360168[0]) {
        RttiBase_00360168();
        __rtti_si(rtti_type_00360168, rtti_name_00360168, rtti_base_type_00360168);
    }
    return rtti_type_00360168;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003601C0)
// 0x003601C0 __tf12color_wevent
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_003601C0()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_003601C0[]
    __asm__("__ti12color_wevent");
extern "C" const char rtti_name_003601C0[];
extern "C" void *rtti_base_type_003601C0[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti12color_wevent, 0x00782208");
__asm__(".equ rtti_name_003601C0, 0x00505758");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_003601C0() __asm__("__tf12color_wevent");

void **Rtti_003601C0()
{
    if (!rtti_type_003601C0[0]) {
        RttiBase_003601C0();
        __rtti_si(rtti_type_003601C0, rtti_name_003601C0, rtti_base_type_003601C0);
    }
    return rtti_type_003601C0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360210)
// 0x00360210 __tf13rotate_wevent
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00360210()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360210[]
    __asm__("__ti13rotate_wevent");
extern "C" const char rtti_name_00360210[];
extern "C" void *rtti_base_type_00360210[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti13rotate_wevent, 0x00782218");
__asm__(".equ rtti_name_00360210, 0x00505768");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360210() __asm__("__tf13rotate_wevent");

void **Rtti_00360210()
{
    if (!rtti_type_00360210[0]) {
        RttiBase_00360210();
        __rtti_si(rtti_type_00360210, rtti_name_00360210, rtti_base_type_00360210);
    }
    return rtti_type_00360210;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360260)
// 0x00360260 __tf12scale_wevent
#include "KS/SRC/rtti_shared.h"

extern "C" void **RttiBase_00360260()
    __asm__("__tf6wevent");
extern "C" void *rtti_type_00360260[]
    __asm__("__ti12scale_wevent");
extern "C" const char rtti_name_00360260[];
extern "C" void *rtti_base_type_00360260[]
    __asm__("__ti6wevent");
__asm__(".equ __tf6wevent, 0x003617C8");
__asm__(".equ __ti12scale_wevent, 0x00782228");
__asm__(".equ rtti_name_00360260, 0x00505778");
__asm__(".equ __ti6wevent, 0x00512200");
extern "C" void **Rtti_00360260() __asm__("__tf12scale_wevent");

void **Rtti_00360260()
{
    if (!rtti_type_00360260[0]) {
        RttiBase_00360260();
        __rtti_si(rtti_type_00360260, rtti_name_00360260, rtti_base_type_00360260);
    }
    return rtti_type_00360260;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00360CC0)
// 0x00360CC0 _$_9fluid_bar
extern "C" void destroy_string(void *,int)
    __asm__("_$_7stringx");
extern "C" void destroy_widget(void *,int)
    __asm__("_$_6widget");
extern const char fluid_vtable[];
extern const char widget_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ fluid_vtable, 0x005041B0");
__asm__(".equ widget_vtable, 0x005042E0");
struct fluid_layout {
    char padding[0x140];
    const void *vtable;
    char padding2[0x14];
    char name[8];
};
extern "C" void destroy_fluid(
    fluid_layout *self,int flags
) __asm__("_$_9fluid_bar");
void destroy_fluid(fluid_layout *self,int flags) {
    self->vtable=fluid_vtable;
    destroy_string(self->name,2);
    self->vtable=widget_vtable;
    destroy_widget(self,flags);
    __asm__ __volatile__("" : : : "memory");
}
#endif
