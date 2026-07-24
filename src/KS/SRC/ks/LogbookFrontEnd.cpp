// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D64B0)
// 0x001D64B0 OnLeft__15LogbookFrontEndi
struct SoundScriptManager; extern SoundScriptManager *sound_manager; extern "C" void play_event(SoundScriptManager*,int,void*,float) __asm__("playEvent__18SoundScriptManager9EventTypeP6entityf"); extern "C" void update_notes(void*,int) __asm__("UpdateUnlockedNotes__15LogbookFrontEndi");
__asm__(".equ sound_manager,0x0046B4A0"); __asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf,0x0031C380"); __asm__(".equ UpdateUnlockedNotes__15LogbookFrontEndi,0x001D60A8");
struct logbook_layout { char padding[1000]; int page; };
extern "C" void logbook_left(logbook_layout *self,int c) __asm__("OnLeft__15LogbookFrontEndi");
void logbook_left(logbook_layout *self,int c)
{
    if(self->page>0){--self->page;update_notes(self,self->page);play_event(sound_manager,26,0,0.0f); __asm__ __volatile__("");}else { play_event(sound_manager,28,0,0.0f); __asm__ __volatile__(""); }
}
#endif
