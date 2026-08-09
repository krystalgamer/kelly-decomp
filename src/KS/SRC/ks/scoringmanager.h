#ifndef SCORINGMANAGER_H
#define SCORINGMANAGER_H

#include "KS/SRC/ks/eventmanager.h"
#include "g++-2/stl_list.h"

class kellyslater_controller;

class ScoringManager : public EventRecipient {
public:
    int score;

    enum {
        TRICK_NUM = 95
    };

    struct CHAININFO {
        int points;
        int facePoints;
        int airPoints;
        int tubePoints;
        int numTricks;
        bool multiLocation;

        void Reset();
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

        Trick();
        Trick &operator=(const Trick &other);
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
        int GetTrickCount(int trickIdx) const;
    };

    typedef list<Series> SeriesList;

    class Chain {
        LevelTrick *levelTricks;
        float multAdder;

    public:
        SeriesList series;
        void SetMultAdder(float value);
        float GetSickness() const;
        float GetRawSickness() const;
    };

private:
    kellyslater_controller *ksctrl;
    int playerIdx;
    void *specialMeter;
    LevelTrick levelTricks[TRICK_NUM];
    Chain bestChain;
    int bestChainScore;
    float longestTubeRide;
    float longestFloater;
    float longestAir;
    Chain chain;
    int facePoints;
    int airPoints;
    int tubePoints;
    int num360spins;
    int num540spins;
    int prevTrickRegion;
    float lipDist;
    float mouthDist;
    int specialTrick;
    CHAININFO lastChainInfo;

public:
    bool HasGap(int gap) const;
    void SetKsctrl(kellyslater_controller *controller);
    int GetNumTrickLandings() const;
    void SetMouthDist(float distance);
};

#endif
