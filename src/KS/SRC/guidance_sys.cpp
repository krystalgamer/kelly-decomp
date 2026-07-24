// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002A9470)
// 0x002A9470 _$_19rocket_guidance_sys
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char guidance_vtable[];
__asm__(".equ guidance_vtable, 0x004F9700");

struct guidance_layout {
    void *owner;
    int flags;
    const void *vtable;
};

extern "C" void RocketGuidanceDtor(void *self, int deleting)
    __asm__("_$_19rocket_guidance_sys");

void RocketGuidanceDtor(void *self, int deleting)
{
    guidance_layout *guidance = (guidance_layout *)self;
    guidance->vtable = guidance_vtable;
    guidance->owner = 0;
    if (deleting & 1)
        BuiltinDelete(self);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002A98F8)
// 0x002A98F8 __tcf_0
struct vec{void**start,**finish,**end;};extern vec regs;extern "C" void arch_free(void*);__asm__(".equ regs,0x00554DB8");__asm__(".equ arch_free,0x002AC768");struct pool{void*free[16];};extern pool alloc_pool;__asm__(".equ alloc_pool,0x003E5628");extern "C" void cleanup() __asm__("__tcf_0_002A98F8");void cleanup(){register void**start __asm__("$5")=regs.start;unsigned count=regs.end-start;if(count){unsigned bytes=count*4;if(bytes>=129)arch_free(start);else{unsigned idx=((bytes+7)/8)-1;*(void**)start=alloc_pool.free[idx];alloc_pool.free[idx]=start;}}int dead;__asm__("" : "=r"(dead));}
#endif
