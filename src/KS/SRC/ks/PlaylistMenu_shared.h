#ifndef KELLY_DECOMP_PLAYLIST_MENU_SHARED_H
#define KELLY_DECOMP_PLAYLIST_MENU_SHARED_H

template<class T>
class singleton_ptr {
    T *pointer;

public:
    inline operator T *() const {
        return pointer;
    }
};

class singleton {
protected:
    inline singleton() {}
    virtual inline ~singleton() {}
};

class os_developer_options : public singleton {
public:
    enum flags_t {
        FLAG_NO_AUDIO = 17
    };

    inline bool is_flagged(flags_t flag) const {
        return flags[flag];
    }

private:
    static singleton_ptr<os_developer_options> instance;
    bool flags[80];

public:
    static inline os_developer_options *inst() {
        return instance;
    }
};

typedef unsigned int nslSourceId;
typedef unsigned int nslSoundId;

class Track {
    nslSourceId mySrcId;
    nslSoundId mySndId;
    bool paused;

public:
    char songName[30];
    char artistName[30];
};

class MusicListing {
    int totalSources;
    int current;
    Track sources[50];
    nslSoundId currentSoundId;
    bool sucessfulLastPlay;

public:
    inline int getCurrent() const {
        return current;
    }
    inline void disable(int song, bool disabled) {
        enabled[order[song]] = !disabled;
    }
    inline bool isDisabled(int song) {
        return !enabled[order[song]];
    }
    inline void setCurrent(int position) {
        current = position;
    }

    int order[50];
    bool enabled[50];
};

class MusicMan : public singleton {
    float volume;
    int inited;
    bool paused;
    static singleton_ptr<MusicMan> instance;

public:
    static inline MusicMan *inst() {
        return instance;
    }

    MusicListing musicTrack;
    inline void setCurrent(int current) {
        musicTrack.setCurrent(current);
    }
    nslSoundId play();
    void stop();
    void playNext();
    inline void disable(int which, bool disabled) {
        musicTrack.disable(which, disabled);
    }
    inline bool isDisabled(int which) {
        return musicTrack.isDisabled(which);
    }
};

enum EventType {
    SS_FE_ONX = 24
};

class entity;

class SoundScriptManager : public singleton {
    static singleton_ptr<SoundScriptManager> instance;

public:
    static inline SoundScriptManager *inst() {
        return instance;
    }

    void pause();
    void unpause();
    int playEvent(
        EventType type,
        entity *source = 0,
        float fade_in_time = 0.0f);
};

class FEMenu {
    char menu_data[0x78];
};

class PauseMenuSystem;
class stringx;
class FEMenuEntry;
class TextString;
class color32;

enum {
    SONGS_PER_SCREEN = 6
};

class PlaylistMenuClass : public FEMenu {
private:
    PauseMenuSystem *sys;
    stringx *song_names;
    FEMenuEntry *songName[SONGS_PER_SCREEN];
    TextString *upArrow;
    TextString *downArrow;
    TextString *helpText2;
    TextString *lineNumbers[SONGS_PER_SCREEN];
    TextString *onOff[SONGS_PER_SCREEN];
    TextString *playing;
    TextString *currentSong;
    TextString *currentArtist;
    int offset;
    int pos;
    int active;
    int numSongs;
    color32 *col;
    color32 *colh;
    bool tweaked;

public:
    void Select(int entry_index);
    void OnSquare(int controller);
};

__asm__(".equ _20os_developer_options$instance, 0x0046B180");
__asm__(".equ _18SoundScriptManager$instance, 0x0046B4A0");
__asm__(".equ _8MusicMan$instance, 0x00427B18");
__asm__(".equ unpause__18SoundScriptManager, 0x0031BFA8");
__asm__(".equ stop__8MusicMan, 0x002595F0");
__asm__(".equ playNext__8MusicMan, 0x00258D08");
__asm__(".equ play__8MusicMan, 0x00258D60");
__asm__(
    ".equ playEvent__18SoundScriptManager9EventTypeP6entityf, "
    "0x0031C380");
__asm__(".equ pause__18SoundScriptManager, 0x0031BF98");

#endif
