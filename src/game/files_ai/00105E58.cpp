class ai_action {
    char padding[0x4];
    unsigned int flags;
public:
    void going_into_service();
};
void ai_action::going_into_service() { flags |= 1; }
