class entity;
class PhotoChallenge { public: class Cameraman { int state; entity* ent; void* destPhoto; void* targetKsctrl; public: void Init(entity* value); }; };
void PhotoChallenge::Cameraman::Init(entity* value) {
    ent = value;
    targetKsctrl = 0;
    destPhoto = 0;
    state = 0;
}
