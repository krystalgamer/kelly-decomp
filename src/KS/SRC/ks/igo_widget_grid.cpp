// Matching decompilation blocks selected by generated build shims.


// 0x0016EB08 ShowHLines__10GridWidgeti
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct grid{char p0[8];pq*lines[15];};extern "C" void show(grid*self,int flags) __asm__("ShowHLines__10GridWidgeti");void show(grid*self,int flags){for(int i=0;i<15;i++)if(flags&(1<<i)){pq*q=self->lines[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,true);}}

// 0x0016EB78 ShowVLines__10GridWidgeti
struct pq_vtable{char p0[24];short adjustment;short x0;void(*turn_on)(void*,bool);};struct pq{char p0[404];pq_vtable*vtable;};struct grid{char p0[68];pq*lines[4];};extern "C" void show(grid*self,int flags) __asm__("ShowVLines__10GridWidgeti");void show(grid*self,int flags){for(int i=0;i<4;i++)if(flags&(1<<i)){pq*q=self->lines[i];pq_vtable*t=q->vtable;t->turn_on((char*)q+t->adjustment,true);}}

// 0x0016EA50 Draw__10GridWidget
#include "KS/SRC/ks/igo_widget_grid.h"

void GridWidget::Draw(void)
{
	int	i;

	if (!display)
		return;

	for (i = 0; i < NUM_H_LINES; i++)
		hLinePQs[i]->Draw(0);
	for (i = 0; i < NUM_V_LINES; i++)
		vLinePQs[i]->Draw(0);
}
