// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0016EB08)
// 0x0016EB08 ShowHLines__10GridWidgeti
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct grid{char p0[8];pq*lines[15];};extern "C" void show(grid*self,int flags) __asm__("ShowHLines__10GridWidgeti");void show(grid*self,int flags){for(int i=0;i<15;i++)if(flags&(1<<i)){pq*q=self->lines[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,true);}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0016EB78)
// 0x0016EB78 ShowVLines__10GridWidgeti
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct grid{char p0[68];pq*lines[4];};extern "C" void show(grid*self,int flags) __asm__("ShowVLines__10GridWidgeti");void show(grid*self,int flags){for(int i=0;i<4;i++)if(flags&(1<<i)){pq*q=self->lines[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,true);}}
#endif
