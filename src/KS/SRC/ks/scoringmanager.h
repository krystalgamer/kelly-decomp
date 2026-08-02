#ifndef SCORINGMANAGER_H
#define SCORINGMANAGER_H

#include "KS/SRC/ks/eventmanager.h"
#include "g++-2/stl_list.h"

class kellyslater_controller;

class ScoringManager : public EventRecipient {
public:
    enum {
        TRICK_NUM = 95
    };

    struct LevelTrick {
        int numLandings;
    };

    class Trick {
    public:
        enum TYPE { TYPE_TRICK, TYPE_GAP };

        TYPE type;
        int index;
        int flags;
        float time;
        int numSpins;
        float mouthDist;
        float lipDist;
        int repetitions;

        bool IsInteresting() const;
    };

    typedef list<Trick> TrickList;

    class Series {
        LevelTrick* levelTricks;

    public:
        TrickList tricks;
        int numSpins;
        int landing;
        int flags;
        bool HasGap(int gapIdx) const;
    };

    typedef list<Series> SeriesList;

    class Chain {
        LevelTrick *levelTricks;
        float multAdder;

    public:
        SeriesList series;
        void SetMultAdder(float value);
    };

private:
    int score;
    kellyslater_controller *ksctrl;
    int playerIdx;
    void *specialMeter;
    LevelTrick levelTricks[TRICK_NUM];
    char data_to_mouth_dist[0x44];
    float mouthDist;

public:
    void SetKsctrl(kellyslater_controller *controller);
    int GetNumTrickLandings() const;
    void SetMouthDist(float distance);
};

#endif
