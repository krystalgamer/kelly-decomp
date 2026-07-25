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

#if defined(KELLY_DECOMP_FUNCTION_001C3098)
// 0x001C3098 PlaySurferTrick__15FEEntityManagerP11SurferTrick
struct SurferTrick{int trick_id;int anim_id;int board_anim_id;};struct SurferData{char pad[544];int goofy;char rest[104];};extern SurferData SurferDataArray[];extern int right_flip_board,left_flip_board;__asm__(".equ SurferDataArray,0x004254E0");__asm__(".equ right_flip_board,0x004385A0");__asm__(".equ left_flip_board,0x004385F8");struct FEEntityManager{char pad0[24];int current_surfer_index;char pad1[544];int cur_trick;void SurferPlay(int,float,int,int,bool);void PlaySurferTrick(SurferTrick*)__asm__("PlaySurferTrick__15FEEntityManagerP11SurferTrick");};__asm__(".equ SurferPlay__15FEEntityManagerifiib,0x001C3118");void FEEntityManager::PlaySurferTrick(SurferTrick*t){cur_trick=t->trick_id;int animid=t->anim_id;int board=t->board_anim_id;if(SurferDataArray[current_surfer_index].goofy){if(cur_trick==27)board=right_flip_board;else if(cur_trick==26)board=left_flip_board;}SurferPlay(5,0.0f,animid,board,false);KELLY_DECOMP_COMPILER_BARRIER();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C23C8)
// 0x001C23C8 UnloadCurrentBoard__15FEEntityManager
struct Link{char pad[104];void*ifc;};struct entity{char pad[104];Link*link_ifc;void kill_anim(int);};struct entity_maker{void destroy_entity(entity*);};extern entity_maker*g_entity_maker;extern "C" void remove_child(void*,entity*)__asm__("remove_child__14link_interfaceP4bone");extern "C" void unload_mesh(entity*)__asm__("BOARD_UnloadMesh__FP6entity");__asm__(".equ g_entity_maker,0x004318C8");__asm__(".equ remove_child__14link_interfaceP4bone,0x00122890");__asm__(".equ BOARD_UnloadMesh__FP6entity,0x0025FA40");__asm__(".equ kill_anim__6entityi,0x00134918");__asm__(".equ destroy_entity__12entity_makerP6entity,0x0030B040");struct FEEntityManager{char pad[404];entity*board;entity*my_board;char pad2[4];entity*my_rotate_object;void UnloadCurrentBoard()__asm__("UnloadCurrentBoard__15FEEntityManager");};void FEEntityManager::UnloadCurrentBoard(){if(board){if(my_rotate_object&&my_board){remove_child(my_rotate_object->link_ifc,board);remove_child(my_board->link_ifc,my_rotate_object);}unload_mesh(board);board->kill_anim(0);g_entity_maker->destroy_entity(board);}board=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C9210)
// 0x001C9210 SetConglomForceHiRes__15FEEntityManagerP6entityb
struct entity;struct link_interface{char pad[12];entity*first_child;entity*next_sibling;};struct entity{char pad0[104];link_interface*link;char pad1[212];int force_hi_res;};struct FEEntityManager;extern "C" void recurse(FEEntityManager*,entity*,bool)__asm__("recurse_alias");__asm__(".equ recurse_alias,0x001C9210");struct FEEntityManager{void SetConglomForceHiRes(entity*,bool)__asm__("SetConglomForceHiRes__15FEEntityManagerP6entityb");};void FEEntityManager::SetConglomForceHiRes(entity*c,bool f){if(!c)return;if(c->link){entity*c1=c->link->first_child;while(c1){recurse(this,c1,f);c1=c1->link->next_sibling;}c->force_hi_res=f;}}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001C4C88)
// 0x001C4C88 JumpTo__15FEEntityManageri
struct AnimTree{char padding[96];unsigned flags;};class FEEntityManager{char padding0[16];int camera_roll_stop;char padding1[424];int cam_pos_goal;char padding2[8];float stops[7];AnimTree*cam_anim_tree;int cam_reverse;public:void JumpTo(int);void CameraAnim(int,float);};asm(".equ CameraAnim__15FEEntityManagerif,0x001C4E28");void FEEntityManager::JumpTo(int pos){if(cam_pos_goal==pos&&cam_anim_tree&&(cam_anim_tree->flags&0x40))return;if(pos==1||pos==3||pos==2)camera_roll_stop=1;if(cam_reverse)CameraAnim(pos,stops[pos]+.1f);else CameraAnim(pos,stops[pos]-.1f);}
#endif
