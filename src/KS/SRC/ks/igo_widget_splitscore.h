#ifndef IGO_WIDGET_SPLITSCORE_H
#define IGO_WIDGET_SPLITSCORE_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"
#include "KS/SRC/ks/igo_widget.h"

class SplitScoreWidget : public IGOWidget {
    char split_score_data[4];
    PanelQuad *bgPQ;

public:
    virtual void SetDisplay(bool value);
};

#endif
