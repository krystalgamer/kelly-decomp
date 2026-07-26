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

#if defined(KELLY_DECOMP_FUNCTION_001D0DF0)
// 0x001D0DF0 OnTriangle__16TutorialFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");struct igo;extern "C" void display(igo*,bool) __asm__("SetDisplay__11IGOFrontEndb");__asm__(".equ SetDisplay__11IGOFrontEndb,0x0017B9A8");struct pms_vtable{char p0[136];short adjustment;short x0;void(*make)(void*,int,bool);};struct pms{char p0[140];pms_vtable*vtable;};struct manager{igo*IGO;pms*pms_ptr;};extern manager frontendmanager;__asm__(".equ frontendmanager,0x003E7728");extern "C" void triangle(void*,int) __asm__("OnTriangle__16TutorialFrontEndi");void triangle(void*,int){unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register void*entity __asm__("$6")=0;__asm__ __volatile__("" : : "f"(zero),"r"(entity));play(sound_manager,27,entity,zero);pause(sound_manager);display(frontendmanager.IGO,false);pms*p=frontendmanager.pms_ptr;pms_vtable*t=p->vtable;t->make((char*)p+t->adjustment,2,true);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0D18)
// 0x001D0D18 OnButtonRelease__16TutorialFrontEndii
#include "KS/SRC/ks/TutorialFrontEnd_shared.h"

void TutorialFrontEnd::OnButtonRelease(int controller, int button)
{
    if (button == 6 && frontendmanager.pms->drawing)
    {
        if (ignore_next_release)
            ignore_next_release = false;
        else
        {
            frontendmanager.IGO->tutorial_manager->StopCurrentVO();
            if (frontendmanager.IGO->tutorial_manager->wave_indicator_type)
                waveIndicator->Hide();
            frontendmanager.pms->endDraw();
            frontendmanager.pms->UpdateButtonDown();
        }
    }
    else if (button == 1)
        ignore_next_release = false;
}
#endif
