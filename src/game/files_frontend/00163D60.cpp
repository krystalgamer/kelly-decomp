class IGOIconManager {
public:
    class Icon {
        char padding[0x78];
        bool show;

    public:
        void SetShow(bool visible);
    };
};

void IGOIconManager::Icon::SetShow(bool visible) {
    show = visible;
}
