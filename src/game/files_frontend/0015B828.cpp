class IGOLearnNewTrickManager {
public:
    class Icon {
        char padding[0x68];
        bool show;

    public:
        void SetShow(bool visible);
    };
};

void IGOLearnNewTrickManager::Icon::SetShow(bool visible) {
    show = visible;
}
