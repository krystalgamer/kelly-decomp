class IGOTutorialManager {
    char padding[0x34];
    bool air_trick_in_chain;
    bool face_trick_in_chain;
public:
    void EndChain();
};

void IGOTutorialManager::EndChain() {
    air_trick_in_chain = false;
    face_trick_in_chain = false;
}
