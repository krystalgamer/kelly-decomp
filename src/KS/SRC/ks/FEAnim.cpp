// Matching decompilation blocks selected by generated build shims.


// 0x00155458 FindObject__13PanelAnimFilePc
#include "KS/SRC/ks/FEAnim.h"

__asm__(".equ FindObject__9PanelAnimPc, 0x00155108");
PanelAnim *PanelAnimFile::FindObject(char *name) { PanelAnim *result = 0; if (obs) result = obs->FindObject(name); return result; }

#if defined(KELLY_DECOMP_FUNCTION_001556D8)
// 0x001556D8 Find__16PanelAnimManagerR13PanelAnimFile
class PanelAnimFile;

struct PanelAnimEvent {
    char padding0[0x0C];
    PanelAnimEvent *next;
    char padding1[0x54];
    PanelAnimFile *animation;
};

class PanelAnimManager {
    PanelAnimEvent eventlist;

public:
    PanelAnimEvent *Find(PanelAnimFile &animation);
};

PanelAnimEvent *PanelAnimManager::Find(PanelAnimFile &animation)
{
    PanelAnimEvent *current_event = eventlist.next;
    while (current_event) {
        if (current_event->animation == &animation)
            return current_event;
        current_event = current_event->next;
        __asm__ volatile("nop");
    }
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00155108)
// 0x00155108 FindObject__9PanelAnimPc
extern "C" int strcmp(const char *left, const char *right);
__asm__(".equ strcmp, 0x003D3E88");

class PanelAnim {
    char *name;
    char padding[0x68];
    PanelAnim *next;

public:
    PanelAnim *FindObject(char *object_name);
};

PanelAnim *PanelAnim::FindObject(char *object_name)
{
    if (!strcmp(name, object_name))
        return this;
    else if (next != 0)
        return next->FindObject(object_name);
    else
        return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00155370)
// 0x00155370 ReadHeader__13PanelAnimFilePUcRi
extern "C" unsigned char ReadChar(unsigned char*,int&)__asm__("ReadChar__FPUcRi");__asm__(".equ ReadChar__FPUcRi,0x001533F8");extern "C" bool read_header(unsigned char*buffer,int&index)__asm__("ReadHeader__13PanelAnimFilePUcRi");bool read_header(unsigned char*buffer,int&index){if(ReadChar(buffer,index)==65&&ReadChar(buffer,index)==110&&ReadChar(buffer,index)==109&&ReadChar(buffer,index)==0)return true;else return false;}
#endif

// Source implementation boundary.
// 0x001DA3A0 Kind__C17PanelAnimInstance
#include "KS/SRC/ks/FEAnim.h"

PanelAnimKind PanelAnimInstance::Kind() const {
    return AnimInstance;
}

// 0x001DA298 __tf9PanelAnim
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512060"); asm(".equ type_name, 0x004DD920");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelAnim");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DA3A8 __tf13PanelAnimFile
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512068"); asm(".equ type_name, 0x004DD948");
extern "C" void *GetTypeInfo() __asm__("__tf13PanelAnimFile");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DA3F0 __tf16PanelAnimManager
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512070"); asm(".equ type_name, 0x004DD958");
extern "C" void *GetTypeInfo() __asm__("__tf16PanelAnimManager");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
