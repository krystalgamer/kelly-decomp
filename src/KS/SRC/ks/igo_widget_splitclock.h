#ifndef IGO_WIDGET_SPLITCLOCK_H
#define IGO_WIDGET_SPLITCLOCK_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class SplitClockWidget : public IGOWidget {
    PanelQuad *bgPQ;

public:
    virtual void SetDisplay(bool value);
};

#endif
