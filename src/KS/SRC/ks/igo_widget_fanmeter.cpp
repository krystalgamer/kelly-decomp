// Matching decompilation blocks selected by generated build shims.

// 0x001695A8 Show__14FanMeterWidgetb
#include "KS/SRC/ks/igo_widget_fanmeter.h"

void FanMeterWidget::Show(bool shown)
{
    if (shown)
    {
        SetSize(size);
        arrowPQ->TurnOn(true);
    }
    else
    {
        for (int index = 0;
             index < numSections;
             index++)
            sectionPQs[index]->TurnOn(false);
        arrowPQ->TurnOn(false);
    }
}

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

// 0x001694F8 Draw__14FanMeterWidget
struct pq_vtable{char pad[64];short adjustment;short zero;void(*draw)(void*,float,bool);};struct PanelQuad{char pad[404];pq_vtable*vtable;};struct PanelQuad4{char pad[404];pq_vtable*vtable;};struct FanMeterLayout{int display;void*vtable;int numSections;PanelQuad4**sectionPQs;PanelQuad*arrowPQ;};extern "C" void base_draw(void*)__asm__("Draw__9IGOWidget");asm(".equ Draw__9IGOWidget,0x00164668");inline void draw_quad(void*q,pq_vtable*v){v->draw((char*)q+v->adjustment,-1.0f,false);}extern "C" void draw_fan(FanMeterLayout*self)__asm__("Draw__14FanMeterWidget");void draw_fan(FanMeterLayout*self){base_draw(self);if(!self->display)return;for(int i=0;i<self->numSections;i++)draw_quad(self->sectionPQs[i],self->sectionPQs[i]->vtable);draw_quad(self->arrowPQ,self->arrowPQ->vtable);}
