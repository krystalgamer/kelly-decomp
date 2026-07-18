class ai_goal {
    char padding[0xC];
    bool in_service;
public:
    void going_into_service();
};

void ai_goal::going_into_service() {
    in_service = true;
}
