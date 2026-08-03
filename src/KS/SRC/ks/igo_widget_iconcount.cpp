// Matching decompilation blocks selected by generated build shims.


// 0x0016DDA8 Hide__15IconCountWidgetb
#include "KS/SRC/ks/igo_widget_iconcount.h"

void IconCountWidget::Hide(bool fadeOut) { if (fadeOut) fadeDir = -1; }

// 0x0016DDC0 Show__15IconCountWidgetb
#include "KS/SRC/ks/igo_widget_iconcount.h"

void IconCountWidget::Show(bool fadeIn) { if (fadeIn) fadeDir = 1; }

#if defined(KELLY_DECOMP_FUNCTION_0016DD28)
// 0x0016DD28 Draw__15IconCountWidget
struct RootVtable{char pad[64];short adjust;short z;void(*draw)(void*,int,float);};struct Root{char pad[404];RootVtable*vtable;};struct TextVtable{char pad[24];short adjust;short z;void(*draw)(void*);};struct Text{char pad[76];TextVtable*vtable;};extern "C" void base_draw(void*)__asm__("Draw__9IGOWidget");__asm__(".equ Draw__9IGOWidget,0x00164668");struct IconCountWidget{int display;char pad[4];Root*objectRoot;Text*firstText;Text*secondText;void Draw()__asm__("Draw__15IconCountWidget");};void IconCountWidget::Draw(){base_draw(this);if(!display)return;RootVtable*rv=objectRoot->vtable;rv->draw((char*)objectRoot+rv->adjust,0,-1.0f);TextVtable*v1=firstText->vtable;v1->draw((char*)firstText+v1->adjust);TextVtable*v2=secondText->vtable;v2->draw((char*)secondText+v2->adjust);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016D628)
// 0x0016D628 _$_15IconCountWidget
struct TextVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct Text{char pad[76];TextVtable*vtable;};struct Widget{char pad[4];void*vptr;char rest[12];};extern char own_vtable[];extern "C" void base_dtor(void*,int)__asm__("_$_9IGOWidget");__asm__(".equ own_vtable,0x004DB1E0");__asm__(".equ _$_9IGOWidget,0x00164628");extern "C" void dtor(Widget*self,int deleting)__asm__("_$_15IconCountWidget");void dtor(Widget*self,int deleting){self->vptr=own_vtable;Text*a=*(Text**)((char*)self+12);if(a){TextVtable*v=a->vtable;v->destroy((char*)a+v->adjust,3);}Text*b=*(Text**)((char*)self+16);if(b){TextVtable*v=b->vtable;v->destroy((char*)b+v->adjust,3);}base_dtor(self,deleting);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016D6D0)
// 0x0016D6D0 Init__15IconCountWidgetR9PanelFileP4FontT2RC7color32T4
#include "KS/SRC/ks/igo_widget_iconcount.h"

extern const char iconmeter_name[];
__asm__(".equ iconmeter_name, 0x004C1460");

void IconCountWidget::Init(
    PanelFile &panel,
    Font *numberfont,
    Font *textfont,
    const color32 &textColor1,
    const color32 &textColor2)
{
    objectRoot = panel.GetPointer(iconmeter_name);

    iconText->setFont(textfont);
    iconText->color = textColor2;
    iconCountText->setFont(numberfont);
    iconCountText->color = textColor1;

    if (state != STATE_NONE)
        SetDisplay(true);

    num_icons = 0;
    num_spins = 0;
}
#endif
