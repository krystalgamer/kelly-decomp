// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001095C0)
// 0x001095C0 copy__20ai_locomotion_directP20ai_locomotion_direct
class ai_locomotion { public: void copy(ai_locomotion* other); };
__asm__(".equ copy__13ai_locomotionP13ai_locomotion, 0x00106F18");
class ai_locomotion_direct : public ai_locomotion { public: void copy(ai_locomotion_direct* other); };
void ai_locomotion_direct::copy(ai_locomotion_direct* other) {
    ai_locomotion::copy((ai_locomotion*)other);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109D88)
// 0x00109D88 handle_chunk__20ai_locomotion_directR10chunk_fileR7stringx
class chunk_file;
class stringx;
class ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
__asm__(".equ handle_chunk__13ai_locomotionR10chunk_fileR7stringx, 0x00108158");
class ai_locomotion_direct : public ai_locomotion { public: void handle_chunk(chunk_file& file, stringx& label); };
void ai_locomotion_direct::handle_chunk(chunk_file& file, stringx& label) {
    ai_locomotion::handle_chunk(file, label);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109530)
// 0x00109530 _$_20ai_locomotion_direct
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_13ai_locomotion");
extern const char derived_vtable[];
__asm__(".equ _$_13ai_locomotion, 0x00106E28");
__asm__(".equ derived_vtable, 0x004B82B8");
struct LocomotionLayout { char padding[0x144]; const void *vtable; };
extern "C" void DirectDtor(void *self, int deleting) __asm__("_$_20ai_locomotion_direct");
void DirectDtor(void *self, int deleting) { ((LocomotionLayout *)self)->vtable = derived_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00109CC8)
// 0x00109CC8 going_out_of_service__20ai_locomotion_direct
class entity {
};

extern "C" void KillAnim(entity *self, int slot)
    __asm__("kill_anim__6entityi");

class ai_locomotion {
public:
    entity *get_my_entity() const;
    void going_out_of_service();
};

__asm__(".equ get_my_entity__C13ai_locomotion, 0x00106EA0");
__asm__(".equ going_out_of_service__13ai_locomotion, 0x00109278");
__asm__(".equ kill_anim__6entityi, 0x00134918");

class ai_locomotion_direct : public ai_locomotion {
public:
    void going_out_of_service();
};

void ai_locomotion_direct::going_out_of_service()
{
    register entity *target __asm__("$4") = get_my_entity();
    KELLY_DECOMP_COMPILER_BARRIER();
    register int slot __asm__("$5") = 1;
    KillAnim(target, slot);
    ai_locomotion::going_out_of_service();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001094F0)
// 0x001094F0 __20ai_locomotion_directP12ai_interface
class ai_interface;
asm(".equ __13ai_locomotionP12ai_interface, 0x00106C90");
asm(".equ _vt$20ai_locomotion_direct, 0x004C82B8");
class ai_locomotion {
    char padding_to_type[0xD0];
protected:
    int type;
private:
    char padding_to_vtable[0x70];
public:
    ai_locomotion(ai_interface *owner);
    virtual ~ai_locomotion();
};
class ai_locomotion_direct : public ai_locomotion {
public:
    ai_locomotion_direct(ai_interface *owner);
    virtual ~ai_locomotion_direct();
};
ai_locomotion_direct::ai_locomotion_direct(ai_interface *owner)
    : ai_locomotion(owner)
{
    type = 1;
}
#endif
