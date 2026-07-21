#ifndef KELLY_DECOMP_IGO_WIDGET_OBJECTALERT_H
#define KELLY_DECOMP_IGO_WIDGET_OBJECTALERT_H

#include "KS/SRC/ks/igo_widget.h"

class PanelQuad;
class PanelFile;

#pragma interface
class ObjectAlertWidget : public IGOWidget {
private:
    PanelQuad* objectRoot;
    float hiliteTime;
    float fade;
    int fadeDir;

    bool FindNearestObject();

public:
    ObjectAlertWidget();
    ~ObjectAlertWidget();
    void SetDisplay(bool value = true);
    void Init(PanelFile& panel);
    void Update(float time);
    void Draw();
    void Hide(bool fadeOut = true);
    void Show(bool fadeIn = true);
    bool IsHiding() const { return fadeDir == -1; }
};

#endif
