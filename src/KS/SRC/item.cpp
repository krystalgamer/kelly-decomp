// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0028A1E0)
// 0x0028A1E0 check_for_pickup__4item
class item {
public:
    bool check_for_pickup();
};

bool item::check_for_pickup() {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A678)
// 0x0028A678 is_picked_up__4item
class item {
    char padding[0x220];
    bool picked_up;
public:
    bool is_picked_up();
};

bool item::is_picked_up() {
    return picked_up;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A108)
// 0x0028A108 initialize__4item
class item { public: void spawn_item_script(); void initialize(); };
__asm__(".equ spawn_item_script__4item, 0x0028A520");
void item::initialize() { spawn_item_script(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B1C8)
// 0x0028B1C8 render_passes_needed__C11visual_item
class entity { public: unsigned int render_passes_needed() const; };
__asm__(".equ render_passes_needed__C6entity, 0x00133640");
class visual_item : public entity { public: unsigned int render_passes_needed() const; };
unsigned int visual_item::render_passes_needed() const { unsigned int result = entity::render_passes_needed(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028B1E8)
// 0x0028B1E8 render__11visual_itemP6camerafUif
class camera;
class entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
__asm__(".equ render__6entityP6camerafUif, 0x001324E0");
class visual_item : public entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
void visual_item::render(camera *camera_link, float detail, unsigned int flavor, float translucency) { entity::render(camera_link, detail, flavor, translucency); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028A1B8)
// 0x0028A1B8 render__4itemP6camerafUif
class camera;
class entity { public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
__asm__(".equ render__6entityP6camerafUif, 0x001324E0");
class item : public entity { char padding[0x214]; int count; public: void render(camera *camera_link, float detail, unsigned int flavor, float translucency); };
void item::render(camera *camera_link, float detail, unsigned int flavor, float translucency) { if (count > 0) { entity::render(camera_link, detail, flavor, translucency); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AEC0)
// 0x0028AEC0 _$_11visual_item
extern "C" void EntityDtor(void *self, int deleting) __asm__("_$_6entity");
extern const char visual_item_vtable[];
__asm__(".equ _$_6entity, 0x001298C8");
__asm__(".equ visual_item_vtable, 0x004EBB78");
struct visual_item_layout { char padding[8]; const void *vtable; };
extern "C" void VisualItemDtor(void *self, int deleting) __asm__("_$_11visual_item");
void VisualItemDtor(void *self, int deleting) { ((visual_item_layout *)self)->vtable = visual_item_vtable; EntityDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
