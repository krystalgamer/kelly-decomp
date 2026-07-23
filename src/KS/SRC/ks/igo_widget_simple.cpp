// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164908)
// 0x00164908 IsShown__C12SimpleWidget
class PanelQuad {
    char padding[0x194];
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual bool IsOn(void) const;
};
class SimpleWidget {
    char padding[8];
    int numPQs;
    PanelQuad** pqs;
public: bool IsShown(void) const;
};
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
