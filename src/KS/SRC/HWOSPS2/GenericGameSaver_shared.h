#ifndef KELLY_DECOMP_GENERIC_GAME_SAVER_SHARED_H
#define KELLY_DECOMP_GENERIC_GAME_SAVER_SHARED_H

class GenericGameSaver {
public:
    static GenericGameSaver *instance;
    static inline GenericGameSaver *inst() { return instance; }

    inline int getFirstCard() { return 0; }
    bool hasSystemFile(int port, int slot);
    int format(int port, int slot);
    static int getInfo(
        int port,
        int slot,
        int *type,
        int *free_blocks,
        int *formatted)
        __asm__("getInfo__16GenericGameSaveriiPiN23");
};

enum {
    GSOk = 0,
    GSErrorUnformatted = -1,
    GSErrorOther = -2,
    GSErrorCountNotLoadModules = -3
};

extern "C" int sceMcFormat(int port, int slot);
extern "C" int sceMcSync(int mode, int *command, int *result);
__asm__(".equ sceMcFormat, 0x00392B48");
__asm__(".equ sceMcSync, 0x00392550");
__asm__(".equ getInfo__16GenericGameSaveriiPiN23, 0x001E3DC0");
__asm__(".equ hasSystemFile__16GenericGameSaverii, 0x001E4228");

#endif
