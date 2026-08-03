// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016BD50)
// 0x0016BD50 HighlightLeft__12ReplayWidget
#include "KS/SRC/ks/igo_widget_replay.h"

void ReplayWidget::HighlightLeft()
{
    vcrButtonHL--;
    if (vcrButtonHL < VCR_RESTART)
        vcrButtonHL = VCR_RESTART;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD70)
// 0x0016BD70 HighlightRight__12ReplayWidget
class ReplayWidget { int padding[3]; int vcrButtonHL; public: void HighlightRight(); };
void ReplayWidget::HighlightRight() { vcrButtonHL++; if (vcrButtonHL > 4) vcrButtonHL = 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD00)
// 0x0016BD00 Select__12ReplayWidgeti
class ReplayWidget { char padding[8]; int vcrButton; public: void Select(int button); };
void ReplayWidget::Select(int button) { vcrButton = button; if (vcrButton < 0) vcrButton = 0; if (vcrButton > 4) vcrButton = 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BD28)
// 0x0016BD28 SelectHighlight__12ReplayWidgeti
class ReplayWidget { char padding[0xc]; int vcrButtonHL; public: void SelectHighlight(int button); };
void ReplayWidget::SelectHighlight(int button) { vcrButtonHL = button; if (vcrButtonHL < 0) vcrButtonHL = 0; if (vcrButtonHL > 4) vcrButtonHL = 4; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016B600)
// 0x0016B600 _$_12ReplayWidget
struct TextVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct Text{char pad[76];TextVtable*vtable;};struct Widget{char pad[4];void*vptr;char rest[88];};extern char own_vtable[];extern "C" void base_dtor(void*,int)__asm__("_$_9IGOWidget");__asm__(".equ own_vtable,0x004DB380");__asm__(".equ _$_9IGOWidget,0x00164628");extern "C" void dtor(Widget*self,int deleting)__asm__("_$_12ReplayWidget");void dtor(Widget*self,int deleting){self->vptr=own_vtable;Text*a=*(Text**)((char*)self+88);if(a){TextVtable*v=a->vtable;v->destroy((char*)a+v->adjust,3);}Text*b=*(Text**)((char*)self+92);if(b){TextVtable*v=b->vtable;v->destroy((char*)b+v->adjust,3);}base_dtor(self,deleting);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

// Source implementation boundary.
// 0x001DBE98 GetButton__12ReplayWidget
#include "KS/SRC/ks/igo_widget_replay.h"

int ReplayWidget::GetButton() {
    return vcrButton;
}

// 0x001DBEA0 GetHighlight__12ReplayWidget
#include "KS/SRC/ks/igo_widget_replay.h"

int ReplayWidget::GetHighlight() {
    return vcrButtonHL;
}
