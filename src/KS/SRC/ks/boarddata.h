#ifndef BOARDDATA_H
#define BOARDDATA_H

struct BoardData {
    int balance;
    int speed;
    int air;
    int spin;
    int height_feet;
    int height_inches;
    int width;
    float thickness;
    int tail_type;
};

void setBoardData(
    BoardData *data,
    int balance,
    int speed,
    int air,
    int spin,
    int height_feet,
    int height_inches,
    int width,
    float thickness,
    int tail_type);

#endif
