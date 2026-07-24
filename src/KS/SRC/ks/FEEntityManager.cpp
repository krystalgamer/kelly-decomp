// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001C4C70)
// 0x001C4C70 ExitState__15FEEntityManager
class FEEntityManager { char padding[0x240]; int cur_state; int last_state; public: void ExitState(); };
void FEEntityManager::ExitState() { last_state = cur_state; cur_state = 6; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C9140)
// 0x001C9140 LoadSurferAnims__15FEEntityManageri
class FEEntityManager { char padding[0x4]; bool mm_anims_loaded; public: void LoadSurferAnims(int surfer); };
void FEEntityManager::LoadSurferAnims(int surfer) { if (mm_anims_loaded) return; mm_anims_loaded = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C3D68)
// 0x001C3D68 ToTrickBook__15FEEntityManager
struct graphical_system {
    char padding[0xd4]; int multiplayer; int multi_1;
};
struct manager_layout { char padding[8]; graphical_system *gms; };
class FEEntityManager {
    char padding[0x34]; manager_layout *manager;
    char padding2[0x208]; int cur_state;
    char padding3[4]; int op_ext;
public:
    void LoadAuxStash();
    void LoadBoard(int hero,int board);
    void LoadTricks();
    void ToTrickBook();
};
__asm__(".equ LoadAuxStash__15FEEntityManager, 0x001C5388");
__asm__(".equ LoadBoard__15FEEntityManagerii, 0x001C6358");
__asm__(".equ LoadTricks__15FEEntityManager, 0x001C2870");
void FEEntityManager::ToTrickBook() {
    LoadAuxStash();
    int hero=0;
    if (manager->gms->multiplayer && !manager->gms->multi_1)
        hero=1;
    LoadBoard(hero,0);
    op_ext=false;
    cur_state=3;
    LoadTricks();
    __asm__ __volatile__("" : : : "memory");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C94A0)
// 0x001C94A0 FEDB_ToggleDraw__15FEEntityManageri
struct entity_vtable{char pad[352];short adjust;short reserved;void(*set_visible_fn)(void*,bool);};struct entity{char pad[8];entity_vtable*vtable;void set_visible(bool v){entity_vtable*t=vtable;t->set_visible_fn((char*)this+t->adjust,v);}};struct Manager{entity*surfer_ent;char pad[400];entity*board;};extern "C" void print(const char*,...)__asm__("nglPrintf__FPCce");extern const char message[];__asm__(".equ nglPrintf__FPCce,0x003AC050");__asm__(".equ message,0x004C4058");extern "C" void toggle(Manager*self,int option)__asm__("FEDB_ToggleDraw__15FEEntityManageri");void toggle(Manager*self,int option){switch(option){case 0:self->surfer_ent->set_visible(option);break;case 1:self->board->set_visible(option);break;case 2:break;default:print(message);KELLY_DECOMP_COMPILER_BARRIER();break;}}
#endif
