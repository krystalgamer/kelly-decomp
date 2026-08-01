// GraphicalMenuSystem definitions extracted by generated shims.


// 0x001BC490 SetSystem__13LegalFrontEndP12FEMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void LegalFrontEnd::SetSystem(FEMenuSystem* s) {
    system = s;
}

// 0x001BE6E8 restartMovie__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void GraphicalMenuSystem::restartMovie() {
}

// 0x001BE6F0 killMovie__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void GraphicalMenuSystem::killMovie() {
}

// 0x001BE9E0 DrawMovie__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"

void GraphicalMenuSystem::DrawMovie() {
}

// 0x001BD0B0 OnUnactivate__18ControllerFrontEndP6FEMenu
struct PauseMenuSystemLayout { char padding[0x70]; int controller; };
struct ControllerWidgetLayout { char padding[0x15c]; int active; };
struct FEManagerLayout { char padding[0x156a4]; ControllerWidgetLayout *controller_widget; };
extern FEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
class FEMenu;
class ControllerFrontEnd { char padding0[0x50]; PauseMenuSystemLayout *system; char padding1[0x128]; int selected_controller; public: void OnUnactivate(FEMenu *menu); };
void ControllerFrontEnd::OnUnactivate(FEMenu *menu) { system->controller = selected_controller; frontendmanager.controller_widget->active = 0; }

// 0x001BC258 Draw__13LegalFrontEnd
struct legal_widget_vtable { char padding[0x18]; short adjustment; short padding2; void (*draw)(void *self); };
struct legal_widget { char padding[0x4c]; legal_widget_vtable *vtable; };
class LegalFrontEnd { char padding[0x150]; legal_widget *legal; public: void Draw(); };
void LegalFrontEnd::Draw() { legal_widget_vtable *table = legal->vtable; table->draw((char *)legal + table->adjustment); }

// 0x001BC9B0 OnLeft__13TitleFrontEndi
struct menu_vtable {
    char padding[0xA8];
    short adjustment;
    short padding2;
    void (*on_left)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct title_direction_layout {
    char padding[0x60];
    menu_layout *active;
};

extern "C" void title_left(
    title_direction_layout *self,
    int controller
) __asm__("OnLeft__13TitleFrontEndi");
void title_left(title_direction_layout *self, int controller)
{
    menu_layout *menu = self->active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_left((char *)menu + table->adjustment, controller);
    }
}

// 0x001BC9E8 OnRight__13TitleFrontEndi
struct menu_vtable {
    char padding[0xB0];
    short adjustment;
    short padding2;
    void (*on_right)(void *self, int controller);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct title_direction_layout {
    char padding[0x60];
    menu_layout *active;
};

extern "C" void title_right(
    title_direction_layout *self,
    int controller
) __asm__("OnRight__13TitleFrontEndi");
void title_right(title_direction_layout *self, int controller)
{
    menu_layout *menu = self->active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_right((char *)menu + table->adjustment, controller);
    }
}

// 0x001BCD90 SetSystem__13TitleFrontEndP12FEMenuSystem
class FEMenuSystem;

struct menu_vtable {
    char padding[0x1D0];
    short adjustment;
    short padding2;
    void (*set_system)(void *self, FEMenuSystem *system);
};

struct mc_frontend_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

struct title_system_layout {
    char padding0[0x50];
    FEMenuSystem *system;
    char padding1[0x12C];
    mc_frontend_layout *mc;
};

extern "C" void set_title_system(
    title_system_layout *self,
    FEMenuSystem *new_system
) __asm__("SetSystem__13TitleFrontEndP12FEMenuSystem");
void set_title_system(
    title_system_layout *self,
    FEMenuSystem *new_system)
{
    self->system = new_system;
    mc_frontend_layout *frontend = self->mc;
    menu_vtable *table = frontend->vtable;
    table->set_system(
        (char *)frontend + table->adjustment,
        new_system
    );
}

// 0x001BE9E8 DrawTop__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"
void GraphicalMenuSystem::DrawTop() {
    if (fedb_draw_overlays) {
        if (active)
            menus[active]->DrawTop();
    }
}

// 0x001BC438 Select__13LegalFrontEndi
struct menu_vtable
{
    char padding[0x20];
    short adjustment;
    short reserved;
    void (*make_active)(
        void *self, int menu, bool play_sound, bool set_previous
    );
};

struct menu_system
{
    char padding[0x8c];
    menu_vtable *vtable;
};

class LegalFrontEnd
{
    char padding0[0x50];
    menu_system *system;
    char padding1[0x100];
    float timer;

public:
    void Select(int entry);
};

void LegalFrontEnd::Select(int entry)
{
    if (timer > 5.0f && system)
    {
        menu_vtable *table = system->vtable;
        table->make_active(
            (char *)system + table->adjustment,
            12, true, true
        );
    }
}

// 0x001BD0D8 OnStart__18ControllerFrontEndi
struct select_slot {
    short adjustment; short reserved;
    void (*function)(void *,int,int,int);
};
struct menu_system_layout {
    char padding[0x8c];
    char *vtable;
};
class ControllerFrontEnd {
    char padding[0x50];
    menu_system_layout *system;
    char padding2[0x120];
    int selected;
    int controller_count;
public:
    void OnStart(int controller);
};
void ControllerFrontEnd::OnStart(int controller) {
    if (selected==-1) return;
    if (controller_count!=-1 && controller!=controller_count-1) return;
    select_slot *slot=(select_slot *)(system->vtable+0x20);
    slot->function(
        (char *)system+slot->adjustment,selected,1,1
    );
}

// 0x001BC1D8 Update__13LegalFrontEndf
struct menu_vtable{char pad[296];short adjust;short reserved;void(*select)(void*,int);};struct Legal{char pad[116];menu_vtable*vtable;char pad2[220];float timer;};extern "C" void front_update(void*,float)__asm__("Update__8FrontEndf");extern "C" void menu_update(void*,float)__asm__("Update__6FEMenuf");__asm__(".equ Update__8FrontEndf,0x00157B30");__asm__(".equ Update__6FEMenuf,0x00156DC8");extern "C" void update(Legal*self,float dt)__asm__("Update__13LegalFrontEndf");void update(Legal*self,float dt){self->timer+=dt;if(self->timer>=10.0f){menu_vtable*t=self->vtable;t->select((char*)self+t->adjust,0);}front_update((char*)self+128,dt);menu_update(self,dt);KELLY_DECOMP_COMPILER_BARRIER();}

// 0x001BE6F8 UpdateInScene__19GraphicalMenuSystem
struct menu_vtable{char pad[88];short adjust;short reserved;void(*update_scene)(void*);};struct Menu{char pad[116];menu_vtable*vtable;void UpdateInScene(){menu_vtable*t=vtable;t->update_scene((char*)this+t->adjust);}};struct System{char pad[116];Menu**menus;char gap[4];int active;};extern "C" void update(System*self)__asm__("UpdateInScene__19GraphicalMenuSystem");void update(System*self){self->menus[self->active]->UpdateInScene();if(self->active!=5&&self->active!=13)self->menus[5]->UpdateInScene();}

// 0x001BD898 Draw__9HelpbarFE
struct TextVtable{char pad[24];short adjust;short z;void(*draw)(void*);};struct Text{char pad[76];TextVtable*vtable;};struct HelpbarLayout{char pad0[236];Text*help_text[7];int has_text[7];char pad1[56];int disabled;};extern "C" void base_draw(void*)__asm__("Draw__8FrontEnd");__asm__(".equ Draw__8FrontEnd,0x00157B10");extern "C" void draw_helpbar(HelpbarLayout*self)__asm__("Draw__9HelpbarFE");void draw_helpbar(HelpbarLayout*self){if(self->disabled)return;base_draw(self);for(int i=0;i<7;i++)if(self->has_text[i]){Text*t=self->help_text[i];TextVtable*v=t->vtable;v->draw((char*)t+v->adjust);}}

// 0x001BEB00 Exit__19GraphicalMenuSystem
struct Dev{char pad[72];int no_audio;};extern Dev*g_options;extern float ps2MovieVolume;extern "C" float master()__asm__("nslGetMasterVolume__Fv");extern "C" float volume(int)__asm__("nslGetVolume__F18_nslSourceTypeEnum");struct Manager{char pad[87660];int tmp_game_mode;void ReleaseFE()__asm__("ReleaseFE__9FEManager");};struct GraphicalMenuSystem{char pad[120];Manager*manager;void Exit()__asm__("Exit__19GraphicalMenuSystem");};struct game{void set_game_mode(int)__asm__("set_game_mode__4game11game_mode_t");};extern game*g_game_ptr;__asm__(".equ g_options,0x0046B180");__asm__(".equ ps2MovieVolume,0x0042E678");__asm__(".equ nslGetMasterVolume__Fv,0x003906A0");__asm__(".equ nslGetVolume__F18_nslSourceTypeEnum,0x00390820");__asm__(".equ g_game_ptr,0x0046AC64");__asm__(".equ set_game_mode__4game11game_mode_t,0x00284C98");__asm__(".equ ReleaseFE__9FEManager,0x00198F10");void GraphicalMenuSystem::Exit(){if(!g_options->no_audio)ps2MovieVolume=master()*volume(4);g_game_ptr->set_game_mode(manager->tmp_game_mode);manager->ReleaseFE();KELLY_DECOMP_COMPILER_BARRIER();}

// 0x001BD138 DrawTop__18ControllerFrontEnd
struct QuadVtable{char pad[64];short adjust;short z;void(*draw)(void*,int,float);};struct Quad{char pad[404];QuadVtable*vtable;};struct EntryVtable{char pad[56];short adjust;short z;void(*draw)(void*);};struct Entry{char pad[96];EntryVtable*vtable;};struct ControllerFrontEnd{char pad0[64];Entry*highlighted;char pad1[268];Quad*quads[9];void DrawTop()__asm__("DrawTop__18ControllerFrontEnd");};void ControllerFrontEnd::DrawTop(){for(int i=0;i<9;i++){Quad*q=quads[i];QuadVtable*v=q->vtable;v->draw((char*)q+v->adjust,0,-1.0f);}EntryVtable*v=highlighted->vtable;v->draw((char*)highlighted+v->adjust);}

// 0x001BD318 SetSlot__18ControllerFrontEnd11device_id_t
struct stringx{char d[8];};struct TextVtable{char p[136];short adj;short z;void(*change)(void*,const stringx&);};struct TextString{char p[96];TextVtable*vtable;};extern const char*fmt_slot;extern const char*fmt_none;extern "C" int sprintf(char*,const char*,...);extern "C" void str_ctor(stringx*,const char*,int)__asm__("__7stringxPCci");class ControllerFrontEnd{public:char p[64];TextString*slotText;char p2[308];int slot;void SetSlot(int)__asm__("SetSlot__18ControllerFrontEnd11device_id_t");};__asm__(".equ fmt_slot,0x003E7198");__asm__(".equ fmt_none,0x003E7190");__asm__(".equ sprintf,0x003D38A8");__asm__(".equ __7stringxPCci,0x0034D438");void ControllerFrontEnd::SetSlot(int s){slot=s;char buf[80];if(~s)sprintf(buf,fmt_slot,s);else sprintf(buf,fmt_none);stringx text;str_ctor(&text,buf,-1);TextString*t=slotText;TextVtable*v=t->vtable;v->change((char*)t+v->adj,text);}

// 0x001BEB88 get_one_button_down__C19GraphicalMenuSystemRi
enum device_id_t{ANY_LOCAL_JOYSTICK=12};class input_mgr{public:float get_control_state(device_id_t,int)const;};extern input_mgr*input_manager;asm(".equ input_manager,0x0046B7B0");asm(".equ get_control_state__C9input_mgr11device_id_ti,0x003441C8");class GraphicalMenuSystem{public:bool get_one_button_down(int&)const;};bool GraphicalMenuSystem::get_one_button_down(int&btn)const{input_mgr*inputmgr=input_manager;btn=-1;for(int i=184;i<=197;i++){if(inputmgr->get_control_state(ANY_LOCAL_JOYSTICK,i)!=0.0f){if(btn!=-1)return false;else btn=i;}}return true;}

// 0x001BC908 Update__13TitleFrontEndf
struct active_vtable{char padding[96];short adjustment;short reserved;void(*update)(void*,float);};struct ActiveMenu{char padding[116];active_vtable*vtable;};struct sys_vtable{char padding[144];short adjustment;short reserved;void(*load_all)(void*);};struct MenuSystem{char padding[140];sys_vtable*vtable;};struct EntityManager{char padding[576];int state;};struct Manager{char padding[12];EntityManager*em;};struct TitleFrontEndLayout{char padding0[80];MenuSystem*system;char padding1[12];ActiveMenu*active;char padding2[28];char frontend_base[188];Manager*manager;char padding3[60];int loading_draw_counter;};extern "C" void update_front(void*,float)__asm__("Update__8FrontEndf");extern "C" void update_menu(TitleFrontEndLayout*,float)__asm__("Update__6FEMenuf");asm(".equ Update__8FrontEndf,0x00157B30");asm(".equ Update__6FEMenuf,0x00156DC8");extern "C" void update_title(TitleFrontEndLayout*self,float dt)__asm__("Update__13TitleFrontEndf");void update_title(TitleFrontEndLayout*self,float dt){if(self->active){active_vtable*v=self->active->vtable;v->update((char*)self->active+v->adjustment,dt);}else{if(self->loading_draw_counter>4){self->manager->em->state=7;sys_vtable*v=self->system->vtable;v->load_all((char*)self->system+v->adjustment);self->loading_draw_counter=-1;}update_front((char*)self+128,dt);update_menu(self,dt);asm volatile("");}}

// 0x001BCCD8 Select__13TitleFrontEndi
#include "KS/SRC/ks/FrontEndManager.h"
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/SoundScript.h"
void nslFrameAdvance(float time_elapsed);
__asm__(".equ nslFrameAdvance__Ff, 0x00390068");

void TitleFrontEnd::Select(int n)
{
	if (active)
	{
		active->Select(
            active->highlighted
                ? active->highlighted->entry_num
                : 0);
	}
	else
	{
		if (frontendmanager.fe_done_loading)
		{
			SoundScriptManager::inst()->playSound(SS_FE_ONX);
			nslFrameAdvance(0.01f);
			MakeActive((FEMenu *)mc);
		}
	}
}

// 0x001BD7E0 SetPQIndices__9HelpbarFE
#include "KS/SRC/ks/GraphicalMenuSystem.h"

extern const char helpbar_arrow_horizontal[];
extern const char helpbar_arrow_vertical[];
extern const char helpbar_arrow_all[];
extern const char helpbar_button_cross[];
extern const char helpbar_button_triangle[];
extern const char helpbar_button_circle[];
extern const char helpbar_button_square[];

__asm__(".equ helpbar_arrow_horizontal, 0x004C3AD0");
__asm__(".equ helpbar_arrow_vertical, 0x004C3AE8");
__asm__(".equ helpbar_arrow_all, 0x004C3B00");
__asm__(".equ helpbar_button_cross, 0x004C3B10");
__asm__(".equ helpbar_button_triangle, 0x004C3B20");
__asm__(".equ helpbar_button_circle, 0x004C3B30");
__asm__(".equ helpbar_button_square, 0x004C3B40");

// Preserve the released cross-call scheduling normalized by the EE compiler shim.
void HelpbarFE::SetPQIndices()
{
	buttons[ARROW_H] = GetPointer(helpbar_arrow_horizontal);
	buttons[ARROW_V] = GetPointer(helpbar_arrow_vertical);
	buttons[ARROW_BOTH] = GetPointer(helpbar_arrow_all);
	buttons[CROSS] = GetPointer(helpbar_button_cross);
	buttons[TRIANGLE] = GetPointer(helpbar_button_triangle);
	buttons[CIRCLE] = GetPointer(helpbar_button_circle);
	buttons[SQUARE] = GetPointer(helpbar_button_square);
}

// 0x001BE630 LoadAll__19GraphicalMenuSystem
#include "KS/SRC/ks/GraphicalMenuSystem.h"
#include "KS/SRC/ks/FrontEndManager.h"

void GraphicalMenuSystem::LoadAll()
{
	if (!LoadedAll)
	{
		manager->em->LoadAll();

		for(int i=0; i<OptionsMenu; i++)
			if(i != Legal && i != TitleMenu && i != BeachMenu)
				menus[i]->Load();

		frontendmanager.fe_done_loading = true;
		LoadedAll = true;
	}
}
