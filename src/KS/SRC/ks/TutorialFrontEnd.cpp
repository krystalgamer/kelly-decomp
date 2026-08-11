// Matching decompilation blocks selected by generated build shims.


// 0x001D0A70 Load__16TutorialFrontEnd
#include "KS/SRC/ks/TutorialFrontEnd.h"

void TutorialFrontEnd::Load() {
}

// 0x001D0E68 OnLeft__16TutorialFrontEndi
#include "KS/SRC/ks/TutorialFrontEnd.h"

void TutorialFrontEnd::OnLeft(int controller)
{
    if (active)
        active->OnLeft(controller);
}

// 0x001D0EA0 OnRight__16TutorialFrontEndi
#include "KS/SRC/ks/TutorialFrontEnd.h"

void TutorialFrontEnd::OnRight(int controller)
{
    if (active)
        active->OnRight(controller);
}

// 0x001D0ED8 OnUp__16TutorialFrontEndi
#include "KS/SRC/ks/TutorialFrontEnd.h"

void TutorialFrontEnd::OnUp(int controller)
{
    if (active)
        active->OnUp(controller);
}

// 0x001D0F10 OnDown__16TutorialFrontEndi
#include "KS/SRC/ks/TutorialFrontEnd.h"

void TutorialFrontEnd::OnDown(int controller)
{
    if (active)
        active->OnDown(controller);
}

// 0x001D0DF0 OnTriangle__16TutorialFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" void unpause(SoundScriptManager*) __asm__("unpause__18SoundScriptManager");extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void pause(SoundScriptManager*) __asm__("pause__18SoundScriptManager");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ unpause__18SoundScriptManager,0x0031BFA8");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ pause__18SoundScriptManager,0x0031BF98");struct igo;extern "C" void display(igo*,bool) __asm__("SetDisplay__11IGOFrontEndb");__asm__(".equ SetDisplay__11IGOFrontEndb,0x0017B9A8");struct pms_vtable{char p0[136];short adjustment;short x0;void(*make)(void*,int,bool);};struct pms{char p0[140];pms_vtable*vtable;};struct manager{igo*IGO;pms*pms_ptr;};extern manager frontendmanager;__asm__(".equ frontendmanager,0x003E7728");extern "C" void triangle(void*,int) __asm__("OnTriangle__16TutorialFrontEndi");void triangle(void*,int){unpause(sound_manager);register float zero __asm__("$f12")=0.0f;register void*entity __asm__("$6")=0;__asm__ __volatile__("" : : "f"(zero),"r"(entity));play(sound_manager,27,entity,zero);pause(sound_manager);display(frontendmanager.IGO,false);pms*p=frontendmanager.pms_ptr;pms_vtable*t=p->vtable;t->make((char*)p+t->adjustment,2,true);}

// 0x001D0D18 OnButtonRelease__16TutorialFrontEndii
#include "KS/SRC/ks/TutorialFrontEnd.h"

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
