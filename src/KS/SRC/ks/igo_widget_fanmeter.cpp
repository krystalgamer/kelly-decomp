// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168E70)
// 0x00168E70 SetDisplay__14FanMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class FanMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void FanMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001694D8)
// 0x001694D8 Update__14FanMeterWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class FanMeterWidget : public IGOWidget { public: void Update(float time); };
void FanMeterWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168E18)
// 0x00168E18 _$_14FanMeterWidget
#include "decomp_annotations.h"

extern "C" void BuiltinVecDelete(void *memory)
    __asm__("__builtin_vec_delete");
extern "C" void IGOWidgetDtor(void *self, int deleting)
    __asm__("_$_9IGOWidget");

__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ _$_9IGOWidget, 0x00164628");

extern const char fan_meter_widget_vtable[];
__asm__(".equ fan_meter_widget_vtable, 0x004DB468");

struct fan_meter_widget_layout {
    char padding[4];
    const void *vtable;
    int numSections;
    void *sectionPQs;
};

extern "C" void FanMeterWidgetDtor(void *self, int deleting)
    __asm__("_$_14FanMeterWidget");

void FanMeterWidgetDtor(void *self, int deleting)
{
    fan_meter_widget_layout *widget = (fan_meter_widget_layout *)self;
    widget->vtable = fan_meter_widget_vtable;
    if (widget->sectionPQs)
        BuiltinVecDelete(widget->sectionPQs);
    IGOWidgetDtor(widget, deleting);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001694F8)
// 0x001694F8 Draw__14FanMeterWidget
struct pq_vtable{char pad[64];short adjustment;short zero;void(*draw)(void*,float,bool);};struct PanelQuad{char pad[404];pq_vtable*vtable;};struct PanelQuad4{char pad[404];pq_vtable*vtable;};class FanMeterWidget;extern "C" void base_draw(FanMeterWidget*)__asm__("Draw__9IGOWidget");asm(".equ Draw__9IGOWidget,0x00164668");class FanMeterWidget{public:int display;void*vtable;int numSections;PanelQuad4**sectionPQs;PanelQuad*arrowPQ;void Draw();};inline void draw_quad(void*q,pq_vtable*v){v->draw((char*)q+v->adjustment,-1.0f,false);}void FanMeterWidget::Draw(){base_draw(this);if(!display)return;for(int i=0;i<numSections;i++)draw_quad(sectionPQs[i],sectionPQs[i]->vtable);draw_quad(arrowPQ,arrowPQ->vtable);}
#endif
