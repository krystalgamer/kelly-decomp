// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002E3B88)
// 0x002E3B88 __6portalPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeT1
struct region_node;extern "C" void base_ctor(void*,unsigned) __asm__("__8vr_pmeshUi");__asm__(".equ __8vr_pmeshUi,0x002D38B0");extern void*portal_vtable;__asm__(".equ portal_vtable,0x004F1E80");struct sphere{float center[3],radius;};struct portal{char p0[16];void*vtable;char p1[152];sphere bound;char p2[20];region_node*front,*back;int inactive;};extern "C" portal*portal_ctor(portal*self,region_node*front,region_node*back) __asm__("__6portalPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeT1");portal*portal_ctor(portal*self,region_node*front,region_node*back){base_ctor(self,0);register void**vtable __asm__("$3")=&portal_vtable;register sphere*b __asm__("$4")=&self->bound;__asm__ __volatile__("" : "+r"(b));self->bound.center[0]=0.0f;__asm__ __volatile__("" : : : "memory");self->vtable=vtable;register portal*result __asm__("$2")=self;__asm__ __volatile__("" : "+r"(result));b->radius=0.0f;__asm__ __volatile__("" : : : "memory");b->center[1]=0.0f;__asm__ __volatile__("" : : : "memory");b->center[2]=0.0f;self->front=front;self->back=back;self->inactive=false;return result;}
#endif
