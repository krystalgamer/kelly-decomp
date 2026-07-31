#ifndef PLAYER_H
#define PLAYER_H

class entity;

class player_info {
public:
    enum { MAX_ACC = 20 };

protected:
    entity *accomplishments[MAX_ACC];
    int numAccomplishments;

public:
    player_info();
    ~player_info();

    void AddAccomplishment(entity *ent);
    void ClearAccomplishments();
    int GetNumAccomplishments() const {
        return numAccomplishments;
    }
    bool HasAccomplishment(const entity *ent) const;
};

extern player_info current_player_info;

extern bool TakePhoto(float dt, void **data);

#endif
