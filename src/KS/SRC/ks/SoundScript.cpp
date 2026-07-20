// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0031BBB8)
// 0x0031BBB8 __17CurrentSoundEvent
class CurrentSoundEvent { int event; int sound; char padding[0x10]; int extra; public: CurrentSoundEvent(); };
CurrentSoundEvent::CurrentSoundEvent() { extra = 0; event = 105; sound = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BF98)
// 0x0031BF98 pause__18SoundScriptManager
class SoundScriptManager { char padding[0x45B8]; bool paused; public: void pause(); };
void SoundScriptManager::pause() { paused = true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BFA8)
// 0x0031BFA8 unpause__18SoundScriptManager
class SoundScriptManager {
    char padding[0x45B8];
    bool paused;
public:
    void unpause();
};

void SoundScriptManager::unpause() {
    paused = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031C360)
// 0x0031C360 startEvent__18SoundScriptManager9EventTypeP6entityf
class entity;
enum EventType { EVENT_DEFAULT };
class SoundScriptManager { public: int playEvent(EventType type, entity *source, float fade); int startEvent(EventType type, entity *source, float fade); };
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
int SoundScriptManager::startEvent(EventType type, entity *source, float fade) { int result = playEvent(type, source, fade); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BB98)
// 0x0031BB98 clear__19ScheduledSoundEvent
class ScheduledSoundEvent { float time; int event; unsigned int snd; void *myEntity; public: void clear(); };
void ScheduledSoundEvent::clear() { snd = 0; myEntity = 0; time = -1.0f; event = 105; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BF28)
// 0x0031BF28 playSound__18SoundScriptManager9EventTypeP6entity
class entity;
enum EventType { EVENT_DUMMY };
class EventMapType { char storage[0x80]; public: int playEvent(entity *value); };
__asm__(".equ playEvent__12EventMapTypeP6entity, 0x0031BD38");
class SoundScriptManager { char padding[4]; EventMapType eventMap[1]; public: int playSound(EventType type, entity *value); };
int SoundScriptManager::playSound(EventType type, entity *value) { int offset = type * 0x80 + 4; register entity *argument __asm__("$5") = value; __asm__ volatile("" : "+r"(argument) : "r"(offset)); int result = ((EventMapType *)((char *)this + offset))->playEvent(argument); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031BFB0)
// 0x0031BFB0 getSoundId__18SoundScriptManageri
struct playing_event {
    int event;
    unsigned int sound_id;
    char padding[0x14];
};

class SoundScriptManager {
    char padding[0x3ac4];
    playing_event playingEvents[1];

public:
    unsigned int getSoundId(int event);
};

unsigned int SoundScriptManager::getSoundId(int event) {
    if (playingEvents[event].event == 105) {
        goto invalid;
    }
    return playingEvents[event].sound_id;

invalid:
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0031C628)
// 0x0031C628 createMapping__18SoundScriptManager9EventTypeUi
enum EventType {
    SS_NONE
};

class EventMapType {
public:
    EventType type;

private:
    char padding[0x7C];

public:
    bool addSoundMapping(unsigned int source);
};

__asm__(".equ addSoundMapping__12EventMapTypeUi, 0x0031BDF8");

class SoundScriptManager {
    char padding[4];
    EventMapType eventMap[1];

public:
    bool createMapping(EventType type, unsigned int source);
};

bool SoundScriptManager::createMapping(
    EventType type,
    unsigned int source
) {
    eventMap[type].type = type;
    bool result = eventMap[type].addSoundMapping(source);
    KELLY_DECOMP_COMPILER_BARRIER();
    return result;
}
#endif
