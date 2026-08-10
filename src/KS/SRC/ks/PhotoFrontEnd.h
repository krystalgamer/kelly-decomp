#ifndef PHOTO_FRONT_END_H
#define PHOTO_FRONT_END_H

#pragma interface

#include "KS/SRC/ks/FEMenu.h"

class PhotoSelectMenu;
class PhotoSaveMenu;
class PhotoDevelopMenu;

class PhotoFrontEnd : public FEMultiMenu {
    PhotoSelectMenu *selectMenu;
    char data_before_save_menu[4];
    PhotoSaveMenu *saveMenu;
    PhotoDevelopMenu *develMenu;

public:
    void OnEndRun();
    virtual void Draw();
    virtual void OnLeft(int controller);
    virtual void OnRight(int controller);
    virtual void OnUp(int controller);
    virtual void OnDown(int controller);
    virtual void OnTriangle(int controller);
};

class PhotoSelectMenu : public FEMultiMenu {
    char photo_select_data[0x498 - sizeof(FEMultiMenu)];
    int highlightedIdx;

public:
    virtual void setHigh(FEMenuEntry *entry, bool animate = true);
    void Select(int entry);
    virtual void OnTriangle(int controller);
    virtual void OnCross(int controller);
    virtual void OnStart(int controller);
};

class PhotoSaveMenu : public FEMultiMenu {
public:
    void Select(int entry);
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
