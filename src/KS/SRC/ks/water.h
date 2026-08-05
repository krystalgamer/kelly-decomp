#ifndef WATER_H
#define WATER_H

struct WaterDebugStruct {
    unsigned long BackfaceCull : 1;
    unsigned long BilinearFilter : 1;
    unsigned long DrawNearMesh : 1;
    unsigned long DrawSeamMesh : 1;
    unsigned long DrawSeamMeshDark : 1;
    unsigned long DrawSeamMeshHigh : 1;
    unsigned long DrawFarMesh : 1;
    unsigned long DrawFarMeshDark : 1;
    unsigned long DrawFarMeshHigh : 1;
    unsigned long DrawHorizonMesh : 1;
    unsigned long DrawTexture : 1;
    unsigned long DrawTextureAnim : 1;
    unsigned long DrawWaterMesh : 1;
    unsigned long FadeFarMesh : 1;
    unsigned long FadeHorizonMesh : 1;
    unsigned long FreezeWater : 1;
    unsigned long RecomputeExtents : 1;
    unsigned long ScissorNearMesh : 1;
    unsigned long ScissorSeamMesh : 1;
    unsigned long ScissorFarMesh : 1;
    unsigned long ScissorHorizonMesh : 1;
    unsigned long ShowNearLines : 1;
    unsigned long ShowSeamLines : 1;
    unsigned long ShowFarLines : 1;
    unsigned long ShowHorizonLines : 1;
    unsigned long TranparentNear : 1;
    unsigned long UniformGrid : 1;
    unsigned long UseLights : 1;
};

extern WaterDebugStruct WaterDebug;

bool WATER_GetDrawFar();
bool WATER_GetDrawHorizon();
bool WATER_GetDrawSeam();
bool WATER_GetDrawWave();
void WATER_Cleanup();
void WATER_SetDrawFar(bool enabled);
void WATER_SetDrawHorizon(bool enabled);
void WATER_SetDrawSeam(bool enabled);
void WATER_SetDrawWave(bool enabled);
void WATER_Normal(
    float x,
    float z,
    float &normal_x,
    float &normal_y,
    float &normal_z);

#endif
