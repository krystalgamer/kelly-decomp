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

#if defined(KELLY_DECOMP_FUNCTION_0038D860)
// 0x0038D860 nslPauseAllSounds__Fv
extern "C" void fatal(const char*,...)__asm__("nslFatal__FPCce");extern const char fatal_text[];__asm__(".equ nslFatal__FPCce,0x00391420");__asm__(".equ fatal_text,0x0051BF80");struct SoundSlot{int used;char pad[36];int pauseCount;char rest[44];};struct NSLState{char pad0[0xC044];SoundSlot soundSlots[256];char pad1[0x400C];int initialized;char pad2[44];int on;};extern NSLState nsl;__asm__(".equ nsl,0x0049B5F0");extern "C" void pause_all()__asm__("nslPauseAllSounds__Fv");void pause_all(){if(!nsl.on)return;if(nsl.initialized!=1)fatal(fatal_text);for(int i=0;i<256;i++)if(nsl.soundSlots[i].used)nsl.soundSlots[i].pauseCount++;}
#endif
