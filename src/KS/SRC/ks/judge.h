#ifndef INCLUDED_JUDGE_H
#define INCLUDED_JUDGE_H

class JudgingSystem {
public:
    enum {
        NUM_COMPETITORS = 9,
        SURFER_COUNT = 14
    };

    struct RUN {
        float regionScores[3];
    };

    struct RESULT {
        RUN runs[3];
        int rank;
    };

protected:
    float skills[SURFER_COUNT];
    bool isCompetitor[SURFER_COUNT];
    float difficulties[3];
    RESULT results[SURFER_COUNT];
    int currRunIdx;
    bool over;
    int numPlayerWipeouts;

public:
    JudgingSystem();
    ~JudgingSystem();
    void OnCompetitionReset();
};

#endif
