// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001E9968)
// 0x001E9968 __5beach
#include "KS/SRC/ks/beach.h"

extern const vector3d ZEROVEC;
__asm__(".equ __13JudgingSystem, 0x00259848");
__asm__(".equ ZEROVEC, 0x00554478");
beach::beach() {
    my_objects=0;
    travel_distance=ZEROVEC;
    smashedEntity=0;
    challenge_icon=0;
    challenge_photo=0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E9A18)
// 0x001E9A18 cleanup__5beach
struct dtor_vtable{char padding[8];short adjustment;short reserved;void(*destroy)(void*,int);};struct beach_object{beach_object*next;char padding[52];dtor_vtable*vtable;};struct challenge_obj{dtor_vtable*vtable;};class beach{char padding[708];beach_object*my_objects;char padding2[12];challenge_obj*icon;challenge_obj*photo;public:void cleanup();};inline void destroy_beach(beach_object*p){dtor_vtable*v=p->vtable;v->destroy((char*)p+v->adjustment,3);}inline void destroy_challenge(challenge_obj*p){dtor_vtable*v=p->vtable;v->destroy((char*)p+v->adjustment,3);}void beach::cleanup(){register beach*self asm("$17")=this;register beach_object*check asm("$2")=self->my_objects;if(check){register beach_object*tmp asm("$16");do{register beach_object*current asm("$6")=self->my_objects;tmp=current->next;if(current)destroy_beach(current);self->my_objects=tmp;}while(tmp);}if(self->icon)destroy_challenge(self->icon);self->icon=0;if(self->photo)destroy_challenge(self->photo);self->photo=0;}
#endif
