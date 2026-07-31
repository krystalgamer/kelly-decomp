// AI locomotion definitions extracted by generated one-function shims.

// 0x00112DF0 process_movement__13ai_locomotionf
#include "KS/SRC/ai_locomotion.h"
bool ai_locomotion::process_movement(float time) {
    return true;
}

// 0x00112DA8 __tf13ai_locomotion
extern "C" void __rtti_user(void *info, const char *name);
asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int locomotion_typeinfo[];
extern const char locomotion_type_name[];
asm(".equ locomotion_typeinfo, 0x00511F98");
asm(".equ locomotion_type_name, 0x004C87F8");
extern "C" void *LocomotionRtti() __asm__("__tf13ai_locomotion");
void *LocomotionRtti(){if(locomotion_typeinfo[0]==0)__rtti_user(locomotion_typeinfo,locomotion_type_name);return locomotion_typeinfo;}
