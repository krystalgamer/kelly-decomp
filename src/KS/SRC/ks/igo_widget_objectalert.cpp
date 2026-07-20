// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016A6D0)
// 0x0016A6D0 Hide__17ObjectAlertWidgetb
class ObjectAlertWidget { char padding[0x10]; float fade; int fadeDir; public: void Hide(bool fadeOut); };
void ObjectAlertWidget::Hide(bool fadeOut) { fadeDir = -1; if (!fadeOut) fade = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016A428)
// 0x0016A428 _$_17ObjectAlertWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB138");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_17ObjectAlertWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
