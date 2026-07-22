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
        const_iterator(node* value) : current(value) {}
        const T& operator*() const { return current->value; }
        const T* operator->() const { return &current->value; }
        const_iterator& operator++()
        {
            current = current->next;
            return *this;
        }
        bool operator!=(const const_iterator& right) const
        {
            return current != right.current;
        }
    };

    const_iterator begin() const { return const_iterator(sentinel->next); }
    const_iterator end() const { return const_iterator(sentinel); }
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
