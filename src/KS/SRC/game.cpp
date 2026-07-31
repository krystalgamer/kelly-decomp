// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002791D0) || \
    defined(KELLY_DECOMP_FUNCTION_00279DF0) || \
    defined(KELLY_DECOMP_FUNCTION_00279F30) || \
    defined(KELLY_DECOMP_FUNCTION_00284628) || \
    defined(KELLY_DECOMP_FUNCTION_00284E90) || \
    defined(KELLY_DECOMP_FUNCTION_00284E98)
#include "KS/SRC/game.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00283910)
// 0x00283910 retry_mode__4gameb
#include "KS/SRC/game_retry_shared.h"

void game::retry_mode(const bool from_map)
{
    for (int player = 0; player < 2; player++)
    {
        if (the_world->get_ks_controller(player))
            the_world
                ->get_ks_controller(player)
                ->get_my_scoreManager()
                .Reset();
    }

    if (play_mode.timeAttack)
        play_mode.timeAttack->Reset();
    if (play_mode.meterAttack)
        play_mode.meterAttack->Reset();
    if (play_mode.headToHead)
        play_mode.headToHead->Reset();

    retry_level(from_map);
    frontend_igo->OnModeReset();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_002778E8)
// 0x002778E8 clear_zbuffer__Fv
void clear_zbuffer() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002854C8)
#include "KS/SRC/game.h"

__asm__(".equ GetPlayerShare__C8PushModei, 0x00285B70");

// 0x002854C8 get_player_share__C4gamei
float game::get_player_share(int player) const
{
    if (!play_mode.push) {
        float share = 0.5f;
        if (!play_mode.headToHead)
            share = 1.0f;
        return share;
    }
    return play_mode.push->GetPlayerShare(player);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00277E20)
// 0x00277E20 nslNoPrint__FPCc
void nslNoPrint(const char* text) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00277E28)
// 0x00277E28 nslNoErrors__FPCc
void nslNoErrors(const char* text) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002791D0)
// 0x002791D0 do_profiler_stuff__4game
void game::do_profiler_stuff() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00279DF0)
// 0x00279DF0 render_shadows__4game
void game::render_shadows() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00279F30)
// 0x00279F30 render_black_screen__4game
void game::render_black_screen() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027A830)
// 0x0027A830 set_beach__4gamei
class game { char padding[0x224]; int levelid; int beachid; public: void set_beach(int beach); };
void game::set_beach(int beach) { levelid = 31; beachid = beach; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027D968)
// 0x0027D968 is_paused__C4game
struct game_flags {
    unsigned long long padding : 44;
    unsigned long long game_paused : 1;
};

class game {
    char padding[0xC8];
    game_flags flag;

public:
    bool is_paused() const;
};

bool game::is_paused() const {
    return flag.game_paused;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284628)
// 0x00284628 clear_screen__4game
void game::clear_screen() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284B80)
// 0x00284B80 SetBoardIdx__4gameii
class game { char padding[0x250]; int boardIdx[2]; public: void SetBoardIdx(int hero, int index); };
void game::SetBoardIdx(int hero, int index) { boardIdx[hero] = index; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284E90)
// 0x00284E90 draw_debug_labels__4game
void game::draw_debug_labels() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284E98)
// 0x00284E98 set_num_ai_players__4gamei
void game::set_num_ai_players(int count) {
    num_ai_players = count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284EE0)
// 0x00284EE0 LoadingStateReset__4game
class game { char padding[0x290]; int current_loading_state; char padding_to_progress[0x4]; float loading_progress; float last_loading_progress; public: void LoadingStateReset(); };
void game::LoadingStateReset() { current_loading_state = 0; loading_progress = 0; last_loading_progress = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027A808)
// 0x0027A808 set_level__4gamei
struct CareerData { int beach; char padding[0xd8]; };
extern CareerData CareerDataArray[];
__asm__(".equ CareerDataArray, 0x0042ECA0");
class game { char padding[0x224]; int levelid; int beachid; public: void set_level(int level); };
void game::set_level(int level) { levelid = level; beachid = CareerDataArray[levelid].beach; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002791D8)
// 0x002791D8 render_fe__4game
void FEDraw();
__asm__(".equ FEDraw__Fv, 0x00199130");
class game { public: void render_fe(); void render_mem_free_screen(); };
__asm__(".equ render_mem_free_screen__4game, 0x00278FF0");
void game::render_fe() { FEDraw(); render_mem_free_screen(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027AA70)
// 0x0027AA70 set_movie__4gameG7stringx
class stringx {
    char *chars;
    void *my_buf;

public:
    ~stringx();
    stringx &operator=(const stringx &other);
};

__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ _$_7stringx, 0x0034D6E0");

extern "C" void StringAssign(stringx *self, const stringx &other)
    __asm__("__as__7stringxRC7stringx");
extern "C" void StringDtor(stringx *self, int deleting)
    __asm__("_$_7stringx");

extern "C" void SetMovie(void *self, stringx *name)
    __asm__("set_movie__4gameG7stringx");

void SetMovie(void *self, stringx *name)
{
    StringAssign((stringx *)((char *)self + 0x22C), *name);
    StringDtor(name, 2);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027D9C0)
// 0x0027D9C0 enable_marky_cam__4gamebT1f
#include "KS/SRC/game_marky_cam_shared.h"

void game::enable_marky_cam(
    bool enable,
    bool sync_camera,
    float priority)
{
    FEDone();
    if (!FEDone() ||
        (enable &&
         priority >= the_world->get_marky_cam_ptr()->get_priority()) ||
        (!enable &&
         priority == the_world->get_marky_cam_ptr()->get_priority()))
    {
        if (sync_camera)
            the_world->get_marky_cam_ptr()->sync(*current_view_camera);
        the_world->enable_marky_cam(enable, priority);
        the_world
            ->get_marky_cam_ptr()
            ->camera_set_collide_with_world(false);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002778F0)
// 0x002778F0 __9game_info
class stringx { char storage[8]; public: stringx(); };
class game_info {
    int difficulty;
    stringx hero_name_0;
    stringx hero_name_1;
public:
    game_info();
    void reset();
};
asm(".equ __7stringx, 0x0034D3E0");
asm(".equ reset__9game_info, 0x00277D58");
game_info::game_info()
{
    reset();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285570)
#include "KS/SRC/game.h"
// 0x00285570 get_beach_location_name__4game
__asm__(".equ get_first_beach__4game, 0x00285518");
__asm__(".equ __7stringxPCci, 0x0034D438");
stringx game::get_beach_location_name()
{
    return BeachDataArray[get_first_beach()].name;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285640)
#include "KS/SRC/game.h"
// 0x00285640 get_first_surfer_index__4game
int game::get_first_surfer_index()
{
    int surfer_index = -1;
    int order = 1000;
    for (int i = 0; i < 14; i++)
    {
        if (SurferDataArray[i].sort_order >= 0 &&
            SurferDataArray[i].sort_order < order)
        {
            surfer_index = i;
            order = SurferDataArray[i].sort_order;
        }
    }
    return surfer_index;
}
#endif
#if defined(KELLY_DECOMP_FUNCTION_0027A490)
#include "KS/SRC/game.h"

class entity;

enum EventType {
    SS_CAMERA_SNAPSHOT = 19
};

class SoundScriptManager {
public:
    int playEvent(
        EventType type,
        entity *source = 0,
        float fade_in_time = 0.0f
    );
};

extern SoundScriptManager *sound_script_manager;

__asm__(".equ sound_script_manager, 0x0046B4A0");
__asm__(
    ".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380"
);

// 0x0027A490 take_snapshot__4gameP10nglTexture
void game::take_snapshot(nglTexture *destination)
{
    destSnapshot = destination;

    if (snapshotState == 0) {
        sound_script_manager->playEvent(SS_CAMERA_SNAPSHOT);
        snapshotState = 1;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285518)
// 0x00285518 get_first_beach__4game
struct BeachData {
    char padding0[0x160];
    int map_location;
    char padding1[0xb0];
};
extern BeachData BeachDataArray[];
extern void *g_game_ptr;
__asm__(".equ BeachDataArray, 0x0043C198");
__asm__(".equ g_game_ptr, 0x0046AC64");
struct game_layout { char padding[0x228]; int beach_id; };
class game {
public:
    int get_first_beach();
};
int game::get_first_beach() {
    game_layout *current=(game_layout *)g_game_ptr;
    int location=BeachDataArray[current->beach_id].map_location;
    for (int i=0;i<25;i++) {
        if (BeachDataArray[i].map_location==location)
            return i;
    }
    return -1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002855C0)
// 0x002855C0 get_beach_board_name__4gamei
struct stringx{char data[8];stringx(const char*,int=-1);};struct BeachData{char name[32];char pad0[320];int map_location;char pad1[176];};extern BeachData BeachDataArray[];extern const char empty_name[];__asm__(".equ BeachDataArray,0x0043C198");__asm__(".equ empty_name,0x004E5410");__asm__(".equ __7stringxPCci,0x0034D438");struct game{stringx get_beach_board_name(int);};stringx game::get_beach_board_name(int location){for(int i=0;i<25;i++){if(BeachDataArray[i].map_location==location)return BeachDataArray[i].name;}return stringx(empty_name);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00283468)
// 0x00283468 set_player_camera__4gameiP6camera
struct camera_vtable{char pad[744];short game_adj;short game_pad;bool(*is_game)(void*);char pad2[832];short init_adj;short init_pad;void(*init)(void*);};struct camera{char pad[8];camera_vtable*vtable;char pad2[516];int valid;};struct game{bool user_cam;char pad[132];camera*player_cam[4];};extern float PROJ_ZOOM;__asm__(".equ PROJ_ZOOM,0x0043286C");extern "C" void set_camera(game*self,int n,camera*cam)__asm__("set_player_camera__4gameiP6camera");void set_camera(game*self,int n,camera*cam){if(self->user_cam)return;self->player_cam[n]=cam;bool isgame;{register camera_vtable*t __asm__("$3")=cam->vtable;register bool(*fn)(void*) __asm__("$2")=t->is_game;isgame=fn((char*)cam+t->game_adj);}if(isgame){cam->valid=0;camera_vtable*t=cam->vtable;short adj=t->init_adj;register void(*fn)(void*) __asm__("$3")=t->init;fn((char*)cam+adj);}PROJ_ZOOM=0.8f;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284B90)
// 0x00284B90 SetUsingPersonalitySuit__4gameib
struct stringx{char data[8];stringx&operator=(const char*);};struct SurferData{char name[32];char name_ps[32];char pad[588];};extern SurferData SurferDataArray[];__asm__(".equ SurferDataArray,0x0042564C");__asm__(".equ __as__7stringxPCc,0x0034E118");struct game{char pad0[576];stringx heroname[2];char pad1[8];int surferIdx[2];bool personality[2];void SetUsingPersonalitySuit(int,bool)__asm__("SetUsingPersonalitySuit__4gameib");};void game::SetUsingPersonalitySuit(int hero,bool val){personality[hero]=val;if(personality[hero]){heroname[hero]=SurferDataArray[surferIdx[hero]].name_ps;asm volatile("");}else{heroname[hero]=SurferDataArray[surferIdx[hero]].name;asm volatile("");}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285690)
// 0x00285690 get_next_surfer_index__4gamei
struct SurferData{char pad[648];int sort_order;};extern SurferData SurferDataArray[];__asm__(".equ SurferDataArray,0x004254E0");class game{public:int get_next_surfer_index(int current_index)__asm__("get_next_surfer_index__4gamei");};int game::get_next_surfer_index(int current_index){int nextSurferIndex=-1;int nextSurferSortOrder=100;const int currSurferOrder=SurferDataArray[current_index].sort_order;for(int i=0;i<14;i++){if(SurferDataArray[i].sort_order<0||i==current_index)continue;int sort=SurferDataArray[i].sort_order;int wraps=sort<currSurferOrder;int adjSortOrder=sort+14;int bestWraps=nextSurferSortOrder<currSurferOrder;int nextAdjSortOrder=nextSurferSortOrder+14;if(!wraps)adjSortOrder=sort;if(!bestWraps)nextAdjSortOrder=nextSurferSortOrder;if((nextAdjSortOrder-currSurferOrder)>(adjSortOrder-currSurferOrder)){nextSurferSortOrder=SurferDataArray[i].sort_order;nextSurferIndex=i;}}return nextSurferIndex;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285720)
// 0x00285720 get_prev_surfer_index__4gamei
struct SurferData{char pad[648];int sort_order;};extern SurferData SurferDataArray[];__asm__(".equ SurferDataArray,0x004254E0");class game{public:int get_prev_surfer_index(int current_index)__asm__("get_prev_surfer_index__4gamei");};int game::get_prev_surfer_index(int current_index){int prevSurferIndex=-1;int prevSurferSortOrder=-100;const int currSurferOrder=SurferDataArray[current_index].sort_order;for(int i=0;i<14;i++){if(SurferDataArray[i].sort_order<0||i==current_index)continue;int sort=SurferDataArray[i].sort_order;int wraps=sort>currSurferOrder;int adjSortOrder=sort-14;int bestWraps=prevSurferSortOrder>currSurferOrder;int prevAdjSortOrder=prevSurferSortOrder-14;if(!wraps)adjSortOrder=sort;if(!bestWraps)prevAdjSortOrder=prevSurferSortOrder;if((currSurferOrder-prevAdjSortOrder)>(currSurferOrder-adjSortOrder)){prevSurferSortOrder=SurferDataArray[i].sort_order;prevSurferIndex=i;}}return prevSurferIndex;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00284568)
// 0x00284568 frame_advance_game_overlays__4gamef
extern int g_screenshot;extern const char*g_screenshot_filename;extern "C" bool mem_malloc_locked() __asm__("mem_malloc_locked__Fv");extern "C" void mem_lock_malloc(bool) __asm__("mem_lock_malloc__Fb");extern "C" void nglScreenShot(const char*) __asm__("nglScreenShot__FPCc");extern "C" void IGOUpdate(float) __asm__("IGOUpdate__Ff");asm(".equ g_screenshot,0x0043187C");asm(".equ g_screenshot_filename,0x00431880");asm(".equ mem_malloc_locked__Fv,0x002AC4B8");asm(".equ mem_lock_malloc__Fb,0x002AC438");asm(".equ nglScreenShot__FPCc,0x003A0F98");asm(".equ IGOUpdate__Ff,0x001991A0");class game{char p[200];unsigned long long flags;public:void frame_advance_game_overlays(float) __asm__("frame_advance_game_overlays__4gamef");};void game::frame_advance_game_overlays(float time_inc){if(g_screenshot){bool locked=mem_malloc_locked();mem_lock_malloc(false);nglScreenShot(g_screenshot_filename);mem_lock_malloc(locked);g_screenshot=false;g_screenshot_filename=0;}if(((unsigned int)(flags>>40))&1){IGOUpdate(time_inc);int dead;asm("" : "=r"(dead));}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002857B0)
// 0x002857B0 set_player_handicap__4gameii
struct GameGlobal{char p[600];int surfer_idx[4];};extern GameGlobal*g_game_ptr;class GlobalDataClass{public:int getMaxHandicap(int);};extern GlobalDataClass globalCareerData;asm(".equ g_game_ptr,0x0046AC64");asm(".equ globalCareerData,0x004349B8");asm(".equ getMaxHandicap__15GlobalDataClassi,0x002EFCC8");class game{char p[72];int handicap[4];public:void set_player_handicap(int,int) __asm__("set_player_handicap__4gameii");};void game::set_player_handicap(int hero,int value){int max=globalCareerData.getMaxHandicap(g_game_ptr->surfer_idx[hero]);if(value>max)handicap[hero]=globalCareerData.getMaxHandicap(g_game_ptr->surfer_idx[hero]);else handicap[hero]=value;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0027D338)
// 0x0027D338 get_one_button_down__FRi
enum device_id_t{ANY_LOCAL_JOYSTICK=12};class input_mgr{public:float get_control_state(device_id_t,int)const;};extern input_mgr*input_manager;asm(".equ input_manager,0x0046B7B0");asm(".equ get_control_state__C9input_mgr11device_id_ti,0x003441C8");bool get_one_button_down(int&btn){input_mgr*inputmgr=input_manager;btn=-1;for(int i=184;i<=197;i++){if(inputmgr->get_control_state(ANY_LOCAL_JOYSTICK,i)!=0.0f){if(btn!=-1)return false;else btn=i;}}return true;}
#endif
