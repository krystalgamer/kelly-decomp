// Matching decompilation blocks selected by generated build shims.

// 0x001A4E20 OnActivate__16MCDetectFrontEnd
#include "KS/SRC/ks/MCDetectFrontEnd.h"
struct DeveloperOptionsLayout {
    char padding[0x194];
    bool e3_build;
};
extern DeveloperOptionsLayout *developer_options
    __asm__("_20os_developer_options$instance");
__asm__(".equ _20os_developer_options$instance, 0x0046B180");

void MCDetectFrontEnd::OnActivate()
{
    setHigh(entries[MCRetry], true);
    if (developer_options->e3_build)
    {
        onlyGoToMCScreenOnce = true;
        system->MakeActive(GraphicalMenuSystem::MainMenu);
        return;
    }
    if (onlyGoToMCScreenOnce)
    {
        system->MakeActive(GraphicalMenuSystem::MainMenu);
        return;
    }

    onlyGoToMCScreenOnce = true;
    tryToLoadMostRecent();
    __asm__ volatile("");
}

// 0x001A47B8 findGlobalData__16MCDetectFrontEndRiT1
#include "KS/SRC/HWOSPS2/ps2_gamesaver.h"
#include "KS/SRC/ks/MCDetectFrontEnd.h"

enum {
    INVALID_CARD_VALUE = -1,
    NUM_MEMORY_PORTS = 2,
    NUM_MEMORY_SLOTS = 1
};

__asm__(".equ _16GenericGameSaver$instance, 0x0042E5B8");

bool MCDetectFrontEnd::findGlobalData(
    int &foundPort,
    int &foundSlot)
{
    int port, slot;
    if (foundPort == INVALID_CARD_VALUE &&
        foundSlot == INVALID_CARD_VALUE)
    {
        for (port = GenericGameSaver::inst()->getFirstCard();
             port < NUM_MEMORY_PORTS;
             port++)
        {
            for (slot = 0; slot < NUM_MEMORY_SLOTS; slot++)
            {
                if (port == -1 && slot == 1)
                    continue;
                if (GenericGameSaver::inst()->hasSystemFile(
                        port,
                        slot))
                {
                    foundPort = port;
                    foundSlot = slot;
                    return true;
                }
            }
        }
        return false;
    }
    else
    {
        if (GenericGameSaver::inst()->hasSystemFile(
                foundPort,
                foundSlot))
            return true;
        return false;
    }
}

// 0x001A34F8 OnTriangle__16MCDetectFrontEndi
#include "KS/SRC/ks/MCDetectFrontEnd.h"

void MCDetectFrontEnd::OnTriangle(int controller) {
}

// 0x001A36E8 SetSystem__16MCDetectFrontEndP12FEMenuSystem
#include "KS/SRC/ks/MCDetectFrontEnd.h"

void MCDetectFrontEnd::SetSystem(FEMenuSystem *new_system) {
    system = new_system;
}

// 0x001A4260 drawMenu__16MCDetectFrontEnd
#include "KS/SRC/ks/MCDetectFrontEnd.h"

bool MCDetectFrontEnd::drawMenu() {
    return true;
}

// 0x001A4518 configLoadCallback__16MCDetectFrontEndPvi
struct Career{void init()__asm__("init__6Career");};struct GlobalData{void init()__asm__("init__15GlobalDataClass");};struct SaveInfo{int valid;};extern Career*g_career;extern GlobalData globalCareerData;extern SaveInfo currentGame;__asm__(".equ g_career,0x00427C9C");__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ currentGame,0x0042EBB0");__asm__(".equ init__6Career,0x0025A4C0");__asm__(".equ init__15GlobalDataClass,0x002EFC10");struct MC{char pad[376];int percent;void goState(int)__asm__("goState__16MCDetectFrontEndi");};__asm__(".equ goState__16MCDetectFrontEndi,0x001A3930");extern "C" void callback(void*data,int percent)__asm__("configLoadCallback__16MCDetectFrontEndPvi");void callback(void*data,int percent){MC*self=(MC*)data;if(percent>=100){self->goState(10);currentGame.valid=0;}else if(percent<0){g_career->init();globalCareerData.init();self->goState(5);KELLY_DECOMP_COMPILER_BARRIER();}else self->percent=percent/2;}

// 0x001A3500 OnRight__16MCDetectFrontEndi
struct EntryVtable{char p[48];short adj;short z;bool(*disabled)(void*);};struct Entry{char p[96];EntryVtable*vtable;};struct MenuVtable{char p[456];short adj;short z;void(*right)(void*);};extern void*sound_manager;extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");struct MCDetectLayout{char p[76];Entry*highlighted;char p2[36];MenuVtable*vtable;char p3[232];Entry*entries[2];};__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void mc_right(MCDetectLayout*self,int c)__asm__("OnRight__16MCDetectFrontEndi");void mc_right(MCDetectLayout*self,int c){Entry*cont=self->entries[0];EntryVtable*ev;if(self->highlighted==cont&&(ev=cont->vtable,!ev->disabled((char*)cont+ev->adj)))play(sound_manager,26,0,0.0f);else play(sound_manager,28,0,0.0f);MenuVtable*v=self->vtable;v->right((char*)self+v->adj);}

// 0x001A3590 OnLeft__16MCDetectFrontEndi
struct EntryVtable{char p[48];short adj;short z;bool(*disabled)(void*);};struct Entry{char p[96];EntryVtable*vtable;};struct MenuVtable{char p[448];short adj;short z;void(*right)(void*);};extern void*sound_manager;extern "C" void play(void*,int,void*,float)__asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");struct MCDetectLayout{char p[76];Entry*highlighted;char p2[36];MenuVtable*vtable;char p3[232];Entry*entries[2];};__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");extern "C" void mc_left(MCDetectLayout*self,int c)__asm__("OnLeft__16MCDetectFrontEndi");void mc_left(MCDetectLayout*self,int c){Entry*cont=self->entries[1];EntryVtable*ev;if(self->highlighted==cont&&(ev=cont->vtable,!ev->disabled((char*)cont+ev->adj)))play(sound_manager,26,0,0.0f);else play(sound_manager,28,0,0.0f);MenuVtable*v=self->vtable;v->right((char*)self+v->adj);}

// 0x001A48A8 loadGlobalData__16MCDetectFrontEnd
struct GlobalDataClass{};struct GenericGameSaver{};extern int savePort,saveSlot;extern GenericGameSaver*game_saver;extern GlobalDataClass globalCareerData;extern "C" bool find(void*,int&,int&)__asm__("findGlobalData__16MCDetectFrontEndRiT1");extern "C" void state(void*,int)__asm__("goState__16MCDetectFrontEndi");extern "C" void read(GenericGameSaver*,int,int,GlobalDataClass*,void(*)(void*,int),void*)__asm__("readSystemFile__16GenericGameSaveriiP15GlobalDataClassPFPvi_vPv");extern "C" void callback(void*,int)__asm__("globalLoadCallback__16MCDetectFrontEndPvi");__asm__(".equ savePort,0x0042E5AC");__asm__(".equ saveSlot,0x0042E5B0");__asm__(".equ game_saver,0x0042E5B8");__asm__(".equ globalCareerData,0x004349B8");__asm__(".equ findGlobalData__16MCDetectFrontEndRiT1,0x001A47B8");__asm__(".equ goState__16MCDetectFrontEndi,0x001A3930");__asm__(".equ readSystemFile__16GenericGameSaveriiP15GlobalDataClassPFPvi_vPv,0x001E4178");__asm__(".equ globalLoadCallback__16MCDetectFrontEndPvi,0x001A4598");extern "C" int load(void*)__asm__("loadGlobalData__16MCDetectFrontEnd");int load(void*self){if(!find(self,savePort,saveSlot)){state(self,9);return -2;}state(self,3);read(game_saver,savePort,saveSlot,&globalCareerData,callback,self);return 0;}
