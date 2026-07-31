// Matching decompilation blocks selected by generated build shims.

// 0x001DF8F0 adjugate__9matrix4x4
#include "KS/SRC/HWOSPS2/ps2_algebra.h"

matrix4x4 matrix4x4::adjugate()
{
    matrix4x4 local;
    local = Cof();
    return local.transpose();
}

// 0x001DE758 make_translate__9matrix4x4RC8vector3d
#include "KS/SRC/HWOSPS2/ps2_algebra.h"
void matrix4x4::make_translate(const vector3d &t) {
    x.x=1.0f; x.y=0.0f; x.z=0.0f; x.w=0.0f;
    y.x=0.0f; y.y=1.0f; y.z=0.0f; y.w=0.0f;
    z.x=0.0f; z.y=0.0f; z.z=1.0f; z.w=0.0f;
    w.x=t.x; w.y=t.y; w.z=t.z; w.w=1.0f;
}

// 0x001DE920 make_scale__9matrix4x4RC8vector3d
#include "KS/SRC/HWOSPS2/ps2_algebra.h"
void matrix4x4::make_scale(const vector3d &s) {
    x.x=s.x; y.x=0.0f; z.x=0.0f; w.x=0.0f;
    x.y=0.0f; y.y=s.y; z.y=0.0f; w.y=0.0f;
    x.z=0.0f; y.z=0.0f; z.z=s.z; w.z=0.0f;
    x.w=0.0f; y.w=0.0f; z.w=0.0f; w.w=1.0f;
}

// 0x001DF280 det3__FPA2_Cf
extern "C" float det3(const float m[3][3]) __asm__("det3__FPA2_Cf");float det3(const float m[3][3]){return m[0][0]*m[1][1]*m[2][2]+m[0][1]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*m[2][1]-m[0][2]*m[1][1]*m[2][0]-m[0][0]*m[1][2]*m[2][1]-m[0][1]*m[1][0]*m[2][2];}

// 0x001DF710 det__C9matrix4x4
struct matrix4x4_layout{float m[16];};extern "C" float cofactor(const matrix4x4_layout*,int,int) __asm__("cofactor__C9matrix4x4ii");__asm__(".equ cofactor__C9matrix4x4ii,0x001DF660");extern "C" float det(const matrix4x4_layout*self) __asm__("det__C9matrix4x4");float det(const matrix4x4_layout*self){float s=0.0f;for(int i=0;i<4;++i)s+=self->m[i]*cofactor(self,0,i);return s;}

// 0x001DECD0 to_matrix__C10quaternionP9matrix4x4
#include "KS/SRC/HWOSPS2/ps2_algebra.h"

void quaternion::to_matrix(matrix4x4 *matrix) const
{
    rational_t ab, ac, ad, bb, bc, bd, cc, cd, dd, b2, c2, d2;

    b2 = b + b;
    c2 = c + c;
    d2 = d + d;

    ab = a * b2;
    ac = a * c2;
    ad = a * d2;
    bb = b * b2;
    bc = b * c2;
    bd = b * d2;
    cc = c * c2;
    cd = c * d2;
    dd = d * d2;

    matrix->x.x = 1.0f - (cc + dd);
    matrix->x.y = bc - ad;
    matrix->x.z = bd + ac;
    matrix->x.w = 0.0f;

    matrix->y.x = bc + ad;
    matrix->y.y = 1.0f - (bb + dd);
    matrix->y.z = cd - ab;
    matrix->y.w = 0.0f;

    matrix->z.x = bd - ac;
    matrix->z.y = cd + ab;
    matrix->z.z = 1.0f - (bb + cc);
    matrix->z.w = 0.0f;

    matrix->w.x = 0.0f;
    matrix->w.y = 0.0f;
    matrix->w.z = 0.0f;
    matrix->w.w = 1.0f;
}

// 0x001DE9A0 scale__9matrix4x4f
#include "KS/SRC/HWOSPS2/ps2_algebra.h"
void matrix4x4::scale(rational_t s){x.x*=s;y.x*=s;z.x*=s;w.x*=s;x.y*=s;y.y*=s;z.y*=s;w.y*=s;x.z*=s;y.z*=s;z.z*=s;w.z*=s;}
