// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B85A0)
// 0x002B85A0 is_an_item__C4item
class item {
public:
    bool is_an_item() const;
};

bool item::is_an_item() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B85A8)
// 0x002B85A8 get_count__C4item
class item {
    char padding[0x218];
    int count;
public:
    int get_count() const;
};

int item::get_count() const {
    return count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B85B0)
// 0x002B85B0 inc_count__4item
class item { char padding[0x218]; int count; public: void inc_count(); };
void item::inc_count() { ++count; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B85C0)
// 0x002B85C0 dec_count__4item
class item { char padding[0x218]; int count; public: void dec_count(); };
void item::dec_count() { --count; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B85D0)
// 0x002B85D0 set_count__4itemi
class item {
    char padding[0x218];
    int count;
public:
    void set_count(int value);
};

void item::set_count(int value) {
    count = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8608)
// 0x002B8608 get_number__C4item
class item {
    char padding[0x218];
    int count;
public:
    int get_number() const;
};

int item::get_number() const {
    return count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8610)
// 0x002B8610 is_ammo__C4item
class item { char padding[0x20C]; int usage_type; public: bool is_ammo() const; };
bool item::is_ammo() const { return usage_type == 6; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8620)
// 0x002B8620 is_health__C4item
class item { char padding[0x20C]; int usage_type; public: bool is_health() const; };
bool item::is_health() const { return usage_type == 7; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8630)
// 0x002B8630 is_armor__C4item
class item { char padding[0x20C]; int usage_type; public: bool is_armor() const; };
bool item::is_armor() const { return usage_type == 8; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8640)
// 0x002B8640 is_brain_weapon__C4item
class item {
public:
    bool is_brain_weapon() const;
};

bool item::is_brain_weapon() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8648)
// 0x002B8648 holster__4itemb
class item {
public:
    void holster(bool make_visible);
};

void item::holster(bool make_visible) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8650)
// 0x002B8650 draw__4itemb
class item {
public:
    void draw(bool make_visible);
};

void item::draw(bool make_visible) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8658)
// 0x002B8658 hide__4item
class item {
public:
    void hide();
};

void item::hide() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8660)
// 0x002B8660 show__4item
class item {
public:
    void show();
};

void item::show() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B8758)
// 0x002B8758 is_a_visual_item__C11visual_item
class visual_item {
public:
    bool is_a_visual_item() const;
};

bool visual_item::is_a_visual_item() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B87E8)
// 0x002B87E8 is_a_morphable_item__C14morphable_item
class morphable_item {
public:
    bool is_a_morphable_item() const;
};

bool morphable_item::is_a_morphable_item() const {
    return true;
}
#endif
