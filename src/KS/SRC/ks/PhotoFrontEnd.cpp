// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001CE0E8)
// 0x001CE0E8 OnTriangle__13PhotoFrontEndi
class PhotoFrontEnd {
public:
    void OnTriangle(int controller);
};

void PhotoFrontEnd::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CF0A0)
// 0x001CF0A0 OnTriangle__15PhotoSelectMenui
class PhotoSelectMenu {
public:
    void OnTriangle(int controller);
};

void PhotoSelectMenu::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CFDF0)
// 0x001CFDF0 OnTriangle__13PhotoSaveMenui
class PhotoSaveMenu {
public:
    void OnTriangle(int controller);
};

void PhotoSaveMenu::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0548)
// 0x001D0548 OnTriangle__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnTriangle(int controller);
};

void PhotoDevelopMenu::OnTriangle(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0550)
// 0x001D0550 OnCross__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnCross(int controller);
};

void PhotoDevelopMenu::OnCross(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0558)
// 0x001D0558 OnStart__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnStart(int controller);
};

void PhotoDevelopMenu::OnStart(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0560)
// 0x001D0560 OnLeft__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnLeft(int controller);
};

void PhotoDevelopMenu::OnLeft(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0568)
// 0x001D0568 OnRight__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnRight(int controller);
};

void PhotoDevelopMenu::OnRight(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0570)
// 0x001D0570 OnUp__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnUp(int controller);
};

void PhotoDevelopMenu::OnUp(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D0578)
// 0x001D0578 OnDown__16PhotoDevelopMenui
class PhotoDevelopMenu {
public:
    void OnDown(int controller);
};

void PhotoDevelopMenu::OnDown(int controller) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CF0A8)
// 0x001CF0A8 OnCross__15PhotoSelectMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

class PhotoSelectMenu {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;

public:
    void OnCross(int controller);
};

void PhotoSelectMenu::OnCross(int controller) {
    menu_vtable *table = vtable;
    table->select(
        (char *)this + table->adjustment,
        highlighted->entry_num
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CF1D8)
// 0x001CF1D8 OnStart__15PhotoSelectMenui
struct menu_vtable {
    char padding[0x128];
    short adjustment;
    short padding2;
    void (*select)(void *self, int entry);
};

struct menu_entry {
    int entry_num;
};

class PhotoSelectMenu {
    char padding0[0x4c];
    menu_entry *highlighted;
    char padding1[0x24];
    menu_vtable *vtable;

public:
    void OnStart(int controller);
};

void PhotoSelectMenu::OnStart(int controller) {
    menu_vtable *table = vtable;
    table->select(
        (char *)this + table->adjustment,
        highlighted->entry_num
    );
}
#endif
