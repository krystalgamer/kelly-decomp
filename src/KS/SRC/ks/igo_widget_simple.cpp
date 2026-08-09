// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164908)
// 0x00164908 IsShown__C12SimpleWidget
#include "KS/SRC/ks/igo_widget_simple.h"

bool SimpleWidget::IsShown(void) const
{
    return numPQs > 0 && pqs[0]->IsOn();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164708)
// 0x00164708 _$_12SimpleWidget
#include "decomp_annotations.h"

extern "C" void BuiltinVecDelete(void *memory)
    __asm__("__builtin_vec_delete");
extern "C" void IGOWidgetDtor(void *self, int deleting)
    __asm__("_$_9IGOWidget");

__asm__(".equ __builtin_vec_delete, 0x002AC6D0");
__asm__(".equ _$_9IGOWidget, 0x00164628");

extern const char simple_widget_vtable[];
__asm__(".equ simple_widget_vtable, 0x004DB618");

struct simple_widget_layout {
    char padding[4];
    const void *vtable;
    int numPQs;
    void *pqs;
};

extern "C" void SimpleWidgetDtor(void *self, int deleting)
    __asm__("_$_12SimpleWidget");

void SimpleWidgetDtor(void *self, int deleting)
{
    simple_widget_layout *widget = (simple_widget_layout *)self;
    widget->vtable = simple_widget_vtable;
    if (widget->pqs)
        BuiltinVecDelete(widget->pqs);
    IGOWidgetDtor(widget, deleting);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164888)
// 0x00164888 Show__12SimpleWidgetb
struct QuadVtable{char pad[24];short adjust;short z;void(*turn_on)(void*,bool);};struct PanelQuad{char pad[404];QuadVtable*vtable;};struct SimpleWidget{char pad[8];int numPQs;PanelQuad**pqs;void Show(bool)__asm__("Show__12SimpleWidgetb");};void SimpleWidget::Show(bool on){for(int i=0;i<numPQs;i++){PanelQuad*q=pqs[i];QuadVtable*v=q->vtable;v->turn_on((char*)q+v->adjust,on);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164800)
// 0x00164800 Draw__12SimpleWidget
struct QuadVtable{char pad[64];short adjust;short z;void(*draw)(void*,int,float);};struct PanelQuad{char pad[404];QuadVtable*vtable;};struct SimpleWidget{int display;char pad[4];int numPQs;PanelQuad**pqs;void Draw()__asm__("Draw__12SimpleWidget");};void SimpleWidget::Draw(){if(!display)return;for(int i=0;i<numPQs;i++){PanelQuad*q=pqs[i];QuadVtable*v=q->vtable;v->draw((char*)q+v->adjust,0,-1.0f);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164678)
// 0x00164678 __12SimpleWidgeti
struct PanelQuad{};class SimpleWidget{public:bool display;void*vtable;int numPQs;PanelQuad**pqs;};extern "C" void base_ctor(SimpleWidget*)__asm__("__9IGOWidget");extern "C" void*newarr(unsigned,unsigned,const char*,int)__asm__("__vn__FUiUiPCci");extern void*simple_vtable;extern const char source_file[];__asm__(".equ __9IGOWidget,0x00164608");__asm__(".equ __vn__FUiUiPCci,0x002AC5A0");__asm__(".equ simple_vtable,0x004DB618");__asm__(".equ source_file,0x004C0960");extern "C" SimpleWidget*ctor(SimpleWidget*,int)__asm__("__12SimpleWidgeti");SimpleWidget*ctor(SimpleWidget*self,int size){base_ctor(self);self->numPQs=size;register void*vt asm("$3")=&simple_vtable;self->vtable=vt;self->pqs=(PanelQuad**)newarr(self->numPQs*4,0,source_file,0);for(int i=0;i<self->numPQs;i++)self->pqs[i]=0;return self;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00164760)
// 0x00164760 Init__12SimpleWidgetR9PanelFilePC7stringx
struct stringx{char*chars;void*buf;const char*c_str()const{return chars;}};struct PanelQuad;class PanelFile{public:PanelQuad*GetPointer(const char*);};struct VTable{char p[56];short show_adj;short gap;void(*show)(void*,bool);};class SimpleWidget{int display;VTable*vt;int numPQs;PanelQuad**pqs;public:void Init(PanelFile&,const stringx*);};asm(".equ GetPointer__9PanelFilePCc,0x00152F88");void SimpleWidget::Init(PanelFile&panel,const stringx*pqNames){for(int i=0;i<numPQs;i++)pqs[i]=panel.GetPointer(pqNames[i].c_str());VTable*v=vt;v->show((char*)this+v->show_adj,false);}
#endif
