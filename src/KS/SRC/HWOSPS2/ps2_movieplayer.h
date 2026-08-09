#ifndef PS2_MOVIEPLAYER_H
#define PS2_MOVIEPLAYER_H

#include "KS/SRC/singleton.h"

struct nglTexture;
struct nvlMovie;
struct nvlMovieSource;

class movieplayer : public singleton {
    bool hiRes;
    char movie_context[0x238];
    nvlMovieSource *movieSource;
    nvlMovie *movie;
    nglTexture *texture;
    char *movieBuf;
    char movie_state_context[0x64];
    bool movieStarted;
    bool isPlaying;

public:
    movieplayer();
    virtual ~movieplayer();
    void shutdown();
};

#endif
