// Matching decompilation blocks selected by generated build shims.


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
