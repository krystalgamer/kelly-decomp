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

#if defined(KELLY_DECOMP_FUNCTION_001D5E80)
// 0x001D5E80 Draw__15LogbookFrontEnd
struct text_vtable{char padding[24];short adjustment;short reserved;void(*draw)(void*);};struct Text{char padding[76];text_vtable*vtable;};struct book_vtable{char padding[64];short adjustment;short reserved;void(*draw)(void*,int,float);};struct Book{char padding[404];book_vtable*vtable;};class LogbookFrontEnd{char padding0[356];Text*notes0;Text*dates0;char padding1[120];Text*notes1;Text*dates1;char padding2[504];Book*book;public:void Draw();};extern "C" void draw_base(LogbookFrontEnd*)__asm__("Draw__15FEGraphicalMenu");asm(".equ Draw__15FEGraphicalMenu,0x001580D8");inline void draw_text(Text*t){text_vtable*v=t->vtable;v->draw((char*)t+v->adjustment);}void LogbookFrontEnd::Draw(){draw_base(this);draw_text(notes0);draw_text(dates0);draw_text(notes1);draw_text(dates1);book_vtable*v=book->vtable;v->draw((char*)book+v->adjustment,0,-1.0f);}
#endif
