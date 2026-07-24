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

#if defined(KELLY_DECOMP_FUNCTION_001CDF90)
// 0x001CDF90 Draw__13PhotoFrontEnd
struct menu_vtable {
    char padding[0x48];
    short adjustment;
    short padding2;
    void (*draw)(void *self);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class PhotoFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void Draw();
};

void PhotoFrontEnd::Draw()
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->draw((char *)menu + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE0F0)
// 0x001CE0F0 OnLeft__13PhotoFrontEndi
struct menu_vtable {
    char padding[0xA8];
    short adjustment;
    short padding2;
    void (*onLeft)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class PhotoFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnLeft(int controller);
};

void PhotoFrontEnd::OnLeft(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onLeft((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE128)
// 0x001CE128 OnRight__13PhotoFrontEndi
struct menu_vtable {
    char padding[0xB0];
    short adjustment;
    short padding2;
    void (*onRight)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class PhotoFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnRight(int controller);
};

void PhotoFrontEnd::OnRight(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onRight((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE160)
// 0x001CE160 OnUp__13PhotoFrontEndi
struct menu_vtable {
    char padding[0x98];
    short adjustment;
    short padding2;
    void (*onUp)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class PhotoFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnUp(int controller);
};

void PhotoFrontEnd::OnUp(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onUp((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE198)
// 0x001CE198 OnDown__13PhotoFrontEndi
struct menu_vtable {
    char padding[0xA0];
    short adjustment;
    short padding2;
    void (*onDown)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class PhotoFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnDown(int controller);
};

void PhotoFrontEnd::OnDown(int controller)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->onDown((char *)menu + table->adjustment, controller);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CF208)
// 0x001CF208 setHigh__15PhotoSelectMenuP11FEMenuEntryb
struct FEMenuEntry {
    int entry_num;
};

extern "C" void BaseSetHigh(
    void *self,
    FEMenuEntry *menu,
    bool animate
) __asm__("setHigh__6FEMenuP11FEMenuEntryb");

__asm__(
    ".equ setHigh__6FEMenuP11FEMenuEntryb, 0x00156638"
);

class PhotoSelectMenu {
    char padding0[0x4c];
    FEMenuEntry *highlighted;
    char padding1[0x448];
    int highlightedIdx;

public:
    void setHigh(FEMenuEntry *menu, bool animate);
};

void PhotoSelectMenu::setHigh(FEMenuEntry *menu, bool animate)
{
    BaseSetHigh(this, menu, animate);
    if (highlighted)
        highlightedIdx = highlighted->entry_num;
    else
        highlightedIdx = -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CFC00)
// 0x001CFC00 Select__13PhotoSaveMenui
struct menu_vtable {
    char padding[0x110]; short adjustment; short reserved;
    void (*make_active)(void *,void *,int);
};
struct parent_menu { char padding[0x74]; menu_vtable *vtable; };
struct system_vtable {
    char padding[0x58]; short adjustment; short reserved;
    void (*end_draw)(void *,bool);
};
struct menu_system { char padding[0x8c]; system_vtable *vtable; };
class PhotoSaveMenu {
    char padding[0x50];
    menu_system *system;
    char padding2[0x10];
    parent_menu *parent;
    char padding3[8];
    void *next_sub;
public:
    void Select(int entry);
};
void PhotoSaveMenu::Select(int entry) {
    if (entry==0) {
        menu_vtable *table=parent->vtable;
        table->make_active(
            (char *)parent+table->adjustment,next_sub,1
        );
    } else {
        system_vtable *table=system->vtable;
        table->end_draw((char *)system+table->adjustment,false);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CDF30)
// 0x001CDF30 Update__13PhotoFrontEndf
struct active_vtable {
    char padding[0x60]; short adjustment; short reserved;
    void (*update)(void *,float);
};
struct active_menu { char padding[0x74]; active_vtable *vtable; };
extern "C" void update_frontend(void *,float)
    __asm__("Update__8FrontEndf");
extern "C" void update_menu(void *,float)
    __asm__("Update__6FEMenuf");
__asm__(".equ Update__8FrontEndf, 0x00157B30");
__asm__(".equ Update__6FEMenuf, 0x00156DC8");
class PhotoFrontEnd {
    char padding[0x60]; active_menu *active;
public:
    void Update(float time);
};
void PhotoFrontEnd::Update(float time) {
    update_frontend((char *)this+0x80,time);
    update_menu(this,time);
    if (active) {
        active_vtable *table=active->vtable;
        table->update((char *)active+table->adjustment,time);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D03A0)
// 0x001D03A0 Draw__16PhotoDevelopMenu
extern "C" void draw_photo(void *) __asm__("Draw__11PhotoWidget");
__asm__(".equ Draw__11PhotoWidget,0x0016ACD0");
struct draw_vtable { char padding[24]; short adjustment; short reserved; void (*draw)(void *); };
struct drawable { char padding[76]; draw_vtable *vtable; };
struct photo_menu_layout { char padding[104]; drawable *helpText; char padding2[244]; drawable *title; char photo[268]; int drawCounter; };
extern "C" void draw_photo_menu(photo_menu_layout *self) __asm__("Draw__16PhotoDevelopMenu");
void draw_photo_menu(photo_menu_layout *self)
{
    __asm__ __volatile__("" : : : "$31");
    register photo_menu_layout *object __asm__("$16") = self;
    register int counter __asm__("$2") = object->drawCounter;
    register void *photo __asm__("$4") = &object->photo;
    __asm__ __volatile__("" : "+r"(counter), "+r"(photo), "+r"(object));
    ++counter;
    object->drawCounter = counter;
    draw_photo(photo);
    register drawable *element __asm__("$5") = object->title;
    draw_vtable *table = element->vtable;
    register void (*draw)(void *) __asm__("$3") = table->draw;
    draw((char *)element + table->adjustment);
    element = object->helpText;
    table = element->vtable;
    draw = table->draw;
    draw((char *)element + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE1D0)
// 0x001CE1D0 OnEndRun__13PhotoFrontEnd
struct entry; struct menu_vtable { char padding[24]; short adjustment; short reserved; void (*set_high)(void *,entry *,bool); };
struct photo_menu { char padding[64]; entry *entries; char padding2[48]; menu_vtable *vtable; };
struct photo_frontend { char padding[352]; photo_menu *select; char padding2[4]; photo_menu *save; };
extern "C" void end_run(photo_frontend *self) __asm__("OnEndRun__13PhotoFrontEnd");
void end_run(photo_frontend *self)
{
    if(self->select){photo_menu*m=self->select;menu_vtable*t=m->vtable;t->set_high((char*)m+t->adjustment,m->entries,true);}
    if(self->save){photo_menu*m=self->save;menu_vtable*t=m->vtable;t->set_high((char*)m+t->adjustment,m->entries,true);}
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001CE238)
// 0x001CE238 GetSelectedPhotoIdx__C13PhotoFrontEnd
struct game_layout{char p0[116];int game_mode;int get_game_mode()const{return game_mode;}};extern game_layout*g_game_ptr;__asm__(".equ g_game_ptr,0x0046AC64");struct photo_challenge{char p0[40];int numTaken;int GetNumTaken()const{return numTaken;}};struct challenges{char p0[728];photo_challenge*photo;};extern challenges*g_beach_ptr;__asm__(".equ g_beach_ptr,0x0043F710");struct entry{int entry_num;};struct menu{char p0[76];entry*highlighted;};struct photo_front{char p0[352];menu*selectMenu;char p1[4];menu*saveMenu;};extern "C" int selected_photo(const photo_front*self) __asm__("GetSelectedPhotoIdx__C13PhotoFrontEnd");int selected_photo(const photo_front*self){if(g_game_ptr->get_game_mode()==0&&g_beach_ptr->photo&&self->saveMenu->highlighted&&self->saveMenu->highlighted->entry_num==0){if(self->selectMenu->highlighted->entry_num<g_beach_ptr->photo->GetNumTaken())return self->selectMenu->highlighted->entry_num;else return -1;}else return -1;}
#endif
