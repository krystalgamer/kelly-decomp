// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00166E98)
// 0x00166E98 SetFillage__18SpecialMeterWidgetf
class PanelQuad { char padding[0x10]; float mask; int maskType; public: void Mask(float amount, int type) { mask = amount; maskType = type; } };
class SpecialMeterWidget { char padding[0x10]; PanelQuad* colorPQ; public: void SetFillage(float amount); };
void SpecialMeterWidget::SetFillage(float amount) { colorPQ->Mask(amount, true); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166B30)
// 0x00166B30 SetDisplay__18SpecialMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SpecialMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SpecialMeterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00166B08)
// 0x00166B08 _$_18SpecialMeterWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB578");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_18SpecialMeterWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
