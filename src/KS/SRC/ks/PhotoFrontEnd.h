#ifndef PHOTO_FRONT_END_H
#define PHOTO_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PhotoFrontEnd : public FEMultiMenu {
public:
    virtual void Draw();
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnTriangle(int controller);
};

class PhotoSelectMenu : public FEMultiMenu {
public:
    void Select(int entry);
    virtual void OnTriangle(int controller);
    virtual void OnCross(int controller);
    virtual void OnStart(int controller);
};

class PhotoSaveMenu : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
};

class PhotoDevelopMenu : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
    virtual void OnCross(int controller);
    virtual void OnStart(int controller);
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
};

#endif
