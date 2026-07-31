#ifndef FEENTITYMANAGER_H
#define FEENTITYMANAGER_H

typedef float time_value_t;

class FEEntityManager {
public:
    void Update(time_value_t time_inc);
    void LoadAll();
};

#endif
