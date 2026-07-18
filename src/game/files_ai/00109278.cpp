class ai_locomotion {
    char padding_to_service[0xCC];
    bool in_service;
    char padding_to_repulsion_timer[0x6C];
    float repulsion_wait_timer;
    bool repulsion_wait;
public:
    void going_out_of_service();
};
void ai_locomotion::going_out_of_service() { repulsion_wait_timer = 0.0f; repulsion_wait = false; in_service = false; }
