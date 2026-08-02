// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C2068)
// 0x002C2068 __9lensflareRC9entity_idUi
struct entity_id{};struct Flare{int a,b,c;float x,y,z,w;void defaults(){a=0;b=0;c=0;x=1;y=1;z=1;w=0.5f;}};class lensflare{public:char p0[8];void*vtable;char p1[524];Flare flares[8];void init()__asm__("init__9lensflare");};extern "C" void entity_ctor(lensflare*,const entity_id&,int,unsigned)__asm__("__6entityRC9entity_id15entity_flavor_tUi");extern void*lens_vtable;__asm__(".equ __6entityRC9entity_id15entity_flavor_tUi,0x00129778");__asm__(".equ init__9lensflare,0x002C1FC0");__asm__(".equ lens_vtable,0x004F2618");extern "C" lensflare*ctor(lensflare*,const entity_id&,unsigned)__asm__("__9lensflareRC9entity_idUi");lensflare*ctor(lensflare*self,const entity_id&id,unsigned flags){entity_ctor(self,id,20,flags);self->vtable=&lens_vtable;int i=7;char*p=(char*)self+548;do{*(int*)(p-12)=0;*(int*)(p-8)=0;*(int*)(p-4)=0;*(float*)(p+0)=1.0f;*(float*)(p+4)=1.0f;*(float*)(p+8)=1.0f;*(float*)(p+12)=0.5f;i--;p+=28;}while(i!=-1);self->init();return self;}
#endif

// Source implementation boundary.
// 0x002FF8D0 render_passes_needed__C9lensflare
#include "KS/SRC/lensflare.h"
render_flavor_t lensflare::render_passes_needed() const
{
    return RENDER_TRANSLUCENT_PORTION;
}

// 0x002FF8D8 possibly_active__C9lensflare
#include "KS/SRC/lensflare.h"
bool lensflare::possibly_active() const
{
    return true;
}
