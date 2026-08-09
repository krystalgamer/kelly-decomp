// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0024A4E8)
#include "KS/SRC/ks/scoringmanager.h"

ScoringManager::Trick &ScoringManager::Trick::operator=(const Trick &other)
{
    if (this != &other) {
        type = other.type;
        index = other.index;
        flags = other.flags;
        time = other.time;
        numSpins = other.numSpins;
        mouthDist = other.mouthDist;
        lipDist = other.lipDist;
        repetitions = other.repetitions;
    }
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249AE0)
#include "KS/SRC/ks/scoringmanager.h"
// 0x00249AE0 HasGap__CQ214ScoringManager6Seriesi
bool ScoringManager::Series::HasGap(int gapIdx) const
{
    for (TrickList::const_iterator i = tricks.begin(); i != tricks.end(); ++i) {
        if ((*i).type == Trick::TYPE_GAP && (*i).index == gapIdx)
            return true;
    }

    return false;
}
#endif


// 0x00246FD0 SetKsctrl__14ScoringManagerP22kellyslater_controller
#include "KS/SRC/ks/scoringmanager.h"
#include "KS/SRC/ks/kellyslater_controller.h"

void ScoringManager::SetKsctrl(kellyslater_controller* value) { ksctrl = value; playerIdx = value->get_player_num(); specialMeter = value->get_special_meter(); }

#if defined(KELLY_DECOMP_FUNCTION_002490C0)
// 0x002490C0 GetSickness__CQ214ScoringManager5Chain
#include "KS/SRC/ks/scoringmanager.h"

float ScoringManager::Chain::GetSickness() const { return GetRawSickness(); }
#endif

// 0x00247F98 HasGap__C14ScoringManageri
#include "KS/SRC/ks/scoringmanager.h"

bool ScoringManager::HasGap(int gap) const { return chain.series.back().HasGap(gap); }

// 0x0024A538 sceWrite__FiRC7stringx
#include "KS/SRC/stringx.h"

extern "C" int sceWrite(int file, const void *data, int size);
__asm__(".equ sceWrite, 0x003DF228");
int sceWrite(int file, const stringx &text) { return sceWrite(file, text.c_str(), text.size()); }

#if defined(KELLY_DECOMP_FUNCTION_00249CC8)
// 0x00249CC8 __Q214ScoringManager5Trick
#include "KS/SRC/ks/scoringmanager.h"

ScoringManager::Trick::Trick()
{
    type = TYPE_TRICK;
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
#include "KS/SRC/ks/scoringmanager.h"

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

#if defined(KELLY_DECOMP_FUNCTION_00249BE8)
// 0x00249BE8 __as__Q214ScoringManager6SeriesRCQ214ScoringManager6Series
struct trick_list { char data[4]; };
extern "C" void assign_list(trick_list *,const trick_list *)
    __asm__("__as__t4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5TrickRCt4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5Trick");
__asm__(".equ __as__t4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5TrickRCt4list2ZQ214ScoringManager5TrickZt12my_allocator1ZQ214ScoringManager5Trick, 0x00265458");
class ScoringManager {
public:
    class Series {
        void *levelTricks;
        trick_list tricks;
        int numSpins;
        int landing;
        int flags;
    public:
        Series &operator=(const Series &right);
    };
};
ScoringManager::Series &ScoringManager::Series::operator=(
    const Series &right
) {
    if (this!=&right) {
        levelTricks=right.levelTricks;
        assign_list(&tricks,&right.tricks);
        register int spins __asm__("$3")=right.numSpins;
        numSpins=spins;
        register int landing_value __asm__("$2")=right.landing;
        landing=landing_value;
        register int flag_value __asm__("$3")=right.flags;
        flags=flag_value;
    }
    return *this;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249550)
// 0x00249550 GetTrickCount__CQ214ScoringManager5Chaini
struct node{node*next,*prev;};struct chain{char p0[8];node*series;};extern "C" int series_count(void*,int) __asm__("GetTrickCount__CQ214ScoringManager6Seriesi");__asm__(".equ GetTrickCount__CQ214ScoringManager6Seriesi,0x00249B28");extern "C" int count(const chain*self,int idx) __asm__("GetTrickCount__CQ214ScoringManager5Chaini");int count(const chain*self,int idx){int total=0;for(node*i=self->series->next;i!=self->series;i=i->next)total+=series_count((char*)i+8,idx);return total;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249620)
// 0x00249620 GetScale__CQ214ScoringManager5Chain
extern "C" char wave_type() __asm__("WAVE_GetScoringType__Fv");extern float scale_wave[];__asm__(".equ WAVE_GetScoringType__Fv,0x0037D8F8");__asm__(".equ scale_wave,0x00427AD8");struct Chain;extern "C" float get_scale(const Chain*) __asm__("GetScale__CQ214ScoringManager5Chain");float get_scale(const Chain*){float waveScale=1.0f;switch(wave_type()){case 'A':waveScale=scale_wave[0];break;case 'B':waveScale=scale_wave[1];break;case 'C':waveScale=scale_wave[2];break;default:waveScale=scale_wave[1];}return waveScale;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249C48)
// 0x00249C48 GetScale__CQ214ScoringManager6Series
extern float SCALE_SPINS[],SCALE_LANDINGS[],SCALE_SERIES_MODS[];__asm__(".equ SCALE_SPINS,0x00427A48");__asm__(".equ SCALE_LANDINGS,0x00427A90");__asm__(".equ SCALE_SERIES_MODS,0x00427AA0");struct Series{char pad[8];int numSpins;int landing;unsigned flags;float GetScale()const __asm__("GetScale__CQ214ScoringManager6Series");};float Series::GetScale()const{register const Series*me asm("$6")=this;register int spins asm("$5")=me->numSpins;register int maxspin asm("$4")=16;register unsigned fl asm("$7")=me->flags;float from=1.0f,to=1.0f;if(spins>=17)spins=maxspin;if(fl&1)from=SCALE_SERIES_MODS[0];if(fl&2)to=SCALE_SERIES_MODS[1];__asm__ volatile ("" : : "r" (fl));register float*spinptr asm("$3")=&SCALE_SPINS[spins];register int landing asm("$5")=me->landing;register float*landbase asm("$4")=SCALE_LANDINGS;float land=landbase[landing];return (*spinptr)*from*to*land;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002497B8)
// 0x002497B8 GetRawSickness__CQ214ScoringManager6Series
struct LevelTrick{};struct Trick{float GetRawSickness(const LevelTrick*)const __asm__("GetRawSickness__CQ214ScoringManager5TrickPCQ214ScoringManager10LevelTrick");};struct Node{Node*next,*prev;Trick value;};class Series{public:LevelTrick*levelTricks;Node*head;char p[4];int landing;float GetScale()const __asm__("GetScale__CQ214ScoringManager6Series");float GetRawSickness()const __asm__("GetRawSickness__CQ214ScoringManager6Series");};__asm__(".equ GetRawSickness__CQ214ScoringManager5TrickPCQ214ScoringManager10LevelTrick,0x0024A030");__asm__(".equ GetScale__CQ214ScoringManager6Series,0x00249C48");float Series::GetRawSickness()const{float sickness=0;for(Node*i=head->next;i!=head;i=i->next)sickness+=i->value.GetRawSickness(levelTricks);if(landing!=0)return GetScale()*sickness;else return GetScale()*sickness*2.0f;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002490E0)
// 0x002490E0 GetPartialScores__CQ214ScoringManager5ChainRiN21
class ScoringManager{public:class Chain{public:void GetPartialRawScores(int&,int&,int&)const __asm__("GetPartialRawScores__CQ214ScoringManager5ChainRiN21");float GetMultiplier()const;void GetPartialScores(int&,int&,int&)const __asm__("GetPartialScores__CQ214ScoringManager5ChainRiN21");};};asm(".equ GetPartialRawScores__CQ214ScoringManager5ChainRiN21,0x00249270");asm(".equ GetMultiplier__CQ214ScoringManager5Chain,0x00249390");void ScoringManager::Chain::GetPartialScores(int&facePoints,int&airPoints,int&tubePoints)const{GetPartialRawScores(facePoints,airPoints,tubePoints);facePoints=int(float(facePoints)*GetMultiplier());airPoints=int(float(airPoints)*GetMultiplier());tubePoints=int(float(tubePoints)*GetMultiplier());}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00249848)
// 0x00249848 GetPartialRawScores__CQ214ScoringManager6SeriesRiN21
template <class T> class list {
    struct node { node *next; node *prev; T value; };
public:
    class const_iterator {
        node *p;
    public:
        const_iterator() {}
        const_iterator(node *n) : p(n) {}
        const T &operator*() const { return p->value; }
        const_iterator &operator++() { p = p->next; return *this; }
        bool operator!=(const const_iterator &right) const { return p != right.p; }
    };
    node *head;
    const_iterator begin() const { return const_iterator(head->next); }
    const_iterator end() const { return const_iterator(head); }
};

struct SurferTrick { char pad0[12]; int flags; char pad1[72]; };
extern SurferTrick GTrickList[];
asm(".equ GTrickList,0x00427CA8");
enum { FaceFlag = 1, GrindFlag = 2, TubeFlag = 4, AirFlag = 8 };

class ScoringManager {
public:
    struct LevelTrick { int numLandings; };
    class Trick {
    public:
        enum TYPE { TYPE_TRICK, TYPE_GAP };
        TYPE type; int index; int flags; float time; int numSpins;
        float mouthDist; float lipDist; int repetitions;
        int GetRawScore(const LevelTrick *, const bool = true) const
            __asm__("GetRawScore__CQ214ScoringManager5TrickPCQ214ScoringManager10LevelTrickb");
        bool IsInteresting() const __asm__("IsInteresting__CQ214ScoringManager5Trick");
    };
    typedef list<Trick> TrickList;
    class Series {
        LevelTrick *levelTricks;
    public:
        TrickList tricks; int numSpins; int landing; int flags;
        float GetScale() const __asm__("GetScale__CQ214ScoringManager6Series");
        void GetPartialRawScores(int &, int &, int &) const
            __asm__("GetPartialRawScores__CQ214ScoringManager6SeriesRiN21");
    };
};
asm(".equ GetRawScore__CQ214ScoringManager5TrickPCQ214ScoringManager10LevelTrickb,0x00249D00");
asm(".equ IsInteresting__CQ214ScoringManager5Trick,0x0024A0E0");
asm(".equ GetScale__CQ214ScoringManager6Series,0x00249C48");

//	GetPartialRawScores()
// Retrieves the partial scores of face tricks, air tricks, and tube tricks in this series.
void ScoringManager::Series::GetPartialRawScores(int & facePoints, int & airPoints, int & tubePoints) const
{
	TrickList::const_iterator	it;

	facePoints = 0;
	airPoints = 0;
	tubePoints = 0;

	// Sum points of all tricks in this series.
	for (it = tricks.begin(); it != tricks.end(); ++it)
	{
		if ((*it).IsInteresting())
		{
			// Partial scores currently ignore gaps.
			if ((*it).type == Trick::TYPE_TRICK)
			{
				// This trick counts toward the face partial score.
				if ((GTrickList[(*it).index].flags & FaceFlag) || (GTrickList[(*it).index].flags & GrindFlag))
					facePoints += (*it).GetRawScore(levelTricks);
				// This trick counts toward the air partial score.
				else if (GTrickList[(*it).index].flags & AirFlag)
					airPoints += (*it).GetRawScore(levelTricks);
				// This trick counts toward the air partial score.
				else if (GTrickList[(*it).index].flags & TubeFlag)
					tubePoints += (*it).GetRawScore(levelTricks);
			}
		}
	}

	facePoints = int(GetScale()*float(facePoints));
	airPoints = int(GetScale()*float(airPoints));
	tubePoints = int(GetScale()*float(tubePoints));
}
#endif
