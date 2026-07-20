// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EEAF8)
// 0x002EEAF8 OnOpen__9MenuSoundP4MenuP10MenuSystem
class MenuSystem;
class Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
__asm__(".equ OnOpen__4MenuP4MenuP10MenuSystem, 0x0023EAE0");
class MenuSound : public Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
void MenuSound::OnOpen(Menu *previous, MenuSystem *system) { Menu::OnOpen(previous, system); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EEB18)
// 0x002EEB18 OnTick__9MenuSoundf
struct menu_vtable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*on_tick)(void *self, float delta);
};

class Menu {
    char padding[0x1c];

public:
    menu_vtable *vtable;
};

extern Menu *menu_sources;
__asm__(".equ menu_sources, 0x00434980");

class MenuSound {
public:
    void OnTick(float delta);
};

void MenuSound::OnTick(float delta) {
    register Menu **address __asm__("$3") = (Menu **)0x00430000;
    __asm__ volatile("" : "+r"(address));
    Menu *sources = *(Menu **)((char *)address + 0x4980);
    menu_vtable *table = sources->vtable;
    table->on_tick(
        (char *)sources + table->adjustment,
        delta
    );
}
#endif
