// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D0A70)
// 0x001D0A70 Load__16TutorialFrontEnd
class TutorialFrontEnd {
public:
    void Load();
};

void TutorialFrontEnd::Load() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0E68)
// 0x001D0E68 OnLeft__16TutorialFrontEndi
struct menu_vtable {
    char padding[0xA8];
    short adjustment;
    short padding2;
    void (*onLeft)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TutorialFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnLeft(int controller);
};

void TutorialFrontEnd::OnLeft(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onLeft((char *)menu + table->adjustment, controller);
    }
}
#endif
