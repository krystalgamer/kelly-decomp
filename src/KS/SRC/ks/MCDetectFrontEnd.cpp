// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001A34F8)
// 0x001A34F8 OnTriangle__16MCDetectFrontEndi
class MCDetectFrontEnd {
public:
    void OnTriangle(int controller);
};

void MCDetectFrontEnd::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A36E8)
// 0x001A36E8 SetSystem__16MCDetectFrontEndP12FEMenuSystem
class FEMenuSystem;

class MCDetectFrontEnd {
    char padding[0x50];
    FEMenuSystem *system;

public:
    void SetSystem(FEMenuSystem *new_system);
};

void MCDetectFrontEnd::SetSystem(FEMenuSystem *new_system) {
    system = new_system;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A4260)
// 0x001A4260 drawMenu__16MCDetectFrontEnd
class MCDetectFrontEnd {
public:
    bool drawMenu();
};

bool MCDetectFrontEnd::drawMenu() {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A4268)
// 0x001A4268 Draw__16MCDetectFrontEnd
extern "C" bool draw_menu(void *) __asm__("drawMenu__16MCDetectFrontEnd");
extern "C" void draw_graphical_menu(void *) __asm__("Draw__15FEGraphicalMenu");
__asm__(".equ drawMenu__16MCDetectFrontEnd,0x001A4260");
__asm__(".equ Draw__15FEGraphicalMenu,0x001580D8");
struct draw_vtable { char padding[24]; short adjustment; short reserved; void (*draw)(void *); };
struct drawable { char padding[76]; draw_vtable *vtable; };
struct mc_detect_layout { char padding[104]; drawable *background; char padding2[760]; drawable *error; };
extern "C" void draw_mc_detect(mc_detect_layout *self) __asm__("Draw__16MCDetectFrontEnd");
void draw_mc_detect(mc_detect_layout *self)
{
    if (draw_menu(self)) {
        register drawable *element __asm__("$5") = self->error;
        draw_vtable *table = element->vtable;
        register void (*draw)(void *) __asm__("$3") = table->draw;
        draw((char *)element + table->adjustment);
        element = self->background;
        table = element->vtable;
        draw = table->draw;
        draw((char *)element + table->adjustment);
        draw_graphical_menu(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
#endif
