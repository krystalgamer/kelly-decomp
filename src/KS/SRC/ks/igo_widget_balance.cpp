// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00168220)
// 0x00168220 SetDisplay__18HorizBalanceWidgetb
class IGOWidget { public: void SetDisplay(bool value); };
__asm__(".equ SetDisplay__9IGOWidgetb, 0x00164658");
class HorizBalanceWidget : public IGOWidget { public: void SetDisplay(bool value); };
void HorizBalanceWidget::SetDisplay(bool value) { IGOWidget::SetDisplay(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168470)
// 0x00168470 Update__18HorizBalanceWidgetf
class IGOWidget { public: void Update(float time); };
__asm__(".equ Update__9IGOWidgetf, 0x00164660");
class HorizBalanceWidget : public IGOWidget { public: void Update(float time); };
void HorizBalanceWidget::Update(float time) { IGOWidget::Update(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001681F8)
// 0x001681F8 _$_18HorizBalanceWidget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_9IGOWidget");
extern const char derived_vtable[];
__asm__(".equ _$_9IGOWidget, 0x00164628");
        __asm__(".equ derived_vtable, 0x004CB508");
struct WidgetLayout { int field0; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_18HorizBalanceWidget");
void DerivedDtor(void *self, int deleting) { ((WidgetLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00168198)
// 0x00168198 __18HorizBalanceWidget
extern "C" void construct_igo(void *)
    __asm__("__9IGOWidget");
extern const char balance_vtable[];
__asm__(".equ __9IGOWidget, 0x00164608");
__asm__(".equ balance_vtable, 0x004DB508");
struct balance_layout {
    char padding[4];
    const void *vtable;
    void *pointers[6];
    char padding2[12];
    float meter_center;
    int flashing;
    int extra;
};
extern "C" balance_layout *construct_balance(balance_layout *self)
    __asm__("__18HorizBalanceWidget");
balance_layout *construct_balance(balance_layout *self) {
    construct_igo(self);
    register const void *table __asm__("$3")=balance_vtable;
    self->vtable=table;
    self->meter_center=243.0f;
    self->pointers[0]=0;
    self->pointers[1]=0;
    self->pointers[2]=0;
    self->pointers[3]=0;
    self->pointers[4]=0;
    self->pointers[5]=0;
    self->flashing=0;
    self->extra=0;
    return self;
}
#endif
