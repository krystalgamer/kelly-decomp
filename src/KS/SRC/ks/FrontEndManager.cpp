// Matching decompilation blocks selected by generated build shims.


// 0x001990D8 FEInitialized__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEInitialized() { return frontendmanager.fe_initialized; }

// 0x00199150 FEDone__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEDone() { return frontendmanager.fe_done; }

// 0x00199168 FEDoneLoading__Fv
#include "KS/SRC/ks/FrontEndManager.h"

bool FEDoneLoading() { return frontendmanager.fe_done_loading; }

// 0x00199210 IGOIsPaused__Fv
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"

bool IGOIsPaused() { return frontendmanager.pms->draw; }

// 0x001988C8 OnLevelLoaded__9FEManager
#include "KS/SRC/ks/BeachFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"

void FEManager::OnLevelLoaded()
{
    map->OnLevelLoaded();
}

// 0x00198900 OnLevelEnding__9FEManager
#include "KS/SRC/ks/BeachFrontEnd.h"
#include "KS/SRC/ks/FrontEndManager.h"

void FEManager::OnLevelEnding()
{
    map->OnLevelEnding();
}

// 0x00198ED8 UpdateIGOScene__9FEManager
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"

void FEManager::UpdateIGOScene()
{
    if(pms->draw)
        pms->UpdateInScene();
}

// 0x00198CC8 DrawIGO__9FEManager
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"
#include "KS/SRC/ks/IGOFrontEnd.h"

void FEManager::DrawIGO() {
    if (g_igo_enabled) {
        IGO->Draw();
        pms->Draw();
    }
}

// 0x00199070 ReleaseIGO__9FEManager
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/FrontEndMenus.h"
#include "KS/SRC/ks/IGOFrontEnd.h"

void FEManager::ReleaseIGO()
{
    if (IGO)
        delete IGO;
    IGO = 0;
    if (pms)
        delete pms;
}

// 0x00198850 ReloadTextures__9FEManager
struct map_vtable{char p0[400];short panel_adjust;short x0;void(*reload_panel)(void*);char p1[56];short map_adjust;short x1;void(*reload_map)(void*);};struct map{char p0[116];map_vtable*vtable;};struct help_vtable{char p0[72];short adjustment;short x0;void(*reload)(void*);};struct helpbar{char p0[192];help_vtable*vtable;};struct manager{char p0[87712];map*map_ptr;helpbar*help;};extern "C" void reload_fonts(manager*) __asm__("ReloadFontTextures__9FEManager");__asm__(".equ ReloadFontTextures__9FEManager,0x00198758");extern "C" void reload(manager*self) __asm__("ReloadTextures__9FEManager");void reload(manager*self){reload_fonts(self);register map*m __asm__("$5")=self->map_ptr;register map_vtable*t __asm__("$2")=m->vtable;register int adj __asm__("$4")=t->panel_adjust;register void(*fn)(void*) __asm__("$3")=t->reload_panel;fn((char*)m+adj);m=self->map_ptr;t=m->vtable;adj=t->map_adjust;fn=t->reload_map;fn((char*)m+adj);helpbar*h=self->help;help_vtable*u=h->vtable;u->reload((char*)h+u->adjustment);}
