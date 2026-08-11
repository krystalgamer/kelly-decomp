// Matching decompilation blocks selected by generated build shims.


// 0x001CE0E8 OnTriangle__13PhotoFrontEndi
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnTriangle(int controller) {
}

// 0x001CF0A0 OnTriangle__15PhotoSelectMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoSelectMenu::OnTriangle(int controller) {
}

// 0x001CFDF0 OnTriangle__13PhotoSaveMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoSaveMenu::OnTriangle(int controller) {
}

// 0x001D0548 OnTriangle__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnTriangle(int controller) {
}

// 0x001D0550 OnCross__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnCross(int controller) {
}

// 0x001D0558 OnStart__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnStart(int controller) {
}

// 0x001D0560 OnLeft__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnLeft(int controller) {
}

// 0x001D0568 OnRight__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnRight(int controller) {
}

// 0x001D0570 OnUp__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnUp(int controller) {
}

// 0x001D0578 OnDown__16PhotoDevelopMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoDevelopMenu::OnDown(int controller) {
}

// 0x001CF0A8 OnCross__15PhotoSelectMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoSelectMenu::OnCross(int controller) {
    Select(highlighted->entry_num);
}

// 0x001CF1D8 OnStart__15PhotoSelectMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoSelectMenu::OnStart(int controller) {
    Select(highlighted->entry_num);
}

// 0x001CDF90 Draw__13PhotoFrontEnd
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::Draw()
{
    if (active)
        active->Draw();
}

// 0x001CE0F0 OnLeft__13PhotoFrontEndi
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnLeft(int controller)
{
    if (active)
        active->OnLeft(controller);
}

// 0x001CE128 OnRight__13PhotoFrontEndi
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnRight(int controller)
{
    if (active)
        active->OnRight(controller);
}

// 0x001CE160 OnUp__13PhotoFrontEndi
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnUp(int controller)
{
    if (active)
        active->OnUp(controller);
}

// 0x001CE198 OnDown__13PhotoFrontEndi
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnDown(int controller)
{
    if (active)
        active->OnDown(controller);
}

// 0x001CF208 setHigh__15PhotoSelectMenuP11FEMenuEntryb
#include "KS/SRC/ks/PhotoFrontEnd.h"

__asm__(
    ".equ setHigh__6FEMenuP11FEMenuEntryb, 0x00156638"
);

void PhotoSelectMenu::setHigh(FEMenuEntry *menu, bool animate)
{
    FEMenu::setHigh(menu, animate);
    if (highlighted)
        highlightedIdx = highlighted->entry_num;
    else
        highlightedIdx = -1;
}

// 0x001CFC00 Select__13PhotoSaveMenui
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoSaveMenu::Select(int entry) {
    if (entry==0) {
        parent->MakeActive(next_sub,true);
    } else {
        system->endDraw(false);
    }
}

// 0x001CE1D0 OnEndRun__13PhotoFrontEnd
#include "KS/SRC/ks/PhotoFrontEnd.h"

void PhotoFrontEnd::OnEndRun()
{
    if(selectMenu)
        selectMenu->setHigh(selectMenu->entries, true);
    if(saveMenu)
        saveMenu->setHigh(saveMenu->entries, true);
}
