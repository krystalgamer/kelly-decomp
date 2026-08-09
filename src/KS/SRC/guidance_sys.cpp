// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002A98F8)
// 0x002A98F8 __tcf_0
struct vec{void**start,**finish,**end;};extern vec regs;extern "C" void arch_free(void*);__asm__(".equ regs,0x00554DB8");__asm__(".equ arch_free,0x002AC768");struct pool{void*free[16];};extern pool alloc_pool;__asm__(".equ alloc_pool,0x003E5628");extern "C" void cleanup() __asm__("__tcf_0_002A98F8");void cleanup(){register void**start __asm__("$5")=regs.start;unsigned count=regs.end-start;if(count){unsigned bytes=count*4;if(bytes>=129)arch_free(start);else{unsigned idx=((bytes+7)/8)-1;*(void**)start=alloc_pool.free[idx];alloc_pool.free[idx]=start;}}int dead;__asm__("" : "=r"(dead));}
#endif

// Source implementation boundary.
// 0x002B9480 get_type__15guidance_system
#include "KS/SRC/guidance_sys.h"
guidance_system::eGuidanceSysType guidance_system::get_type()
{
    return GUIDANCE_GENERIC;
}

// 0x002B9488 frame_advance__15guidance_systemf
#include "KS/SRC/guidance_sys.h"
void guidance_system::frame_advance(float time_inc)
{
}

// 0x002B9508 get_type__19rocket_guidance_sys
#include "KS/SRC/guidance_sys.h"
guidance_system::eGuidanceSysType rocket_guidance_sys::get_type()
{
    return GUIDANCE_ROCKET;
}
