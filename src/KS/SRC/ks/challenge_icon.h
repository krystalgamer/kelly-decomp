#ifndef CHALLENGE_ICON_H
#define CHALLENGE_ICON_H

class kellyslater_controller;

class IconChallenge {
public:
    enum {
        MAX_SEQUENCE_SIZE = 10,
        MAX_ARRANGEMENT_SIZE = 10
    };

    class Icon {
    public:
        ~Icon();
        void Spawn();
        void Despawn();
    };

    class Task {
    public:
        enum TYPE {
            TYPE_AIR_FLIP,
            TYPE_AIR_GRAB,
            TYPE_AIR_SPIN,
            TYPE_AIR_POINTS_1000,
            TYPE_AIR_POINTS_2000,
            TYPE_AIR_POINTS_5000,
            TYPE_AIR_SPECIAL,
            TYPE_FACE_SPIN,
            TYPE_TUBE_TIME_10,
            TYPE_TUBE_TIME_15,
            TYPE_TUBE_TIME_30,
            TYPE_TUBE_TRICK,
            TYPE_NUM,
            TYPE_NONE
        };

    private:
        void CheckForCompletion(kellyslater_controller *controller);
        Icon *icon;
        bool completed;
        TYPE type;
        bool watchChain;

    public:
        Task();
        void Reset();
        void Init(Icon *icon, TYPE type);
        void Update(
            kellyslater_controller *controller,
            float time_inc);
        void Spawn();
        void Despawn();
    };

    class Sequence {
        int numTasks;
        Task tasks[MAX_SEQUENCE_SIZE];
        bool completed;

    public:
        Sequence();
        void Reset();
        void Update(
            kellyslater_controller *controller,
            float time_inc);
        void PushTask(Icon *icon, Task::TYPE type);
        void Spawn();
        void Despawn();
    };

    class Arrangement {
        int numSequences;
        int currSequenceIdx;
        Sequence sequences[MAX_ARRANGEMENT_SIZE];
        bool completed;

    public:
        Arrangement();
        void Init(Icon *icons);
        void Reset(Icon *icons);
        void Update(
            kellyslater_controller *controller,
            float time_inc);
        void Spawn();
        void Despawn();
        bool IsCompleted() const { return completed; }
        const Sequence *GetCurrentSequence() const;
    };
};

#endif
