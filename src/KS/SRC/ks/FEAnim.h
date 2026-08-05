#ifndef FEANIM_H
#define FEANIM_H

#pragma interface

#include "KS/SRC/ks/FEPanel.h"

enum PanelAnimKind {
    AnimInstance = 0xA1,
    AnimSpecial = 0xA2
};

class PanelAnimKeyframe {
public:
    float idx;
    vector3d translation;
    vector3d euler;
    vector3d scale;
    stringx event;
    float vis;
};

class PanelAnim {
public:
    stringx name;
    stringx properties;
    PanelAnim *parent;
    matrix4x4 matrix;
    unsigned int numkeyframes;
    PanelAnimKeyframe *keyframes;
    PanelAnim *children;
    PanelAnim *next;
    PanelQuad *quad;

    virtual ~PanelAnim();
    virtual PanelAnimKind Kind() const = 0;
    PanelAnim *FindObject(char *name);
};

class PanelAnimInstance : public PanelAnim {
public:
    stringx filename;

    virtual PanelAnimKind Kind() const;
};

class PanelAnimFile {
public:
    PanelAnim *obs;
    float totalseconds;

    virtual ~PanelAnimFile();
    PanelAnim *FindObject(char *name);
};

#endif
