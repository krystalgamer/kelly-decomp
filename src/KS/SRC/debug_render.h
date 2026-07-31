#ifndef DEBUG_RENDER_H
#define DEBUG_RENDER_H

#include "KS/SRC/capsule.h"
#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"

void render_capsule(
    const vector3d &base,
    const vector3d &end,
    float radius,
    color32 color);

inline void render_capsule(
    const capsule &value,
    color32 color)
{
    render_capsule(
        value.base,
        value.end,
        value.radius,
        color);
}

void render_cgmesh(
    const cg_mesh *geometry,
    const po &transform,
    color32 color);
void render_sphere(
    const vector3d &center,
    float radius,
    color32 color);

extern po po_identity_matrix;

__asm__(
    ".equ render_capsule__FRC8vector3dT0fG7color32, "
    "0x002C6D18");
__asm__(
    ".equ render_cgmesh__FPC7cg_meshRC2poG7color32, "
    "0x002C9048");
__asm__(
    ".equ render_sphere__FRC8vector3dfG7color32, "
    "0x002C6AB0");
__asm__(".equ po_identity_matrix, 0x00588930");

#endif
