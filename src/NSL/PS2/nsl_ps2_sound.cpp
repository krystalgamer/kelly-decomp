// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0038CAF8)
// 0x0038CAF8 nslAddSound__FUi
unsigned int _nslAddSound(unsigned int source, int stream_offset, int stream_samples);
__asm__(".equ _nslAddSound__FUiii, 0x0038C7E8");
unsigned int nslAddSound(unsigned int source) { return _nslAddSound(source, 0, 0); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038EFD0)
// 0x0038EFD0 push__t10fifo_queue1ZUiRCUi
struct queue{unsigned*data;short max;char p0[2];short tail,count;};extern "C" int push(queue*self,const unsigned&value) __asm__("push__t10fifo_queue1ZUiRCUi");int push(queue*self,const unsigned&value){if(self->count<self->max)goto room;return 0;room:self->tail++;if(self->tail>=self->max)self->tail=0;self->data[self->tail]=value;self->count++;return self->count;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038D860)
// 0x0038D860 nslPauseAllSounds__Fv
extern "C" void fatal(const char*,...)__asm__("nslFatal__FPCce");extern const char fatal_text[];__asm__(".equ nslFatal__FPCce,0x00391420");__asm__(".equ fatal_text,0x0051BF80");struct SoundSlot{int used;char pad[36];int pauseCount;char rest[44];};struct NSLState{char pad0[0xC044];SoundSlot soundSlots[256];char pad1[0x400C];int initialized;char pad2[44];int on;};extern NSLState nsl;__asm__(".equ nsl,0x0049B5F0");extern "C" void pause_all()__asm__("nslPauseAllSounds__Fv");void pause_all(){if(!nsl.on)return;if(nsl.initialized!=1)fatal(fatal_text);for(int i=0;i<256;i++)if(nsl.soundSlots[i].used)nsl.soundSlots[i].pauseCount++;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038D8D8)
// 0x0038D8D8 nslUnpauseAllSounds__Fv
extern char nsl[];extern "C" void fatal(const char*,...)__asm__("nslFatal__FPCce");extern const char fatal_text[];__asm__(".equ nsl,0x0049B5F0");__asm__(".equ nslFatal__FPCce,0x00391420");__asm__(".equ fatal_text,0x0051BF80");extern "C" void unpause()__asm__("nslUnpauseAllSounds__Fv");void unpause(){char*base=nsl;if(!*(int*)(base+0x15880))return;if(*(int*)(base+0x15850)!=1)fatal(fatal_text);char*pause=base+0xC06C;for(int i=0;i<256;i++,pause+=88)if(*(int*)(pause-40))if(*(int*)pause>0)--*(int*)pause;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038D3D0)
// 0x0038D3D0 nslReleaseAllSounds__Fv
struct nslSound{bool isReady;bool used;bool inRange;bool isReallyReady;bool isPlaying;bool isReallyPlaying;bool looping;bool isQueuing;short left,right,old_left,old_right;unsigned gasInstanceId;int pauseCount,dampenCount;unsigned myId,mySource,myEmitter;float rawVolume,positionalVolume,angle,pitch,minDist,maxDist;};struct nslSystem{char pad0[0xc040];nslSound soundSlots[256];char pad1[0x4010];int initialized;char pad2[44];bool on;};extern nslSystem nsl;extern "C" void nslStopSound(unsigned)__asm__("nslStopSound__FUi");extern "C" void nslFatal(const char*,...)__asm__("nslFatal__FPCce");extern const char init_error[];__asm__(".equ nsl,0x0049B5F0");__asm__(".equ nslStopSound__FUi,0x0038D288");__asm__(".equ nslFatal__FPCce,0x00391420");__asm__(".equ init_error,0x0051BF80");extern "C" void nslReleaseAllSounds()__asm__("nslReleaseAllSounds__Fv");void nslReleaseAllSounds(){if(!nsl.on)return;if(nsl.initialized!=1)nslFatal(init_error);for(int i=0;i<256;i++)if(nsl.soundSlots[i].used)nslStopSound(nsl.soundSlots[i].myId);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0038DB08)
// 0x0038DB08 nslDampenAllSounds__Ff
struct nslSound{int isReady;int used;int inRange;int isReallyReady;int isPlaying,isReallyPlaying,looping,isQueuing;short left,right,old_left,old_right;unsigned gasInstanceId;int pauseCount;int dampenCount;char tail[36];};struct nslSystem{char pre[0xC040];nslSound soundSlots[256];char mid[0x4010];int initialized;char gap0[44];int on;char gap1[40];float dampenLevel;};extern nslSystem nsl;extern void nslFatal(const char*,...);extern const char init_error[];asm(".equ nsl,0x0049B5F0");asm(".equ nslFatal__FPCce,0x00391420");asm(".equ init_error,0x0051BF80");void nslDampenAllSounds(float dampenLevel){if(!nsl.on)return;if(nsl.initialized!=1)nslFatal(init_error);nsl.dampenLevel=dampenLevel;for(int i=0;i<256;i++)if(nsl.soundSlots[i].used)if(nsl.soundSlots[i].dampenCount<1)nsl.soundSlots[i].dampenCount++;}
#endif
