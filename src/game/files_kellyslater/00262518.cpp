enum EVENT { EVT_SCORING_CHAIN_END = 7 };
class PhotoChallenge { char padding[0x14]; bool recordChain; public: void OnEvent(EVENT event, int param1, int param2); };
void PhotoChallenge::OnEvent(EVENT event, int param1, int param2) { if (event == EVT_SCORING_CHAIN_END) recordChain = false; }
