class Career {
public:
    class Beach {
        char padding[0x4];
        bool unlocked;
        bool shown;
    public:
        void Reset();
    };
};

void Career::Beach::Reset() {
    unlocked = false;
    shown = false;
}
