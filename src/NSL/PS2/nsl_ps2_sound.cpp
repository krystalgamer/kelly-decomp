// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038CAF8)
// 0x0038CAF8 nslAddSound__FUi
unsigned int _nslAddSound(unsigned int source, int stream_offset, int stream_samples);
__asm__(".equ _nslAddSound__FUiii, 0x0038C7E8");
unsigned int nslAddSound(unsigned int source) { unsigned int result = _nslAddSound(source, 0, 0); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038EFD0)
// 0x0038EFD0 push__t10fifo_queue1ZUiRCUi
struct queue{unsigned*data;short max;char p0[2];short tail,count;};extern "C" int push(queue*self,const unsigned&value) __asm__("push__t10fifo_queue1ZUiRCUi");int push(queue*self,const unsigned&value){if(self->count<self->max)goto room;return 0;room:self->tail++;if(self->tail>=self->max)self->tail=0;self->data[self->tail]=value;self->count++;return self->count;}
#endif
