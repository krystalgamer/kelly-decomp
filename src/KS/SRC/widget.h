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
