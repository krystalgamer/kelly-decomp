// Matching decompilation blocks selected by generated build shims.


// 0x0031BBB8 __17CurrentSoundEvent
#include "KS/SRC/ks/SoundScript.h"

CurrentSoundEvent::CurrentSoundEvent() { emitter = 0; event = SS_LAST; sound = 0; }

#if defined(KELLY_DECOMP_FUNCTION_0031C360)
// 0x0031C360 startEvent__18SoundScriptManager9EventTypeP6entityf
#include "KS/SRC/ks/SoundScript.h"

int SoundScriptManager::startEvent(
    EventType type,
    entity *source,
    float fade_in_time)
{
    return playEvent(type, source, fade_in_time);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BB98)
// 0x0031BB98 clear__19ScheduledSoundEvent
#include "KS/SRC/ks/SoundScript.h"

void ScheduledSoundEvent::clear() { snd = 0; myEntity = 0; time = -1.0f; event = SS_LAST; }
#endif

// 0x0031BF28 playSound__18SoundScriptManager9EventTypeP6entity
#include "KS/SRC/ks/SoundScript.h"

__asm__(".equ playEvent__12EventMapTypeP6entity, 0x0031BD38");

unsigned int SoundScriptManager::playSound(
    EventType type,
    entity *source)
{
    return eventMap[type].playEvent(source);
}

#if defined(KELLY_DECOMP_FUNCTION_0031BFB0)
// 0x0031BFB0 getSoundId__18SoundScriptManageri
#include "KS/SRC/ks/SoundScript.h"

unsigned int SoundScriptManager::getSoundId(int event) {
    if (playingEvents[event].event == 105) {
        goto invalid;
    }
    return playingEvents[event].sound;

invalid:
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031C628)
// 0x0031C628 createMapping__18SoundScriptManager9EventTypeUi
#include "KS/SRC/ks/SoundScript.h"

__asm__(".equ addSoundMapping__12EventMapTypeUi, 0x0031BDF8");
bool add_sound_mapping(EventMapType *map, unsigned int source)
    __asm__("addSoundMapping__12EventMapTypeUi");

bool SoundScriptManager::createMapping(
    EventType type,
    unsigned int source
) {
    eventMap[type].type = type;
    bool (*add)(EventMapType *, unsigned int) = add_sound_mapping;
    return add(&eventMap[type], source);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BBD0)
// 0x0031BBD0 clear__17CurrentSoundEvent
#include "KS/SRC/ks/SoundScript.h"

extern "C" int sound_status(unsigned int)
    __asm__("nslGetSoundStatus__FUi");
extern "C" void stop_sound(unsigned int)
    __asm__("nslStopSound__FUi");
extern "C" void release_emitter(unsigned int)
    __asm__("nslReleaseEmitter__FUi");
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");
__asm__(".equ nslReleaseEmitter__FUi, 0x0038F2C8");
void CurrentSoundEvent::clear() {
    if (sound_status(sound)!=0) stop_sound(sound);
    if (emitter!=0) release_emitter(emitter);
    emitter=0;
    sound=0;
    event=SS_LAST;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BEC0)
// 0x0031BEC0 clearEvents__18SoundScriptManager
#include "KS/SRC/ks/SoundScript.h"

__asm__(".equ clear__19ScheduledSoundEvent,0x0031BB98");
__asm__(".equ clear__17CurrentSoundEvent,0x0031BBD0");
void SoundScriptManager::clearEvents(){for(int i=0;i<100;i++){scheduledLevelEvents[i].clear();playingEvents[i].clear();}numEvents=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BD38)
// 0x0031BD38 playEvent__12EventMapTypeP6entity
class entity;

class EventMapType
{
    int type;
    int numSrcs;
    unsigned int srcs[30];

public:
    unsigned int getSource();
    unsigned int playEvent(entity *source);
};

extern int EventDampGuard[];

unsigned int nslAddSound(unsigned int source);
int nslGetSoundStatus(unsigned int sound);
void nslDampenGuardSound(unsigned int sound);
void nslPlaySound(unsigned int sound);

__asm__(".equ getSource__12EventMapType, 0x0031BC78");
__asm__(".equ EventDampGuard, 0x0043BFA0");
__asm__(".equ nslAddSound__FUi, 0x0038CAF8");
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslDampenGuardSound__FUi, 0x0038D9D0");
__asm__(".equ nslPlaySound__FUi, 0x0038CB20");

unsigned int EventMapType::playEvent(entity *source_entity)
{
    unsigned int source = getSource();
    if (source == 0)
        return 0;

    unsigned int sound = nslAddSound(source);
    if (nslGetSoundStatus(sound) != 0)
    {
        if (
            EventDampGuard[type] &&
            nslGetSoundStatus(sound) != 0
        )
            nslDampenGuardSound(sound);

        if (source_entity)
            nslPlaySound(sound);
        else
            nslPlaySound(sound);
    }
    return sound;
}
#endif
