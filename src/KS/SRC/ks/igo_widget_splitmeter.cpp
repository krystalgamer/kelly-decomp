// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016BE20)
// 0x0016BE20 SetDisplay__16SplitMeterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SplitMeterWidget : public IGOWidget { public: void SetDisplay(bool value); };
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
