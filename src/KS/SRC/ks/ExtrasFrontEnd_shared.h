#ifndef KELLY_DECOMP_EXTRAS_FRONT_END_SHARED_H
#define KELLY_DECOMP_EXTRAS_FRONT_END_SHARED_H

#include "KS/SRC/ks/GraphicalMenuSystem_shared.h"
#include "KS/SRC/ks/FrontEndManager_shared.h"
#include "KS/SRC/ks/SoundScript_shared.h"

#pragma interface

class BoxText;
class PreformatText;
class TextString;

class CheatFrontEnd : public FEMultiMenu {
};

struct ExtrasSecondaryCursorVTable {
    char padding[0x110];
    short adjustment;
    short reserved;
    void (*set_secondary_cursor)(
        void *self,
        FEMenuEntry *entry,
        bool animate);
};

class ExtrasFrontEnd : public FEMultiMenu {
public:
    enum {
        ExtrasBeachesEntry,
        ExtrasSurfersEntry,
        ExtrasTrailersEntry,
        ExtrasHighScoreEntry,
        ExtrasScrapbookEntry,
        ExtrasCheatsEntry,
        ExtrasCreditsEntry,
        ExtrasWebsitesEntry,
        ExtrasLogbookEntry,
        ExtrasTHDemoEntry,
        ExtrasDemoEntryYes,
        ExtrasDemoEntryNo,
        ExtrasEndEntry
    };

private:
    int cur_index;
    GraphicalMenuSystem *sys;
    FEMenuEntry *entry[ExtrasEndEntry];
    FEMenu *surfers;
    FEMenu *beaches;
    FEMenu *trailers;
    TextString *extras;
    BoxText *prompt;
    BoxText *websites;
    CheatFrontEnd *cheat_menu;
    PanelQuad *videos[ExtrasEndEntry];
    PanelQuad *website_box[9];
    PanelQuad *arrows[2][2];
    bool saveCareerPrompt;
    int arrow_counter;
    int arrow_num;

public:
    virtual void Select(int entry_index);

private:
    void SetBuiltSecondaryCursor(
        FEMenuEntry *selected,
        bool animate = true)
    {
        ExtrasSecondaryCursorVTable *table =
            *(ExtrasSecondaryCursorVTable **)((char *)this + 0x74);
        table->set_secondary_cursor(
            (char *)this + table->adjustment,
            selected,
            animate);
    }

    void UpdateHelpbar();
    void PlayMovie(int selection);
};

class CreditsFrontEnd : public FEMultiMenu {
    PreformatText *credits;
    GraphicalMenuSystem *sys;
    float first_line_y;
    float x_all;
    int up_pressed;
    int down_pressed;

public:
    void OnActivate();
};

extern char *g_ksps_path;
extern const char *g_thps4_path;

void nslReleaseAllSounds();
void nslFrameAdvance(float time_inc);
void nslShutdown();

extern "C" int scePcStart(int control, int counter0, int counter1);
extern "C" int sceCdStop();
extern "C" int sceCdStStop();
extern "C" int sceCdSync(int mode);
extern "C" int sceCdDiskReady(int mode);
extern "C" void sceSifExitCmd();
extern "C" int LoadExecPS2(
    const char *path,
    int argument_count,
    char **arguments);

// Compensate for the isolated assembler's missing %hi carry on negative lows.
__asm__(".equ g_ksps_path, 0x0042EB40");
__asm__(".equ g_thps4_path, 0x0042E4E8");
__asm__(".equ PlayMovie__14ExtrasFrontEndi, 0x001BAC18");
__asm__(".equ UpdateHelpbar__14ExtrasFrontEnd, 0x001BA428");
__asm__(".equ nslReleaseAllSounds__Fv, 0x0038D3D0");
__asm__(".equ nslShutdown__Fv, 0x0038FFE8");
__asm__(".equ nslFrameAdvance__Ff, 0x00390068");
__asm__(".equ sceCdSync, 0x003BD1C0");
__asm__(".equ sceCdDiskReady, 0x003BD720");
__asm__(".equ sceCdStop, 0x003BDBC0");
__asm__(".equ sceCdStStop, 0x003BDE78");
__asm__(".equ scePcStart, 0x003C5DD0");
__asm__(".equ sceSifExitCmd, 0x003DD400");
__asm__(".equ LoadExecPS2, 0x003E0088");

#endif
