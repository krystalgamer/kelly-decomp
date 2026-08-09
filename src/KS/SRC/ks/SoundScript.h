#ifndef SOUND_SCRIPT_H
#define SOUND_SCRIPT_H

#include "KS/SRC/singleton.h"

enum EventType {
    SS_FE_ONX = 24,
    SS_FE_UPDOWN = 25,
    SS_FE_BACK = 27,
    SS_FE_ERROR = 28,
    SS_LAST = 105,
};

class entity;

class nlVector3d {
    float values[3];

public:
    inline float &operator[](int index) { return values[index]; }
};

class EventMapType {
public:
    EventType type;
    int numSrcs;
    unsigned int srcs[30];

    void clear();
    int playEvent(entity *source);
};

class ScheduledSoundEvent {
    float time;
    EventType event;
    unsigned int snd;
    void *myEntity;

public:
    void clear();
};

class CurrentSoundEvent {
    friend class SoundScriptManager;

    EventType event;
    unsigned int sound;
    void* entity;
    float fadeInTime;
    float fadeOutTime;
    bool fadingOut;
    unsigned int emitter;

public:
    CurrentSoundEvent();
};

class SoundScriptManager : public singleton {
    EventMapType eventMap[SS_LAST];
    ScheduledSoundEvent scheduledLevelEvents[100];
    CurrentSoundEvent playingEvents[100];
    int numEvents;
    bool paused;

public:
    static SoundScriptManager* instance;

    static inline SoundScriptManager* inst() { return instance; }
    bool init();
    void pause();
    void unpause();
    void clearEvents();
    int startEvent(
        EventType type,
        entity *source = 0,
        float fade_in_time = 0.0f);
    int playEvent(EventType type, entity* source = 0, float fade_in_time = 0.0f);
    unsigned int playSound(EventType type, entity *source = 0);
    unsigned int getSoundId(int event);
    void endEvent(int event, float fade_out_time = 0.0f);
    void createAllMappings();
};

__asm__(".equ _18SoundScriptManager$instance, 0x0046B4A0");
__asm__(".equ playEvent__18SoundScriptManager9EventTypeP6entityf, 0x0031C380");
__asm__(".equ endEvent__18SoundScriptManagerif, 0x0031C2F0");

#endif
