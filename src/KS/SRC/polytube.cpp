// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0013AD58)
#include "KS/SRC/polytube_shared.h"

__asm__(".equ is_translucent__C7mat_fac, 0x002BD178");

// 0x0013AD58 render_passes_needed__C8polytube
render_flavor_t polytube::render_passes_needed() const
{
    render_flavor_t passes = 0;

    if ((my_material && my_material->is_translucent()) ||
        render_color.get_alpha() < 0xFF)
        passes |= RENDER_TRANSLUCENT_PORTION;
    else
        passes |= RENDER_OPAQUE_PORTION;

    return passes;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0013ABD8)
// 0x0013ABD8 init__8polytube
#include "KS/SRC/polytube_shared.h"
void polytube::init() {
    my_material = 0;
    tiles_per_meter = 1.0f;
    num_sides = 5;
    tube_radius = 0.025f;
    use_spline = true;
    entity::set_flag(EFLAG_GRAPHICS, true);
    max_length = -1.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0013AE48)
// 0x0013AE48 render__8polytubeP6camerafUif
struct vec{char p0[12];};struct color32{unsigned value;};struct material{unsigned flags;char p0[52];int blend;};struct matrix4x4{char p0[64];};struct polytube{char p0[80];matrix4x4*matrix;char p1[388];color32 color;char p2[36];int use_spline;vec control,curve;char spline_extra[12];material*mat;float radius;int sides;float tiles,max_length;};extern "C" void render_tube(const vec&,float,int,const color32&,material*,float,const matrix4x4&,float) __asm__("render_polytube__FRCt6vector2Z8vector3dZt12my_allocator1Z8vector3dfiRC7color32P7mat_facfRC9matrix4x4f");__asm__(".equ render_polytube__FRCt6vector2Z8vector3dZt12my_allocator1Z8vector3dfiRC7color32P7mat_facfRC9matrix4x4f,0x00139DE0");extern "C" void render(polytube*self,void*,float,unsigned,float) __asm__("render__8polytubeP6camerafUif");void render(polytube*self,void*,float,unsigned,float){register int blend __asm__("$7")=2;self->mat->blend=blend;self->mat->flags|=1;self->mat->flags|=0x4000;register const vec*points __asm__("$4")=&self->curve;{register const vec*control __asm__("$8")=&self->control;if(!self->use_spline)points=control;}render_tube(*points,self->radius,self->sides,self->color,self->mat,self->tiles,*self->matrix,self->max_length);int dead;__asm__("" : "=r"(dead));}
#endif
