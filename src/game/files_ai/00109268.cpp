class ai_locomotion {
    char padding_to_wait[0xC8];
    bool wait_for_facing;
    bool in_service;
public:
    void going_into_service();
};
void ai_locomotion::going_into_service() { in_service = true; wait_for_facing = false; }
