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

#if defined(KELLY_DECOMP_FUNCTION_001D0EA0)
// 0x001D0EA0 OnRight__16TutorialFrontEndi
struct menu_vtable {
    char padding[0xB0];
    short adjustment;
    short padding2;
    void (*onRight)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TutorialFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnRight(int controller);
};

void TutorialFrontEnd::OnRight(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onRight((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0ED8)
// 0x001D0ED8 OnUp__16TutorialFrontEndi
struct menu_vtable {
    char padding[0x98];
    short adjustment;
    short padding2;
    void (*onUp)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TutorialFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnUp(int controller);
};

void TutorialFrontEnd::OnUp(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onUp((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0F10)
// 0x001D0F10 OnDown__16TutorialFrontEndi
struct menu_vtable {
    char padding[0xA0];
    short adjustment;
    short padding2;
    void (*onDown)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class TutorialFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnDown(int controller);
};

void TutorialFrontEnd::OnDown(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onDown((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0B88)
// 0x001D0B88 Draw__16TutorialFrontEnd
struct menu_vtable{char p0[72];short adjustment;short x0;void(*draw)(void*);};struct menu{char p0[116];menu_vtable*vtable;};struct text_vtable{char p0[24];short adjustment;short x0;void(*draw)(void*);};struct text{char p0[76];text_vtable*vtable;};struct tutorial{char p0[96];menu*active;char p1[288];text*help,*pause;};extern "C" void draw_tutorial(tutorial*self) __asm__("Draw__16TutorialFrontEnd");void draw_tutorial(tutorial*self){if(self->active){register menu*m __asm__("$5")=self->active;menu_vtable*t=m->vtable;register void(*fn)(void*) __asm__("$3")=t->draw;fn((char*)m+t->adjustment);}register text*x __asm__("$5")=self->help;text_vtable*t=x->vtable;register void(*fn)(void*) __asm__("$3")=t->draw;fn((char*)x+t->adjustment);x=self->pause;t=x->vtable;fn=t->draw;fn((char*)x+t->adjustment);}
#endif
