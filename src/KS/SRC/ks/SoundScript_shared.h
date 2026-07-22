#ifndef KELLY_DECOMP_SOUND_SCRIPT_SHARED_H
#define KELLY_DECOMP_SOUND_SCRIPT_SHARED_H

enum EventType {
    SS_LAST = 105,
};

class singleton {
    void* singleton_link;
};

class EventMapType {
public:
    EventType type;
    int numSrcs;
    unsigned int srcs[30];

    void clear();
};

class ScheduledSoundEvent {
    float time;
    EventType event;
    unsigned int sound;
    void* entity;
};

class CurrentSoundEvent {
    EventType event;
    unsigned int sound;
    void* entity;
    float fadeInTime;
    float fadeOutTime;
    bool fadingOut;
    unsigned int emitter;
};

class SoundScriptManager : public singleton {
    EventMapType eventMap[SS_LAST];
    ScheduledSoundEvent scheduledLevelEvents[100];
    CurrentSoundEvent playingEvents[100];
    int numEvents;
    bool paused;

public:
    void createAllMappings();
};

__asm__(".equ clear__12EventMapType, 0x0031BE38");

#endif
