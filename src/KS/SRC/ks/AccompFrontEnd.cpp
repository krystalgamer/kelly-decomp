// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D4F30)
// 0x001D4F30 SwitchPages__14AccompFrontEndb
class AccompFrontEnd {
    char padding[0x168];
    int cur_page;

    void UpdatePhotos();

public:
    void SwitchPages(bool right);
};

__asm__(".equ UpdatePhotos__14AccompFrontEnd, 0x001D4A98");

void AccompFrontEnd::SwitchPages(bool right)
{
    if (right)
        ++cur_page;
    else
        --cur_page;
    UpdatePhotos();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D4F68)
// 0x001D4F68 OnLeft__14AccompFrontEndi
struct SoundScriptManager; extern SoundScriptManager *sound_manager; extern "C" void play_event(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf"); extern "C" void switch_pages(void*,bool) __asm__("SwitchPages__14AccompFrontEndb");
__asm__(".equ sound_manager,0x0046B4A0"); __asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380"); __asm__(".equ SwitchPages__14AccompFrontEndb,0x001D4F30");
struct accomp_layout { char padding[360]; int cur_page; };
extern "C" void on_left(accomp_layout *self,int controller) __asm__("OnLeft__14AccompFrontEndi");
void on_left(accomp_layout *self,int controller)
{
    if(self->cur_page>0){play_event(sound_manager,26,0,0.0f);switch_pages(self,false); __asm__ __volatile__("" : : : "memory"); return;}else { play_event(sound_manager,28,0,0.0f); __asm__ __volatile__("" : : : "memory"); }
        __asm__ __volatile__("" : : : "cc");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D4FD0)
// 0x001D4FD0 OnRight__14AccompFrontEndi
struct SoundScriptManager;extern SoundScriptManager*sound_manager;extern "C" int play(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf");extern "C" void switch_pages(void*,bool) __asm__("SwitchPages__14AccompFrontEndb");__asm__(".equ sound_manager,0x0046B4A0");__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380");__asm__(".equ SwitchPages__14AccompFrontEndb,0x001D4F30");struct accomp{char p0[356];int num_pages,cur_page;};extern "C" void right(accomp*self,int) __asm__("OnRight__14AccompFrontEndi");void right(accomp*self,int){if(self->cur_page<self->num_pages-1){play(sound_manager,26,0,0.0f);switch_pages(self,true);}else play(sound_manager,28,0,0.0f);int dead;__asm__("" : "=r"(dead));}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D4A98)
// 0x001D4A98 UpdatePhotos__14AccompFrontEnd
struct QuadVTable{char p[24];short turn_adj;short gap;void(*turn)(void*,bool);};struct PanelQuadLayout{char p[404];QuadVTable*vt;void TurnOn(bool on){QuadVTable*v=vt;v->turn((char*)this+v->turn_adj,on);}};
#ifndef ACCOMPFRONTEND_H
struct PanelQuad;class AccompFrontEnd{char p[584];PanelQuad*mag_covers[8][2];public:void UpdatePage(bool);void UpdatePhotos();};
#endif
asm(".equ UpdatePage__14AccompFrontEndb,0x001D4B38");void AccompFrontEnd::UpdatePhotos(){PanelQuad**row=&mag_covers[0][1];for(int i=0;i<8;i++){((PanelQuadLayout*)row[-1])->TurnOn(false);((PanelQuadLayout*)row[0])->TurnOn(false);row+=2;}UpdatePage(true);UpdatePage(false);asm volatile("");}
#endif

// Source implementation boundary.
// 0x001DE0D0 Select__14AccompFrontEndi
#include "KS/SRC/ks/AccompFrontEnd.h"

void AccompFrontEnd::Select(int arg0) {
}

// 0x001DE0D8 OnUp__14AccompFrontEndi
#include "KS/SRC/ks/AccompFrontEnd.h"

void AccompFrontEnd::OnUp(int arg0) {
}

// 0x001DE0E0 OnDown__14AccompFrontEndi
#include "KS/SRC/ks/AccompFrontEnd.h"

void AccompFrontEnd::OnDown(int arg0) {
}

// 0x001DE078 __tf14AccompFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base); extern "C" void **BaseRtti_001DE078() __asm__("__tf11FEMultiMenu"); extern "C" void *type_001DE078[] __asm__("__ti14AccompFrontEnd"); extern const char name_001DE078[]; extern void *base_type_001DE078[]; __asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138"); __asm__(".equ __ti14AccompFrontEnd, 0x005A2EE8"); __asm__(".equ name_001DE078, 0x004DE058"); __asm__(".equ base_type_001DE078, 0x004DDC48"); extern "C" void **Rtti_001DE078() __asm__("__tf14AccompFrontEnd"); void **Rtti_001DE078() { if (!type_001DE078[0]) { BaseRtti_001DE078(); __rtti_class(type_001DE078, name_001DE078, base_type_001DE078, 1); } return type_001DE078; }
