#ifndef KELLY_DECOMP_SCORINGMANAGER_SHARED_H
#define KELLY_DECOMP_SCORINGMANAGER_SHARED_H

template <class T>
class list {
    struct node {
        node* next;
        node* previous;
        T value;
    };

    node* sentinel;

public:
    class const_iterator {
        node* current;

    public:
        inline const_iterator(node* value) : current(value) {}
        inline const T& operator*() const { return current->value; }
        inline const T* operator->() const { return &current->value; }
        inline const_iterator& operator++()
        {
            current = current->next;
            return *this;
        }
        inline bool operator!=(const const_iterator& right) const
        {
            return current != right.current;
        }
    };

    inline const_iterator begin() const { return const_iterator(sentinel->next); }
    inline const_iterator end() const { return const_iterator(sentinel); }
};

class ScoringManager {
public:
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
};

#endif
