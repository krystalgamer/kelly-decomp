// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0024A4E8)
class Trick {
    int field0;
    int field1;
    int field2;
    float field3;
    int field4;
    float field5;
    float field6;
    int field7;
public:
    Trick &operator=(const Trick &other)
        __asm__("__as__Q214ScoringManager5TrickRCQ214ScoringManager5Trick");
};

Trick &Trick::operator=(const Trick &other)
{
    if (this != &other) {
        field0 = other.field0;
        field1 = other.field1;
        field2 = other.field2;
        field3 = other.field3;
        field4 = other.field4;
        field5 = other.field5;
        field6 = other.field6;
        field7 = other.field7;
    }
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249AE0)
#include "KS/SRC/ks/scoringmanager_shared.h"
// 0x00249AE0 HasGap__CQ214ScoringManager6Seriesi
bool ScoringManager::Series::HasGap(int gapIdx) const
{
    for (TrickList::const_iterator i = tricks.begin(); i != tricks.end(); ++i) {
        if (i->type == Trick::TYPE_GAP && i->index == gapIdx)
            return true;
    }

    return false;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00246FD0)
// 0x00246FD0 SetKsctrl__14ScoringManagerP22kellyslater_controller
struct kellyslater_controller { char padding_to_meter[0x1648]; char special_meter; char padding_to_player[0x2B]; int player_num; };
class ScoringManager { char padding[0x8]; kellyslater_controller* ksctrl; int playerIdx; void* specialMeter; public: void SetKsctrl(kellyslater_controller* value); };
void ScoringManager::SetKsctrl(kellyslater_controller* value) { ksctrl = value; playerIdx = value->player_num; specialMeter = &value->special_meter; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00248718)
// 0x00248718 SetMouthDist__14ScoringManagerf
class ScoringManager {
    char padding[0x1D4];
    float mouthDist;
public:
    void SetMouthDist(float dist);
};

void ScoringManager::SetMouthDist(float dist) {
    mouthDist = dist;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002495C8)
// 0x002495C8 SetMultAdder__Q214ScoringManager5Chainf
class ScoringManager {
public:
    class Chain {
        char padding[0x4];
        float multAdder;
    public:
        void SetMultAdder(float value);
    };
};

void ScoringManager::Chain::SetMultAdder(float value) {
    multAdder = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0024A0E0)
// 0x0024A0E0 IsInteresting__CQ214ScoringManager5Trick
class ScoringManager {
public:
    class Trick {
    public:
        bool IsInteresting() const;
    };
};

bool ScoringManager::Trick::IsInteresting() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002490C0)
// 0x002490C0 GetSickness__CQ214ScoringManager5Chain
class ScoringManager { public: class Chain { public: float GetRawSickness() const; float GetSickness() const; }; };
__asm__(".equ GetRawSickness__CQ214ScoringManager5Chain, 0x00249200");
float ScoringManager::Chain::GetSickness() const { float result = GetRawSickness(); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00247F98)
// 0x00247F98 HasGap__C14ScoringManageri
class Series { public: bool HasGap(int gap) const; };
__asm__(".equ HasGap__C6Seriesi, 0x00249AE0");
struct SeriesContainer { char padding[4]; char *finish; };
class ScoringManager { char padding[0x1b4]; SeriesContainer *series; public: bool HasGap(int gap) const; };
bool ScoringManager::HasGap(int gap) const { bool result = ((Series *)(series->finish + 8))->HasGap(gap); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0024A538)
// 0x0024A538 sceWrite__FiRC7stringx
struct stringx_info { char padding[8]; int size; };
class stringx { public: char *data; stringx_info *info; };
extern "C" int sceWrite(int file, const void *data, int size);
__asm__(".equ sceWrite, 0x003DF228");
int sceWrite(int file, const stringx &text) { int result = sceWrite(file, text.data, text.info->size); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249CC8)
// 0x00249CC8 __Q214ScoringManager5Trick
class ScoringManager {
public:
    class Trick {
        int type;
        int index;
        int flags;
        float time;
        int numSpins;
        float mouthDist;
        float lipDist;
        int repetitions;

    public:
        Trick();
    };
};

ScoringManager::Trick::Trick()
{
    type = 0;
    index = -1;
    flags = 0;
    time = 0.0f;
    numSpins = 0;
    mouthDist = 0.5f;
    lipDist = 0.5f;
    repetitions = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249B28)
// 0x00249B28 GetTrickCount__CQ214ScoringManager6Seriesi
template<class T>
class list
{
    struct node
    {
        node * next;
        node * prev;
        T data;
    };

public:
    class const_iterator
    {
        node * current;

    public:
        const_iterator() { }
        const_iterator(node * n) : current(n) { }
        const T & operator*(void) const { return current->data; }
        const_iterator & operator++(void)
        {
            current = current->next;
            return *this;
        }
        bool operator!=(const const_iterator & right) const
        {
            return current != right.current;
        }
    };

private:
    node * sentinel;

public:
    const_iterator begin(void) const
    {
        return const_iterator(sentinel->next);
    }
    const_iterator end(void) const
    {
        return const_iterator(sentinel);
    }
};

class ScoringManager
{
public:
    struct LevelTrick;

    class Trick
    {
    public:
        enum TYPE { TYPE_TRICK, TYPE_GAP };

        TYPE type;
        int index;
    };
    typedef list<Trick> TrickList;

    class Series
    {
    private:
        LevelTrick * levelTricks;

    public:
        TrickList tricks;
        int GetTrickCount(const int trickIdx) const;
    };
};

int ScoringManager::Series::GetTrickCount(const int trickIdx) const
{
    TrickList::const_iterator it;
    int count = 0;

    for (it = tricks.begin(); it != tricks.end(); ++it)
    {
        if ((*it).type == Trick::TYPE_TRICK && (*it).index == trickIdx)
            count++;
    }

    return count;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002494E8)
// 0x002494E8 IsInteresting__CQ214ScoringManager5Chain
struct series_value {
    bool IsInteresting() const
        __asm__("IsInteresting__CQ214ScoringManager6Series");
};
struct series_node { series_node *next; series_node *previous; series_value value; };
class ScoringManager {
public:
    class Chain {
        char padding[8];
        series_node *sentinel;
    public:
        bool IsInteresting() const;
    };
};
__asm__(".equ IsInteresting__CQ214ScoringManager6Series, 0x00249A80");
bool ScoringManager::Chain::IsInteresting() const {
    series_node *it=sentinel->next;
    while (it!=sentinel) {
        if (it->value.IsInteresting()) return true;
        it=it->next;
    }
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249A80)
// 0x00249A80 IsInteresting__CQ214ScoringManager6Series
struct trick_value {
    bool IsInteresting() const
        __asm__("IsInteresting__CQ214ScoringManager5Trick");
};
struct trick_node { trick_node *next; trick_node *previous; trick_value value; };
class ScoringManager {
public:
    class Series {
        char padding[4];
        trick_node *sentinel;
    public:
        bool IsInteresting() const;
    };
};
__asm__(".equ IsInteresting__CQ214ScoringManager5Trick, 0x0024A0E0");
bool ScoringManager::Series::IsInteresting() const {
    trick_node *it=sentinel->next;
    while (it!=sentinel) {
        if (it->value.IsInteresting()) return true;
        it=it->next;
    }
    return false;
}
#endif
