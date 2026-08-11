// Matching decompilation blocks selected by generated build shims.


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
