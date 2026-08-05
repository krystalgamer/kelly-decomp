// Matching decompilation blocks selected by generated build shims.


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
