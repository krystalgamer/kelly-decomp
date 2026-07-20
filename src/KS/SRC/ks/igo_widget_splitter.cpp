// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168C80)
// 0x00168C80 SetDisplay__14SplitterWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class SplitterWidget : public IGOWidget { public: void SetDisplay(bool value); };
void SplitterWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168D08)
// 0x00168D08 Update__14SplitterWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class SplitterWidget : public IGOWidget { public: void Update(float time); };
void SplitterWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168C58)
// 0x00168C58 _$_14SplitterWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB4C0");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_14SplitterWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
