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

#if defined(KELLY_DECOMP_FUNCTION_0028A648)
// 0x0028A648 preload__4item
class entity { public: void preload(); };
__asm__(".equ preload__6entity, 0x00139180");
class item : public entity { public: void preload(); void spawn_preload_script(); };
__asm__(".equ spawn_preload_script__4item, 0x0028A410");
void item::preload() { entity::preload(); spawn_preload_script(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AA58)
// 0x0028AA58 apply_effects__4itemP6entity
struct item_vtable { char padding[0x20]; short adjustment; short padding2; void (*apply)(void *self, int effect); };
class entity;
class item { char padding[8]; item_vtable *vtable; public: void apply_effects(entity *target); };
void item::apply_effects(entity *target) { item_vtable *table = vtable; table->apply((char *)this + table->adjustment, 28); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028BE88)
// 0x0028BE88 frame_advance__14morphable_itemf
class item {
protected:
    char padding[0x218];
    int count;
public:
    void frame_advance(float time);
};
class morphable_item : public item {
    char padding2[0x30];
    int old_count;
public:
    void frame_advance(float time);
    void set_range_visrep(int count);
};
asm(".equ frame_advance__4itemf, 0x0028A680");
asm(".equ set_range_visrep__14morphable_itemi, 0x0028BEC8");
void morphable_item::frame_advance(float time)
{
    item::frame_advance(time);
    if (count != old_count) {
        set_range_visrep(count);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0028AE78)
// 0x0028AE78 get_signal_name__C4itemUs
__asm__(".equ get_signal_name__C6entityUs, 0x0012F728"); __asm__(".equ item_signal_names, 0x00431A70");
extern const char *item_signal_names[];
class entity { public: const char *get_signal_name(unsigned short) const; };
class item : public entity { public: const char *get_signal_name(unsigned short) const; };
const char *item::get_signal_name(unsigned short idx) const { if(idx > 26) return item_signal_names[idx-27]; return entity::get_signal_name(idx); }
#endif
