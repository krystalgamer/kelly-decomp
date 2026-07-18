class ai_locomotion { public: void copy(ai_locomotion* other); };
__asm__(".equ copy__13ai_locomotionP13ai_locomotion, 0x00106F18");
class ai_locomotion_direct : public ai_locomotion { public: void copy(ai_locomotion_direct* other); };
void ai_locomotion_direct::copy(ai_locomotion_direct* other) {
    ai_locomotion::copy((ai_locomotion*)other);
    __asm__ volatile("");
}
