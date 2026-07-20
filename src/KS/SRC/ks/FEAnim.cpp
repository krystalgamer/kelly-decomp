// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00155458)
// 0x00155458 FindObject__13PanelAnimFilePc
class PanelAnim { public: PanelAnim *FindObject(char *name); };
__asm__(".equ FindObject__9PanelAnimPc, 0x00155108");
class PanelAnimFile { PanelAnim *obs; public: PanelAnim *FindObject(char *name); };
PanelAnim *PanelAnimFile::FindObject(char *name) { if (!obs) return 0; PanelAnim *result = obs->FindObject(name); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

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
