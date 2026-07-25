// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/igo_widget_splitmeter.h"

#if defined(KELLY_DECOMP_FUNCTION_0016BF98)
// 0x0016BF98 Update__16SplitMeterWidgetf
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
void SplitMeterWidget::Update(float time)
{
    IGOWidget::Update(time);
    if (meter)
        SetFillage(meter->GetFillage());
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BE20)
// 0x0016BE20 SetDisplay__16SplitMeterWidgetb
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
void SplitMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BDF8)
// 0x0016BDF8 _$_16SplitMeterWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB2F0");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_16SplitMeterWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016BFE0)
// 0x0016BFE0 Draw__16SplitMeterWidget
struct QuadVTable{char p[64];short draw_adj;short gap;void(*draw)(void*,int,float);};struct PanelQuadLayout{char p[404];QuadVTable*vt;void Draw(int layer,float alpha=-1.0f){QuadVTable*v=vt;v->draw((char*)this+v->draw_adj,layer,alpha);}};asm(".equ Draw__9IGOWidget,0x00164668");void SplitMeterWidget::Draw(){IGOWidget::Draw();if(!display)return;for(int i=0;i<3;i++)((PanelQuadLayout*)framePQs[i])->Draw(0);((PanelQuadLayout*)colorPQ)->Draw(0);}
#endif
