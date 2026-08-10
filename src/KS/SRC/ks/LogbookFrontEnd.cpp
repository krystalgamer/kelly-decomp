// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D5E80)
// 0x001D5E80 Draw__15LogbookFrontEnd
struct text_vtable{char padding[24];short adjustment;short reserved;void(*draw)(void*);};struct Text{char padding[76];text_vtable*vtable;};struct book_vtable{char padding[64];short adjustment;short reserved;void(*draw)(void*,int,float);};struct Book{char padding[404];book_vtable*vtable;};class LogbookFrontEnd{char padding0[356];Text*notes0;Text*dates0;char padding1[120];Text*notes1;Text*dates1;char padding2[504];Book*book;public:void Draw();};extern "C" void draw_base(LogbookFrontEnd*)__asm__("Draw__15FEGraphicalMenu");asm(".equ Draw__15FEGraphicalMenu,0x001580D8");inline void draw_text(Text*t){text_vtable*v=t->vtable;v->draw((char*)t+v->adjustment);}void LogbookFrontEnd::Draw(){draw_base(this);draw_text(notes0);draw_text(dates0);draw_text(notes1);draw_text(dates1);book_vtable*v=book->vtable;v->draw((char*)book+v->adjustment,0,-1.0f);}
#endif
