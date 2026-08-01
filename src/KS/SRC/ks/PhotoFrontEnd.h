#ifndef PHOTO_FRONT_END_H
#define PHOTO_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PhotoFrontEnd : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
};

class PhotoSelectMenu : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
};

class PhotoSaveMenu : public FEMultiMenu {
public:
    virtual void OnTriangle(int controller);
};

class PhotoDevelopMenu : public FEMultiMenu {
};

#endif
