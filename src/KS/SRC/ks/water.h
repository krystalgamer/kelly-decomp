#ifndef WATER_H
#define WATER_H

extern int WaterDebug;

bool WATER_GetDrawFar();
bool WATER_GetDrawHorizon();
bool WATER_GetDrawSeam();
void WATER_Normal(
    float x,
    float z,
    float &normal_x,
    float &normal_y,
    float &normal_z);

#endif
