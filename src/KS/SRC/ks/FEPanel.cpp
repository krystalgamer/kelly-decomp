// Matching decompilation blocks selected by generated build shims.

// 0x00148080 __as__10StringListRC10StringList
#include "KS/SRC/ks/FEPanel.h"

__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");

StringList &StringList::operator=(
    const StringList &other)
{
    if (this != &other)
    {
        data = other.data;
        x = other.x;
        y = other.y;

        for (int index = 0;
             index < MAX_STRING_SIZE;
             index++)
        {
            fall_speed[index] =
                other.fall_speed[index];
            drift_speed[index] =
                other.drift_speed[index];
            drift_max[index] =
                other.drift_max[index];
            delta_x[index] =
                other.delta_x[index];
            delta_y[index] =
                other.delta_y[index];
        }
    }

    return *this;
}

// 0x0014CA48 UpdateInScene__12FloatingTextb
#include "KS/SRC/ks/FEPanel.h"

void FloatingText::UpdateInScene(bool ignore_scale)
{
    project_floating_point(location_2d, location_3d);
    unadjust_floating_coords(
        location_2d[0], location_2d[1]);
    changePos(location_2d[0], location_2d[1]);

    if (!ignore_scale)
    {
        float temporary[4] __attribute__((aligned(16)));
        apply_floating_matrix(
            temporary,
            reinterpret_cast<float *>(
                floating_geometry->transforms + 64),
            location_3d);
        float distance = location_2d[2] = temporary[2];
        if (distance == 0.0f)
            distance = 1.0f;
        scale = real_scale / distance;
    }
}

// 0x001516A8 Reload__11PanelObject
#include "KS/SRC/ks/FEPanel.h"

extern nglTexture *nglLoadTextureA(const char *name);
__asm__(".equ nglLoadTextureA__FPCc, 0x0039C1C8");
__asm__(".equ Reload__10PanelBatchP13PanelMaterial, 0x001511C8");
__asm__(".equ Reload__9PanelGeom, 0x0014FC78");

void PanelObject::Reload()
{
    for (int i = 0; i < size; i++)
    {
        PanelMaterial &material = materials[i];
        if (material.hasmap)
            material.texture =
                nglLoadTextureA(material.filename.data());
        else
            material.texture = 0;
    }
    for (int i = 0; i < nbatches; i++)
        batches[i].Reload(materials);
    PanelGeom::Reload();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001524C0 FindQuad__9PanelFileRC7stringx
#include "KS/SRC/ks/FEPanel.h"

PanelQuad *PanelFile::FindQuad(const stringx &search_name)
{
    PanelGeom *obj = FindObject(search_name);
    if (obj) {
        PanelQuad *quad = obj->GetQuad();
        return quad;
    }
    return 0;
}

// 0x00148270 setHJustify__10TextStringQ24Font9HORIZJUST
#include "KS/SRC/ks/FEPanel.h"

void TextString::setHJustify(Font::HORIZJUST justify) {
    hJustify = justify;
}

// 0x00151368 eq_to_tolerance__10PanelBatchfff
class PanelBatch {
public:
    bool eq_to_tolerance(float, float, float);
};
bool PanelBatch::eq_to_tolerance(float a, float b, float tolerance)
{
    if (a >= b)
        return (a - b) < tolerance;
    return (b - a) < tolerance;
}

// 0x00148278 setVJustify__10TextStringQ24Font8VERTJUST
#include "KS/SRC/ks/FEPanel.h"

void TextString::setVJustify(Font::VERTJUST justify) {
    vJustify = justify;
}

// 0x001482F0 getZ__10TextString
#include "KS/SRC/ks/FEPanel.h"

int TextString::getZ() {
    return z;
}

// 0x00148AC0 addFont__15MultiLineStringiP4Font
#include "KS/SRC/ks/FEPanel.h"

void MultiLineString::addFont(int index, Font* font) { fonts[index] = font; }

// 0x00149108 Bounce__12BouncingTextff
#include "KS/SRC/ks/FEPanel.h"

void BouncingText::Bounce(float bounceScale, float bounceTime) { targetScale = bounceScale; speed = targetScale / bounceTime; scale = 0.0f; }

// 0x0014CB90 SetBehaviorNF__12FloatingTextff
#include "KS/SRC/ks/FEPanel.h"

void FloatingText::SetBehaviorNF(float x, float y) { non_floating_behavior = true; real_x = x; real_y = y; }

// 0x0014D068 SetFade__9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetFade(float amount) { fade = 2; fade_alpha = amount; }

// 0x0014DEC8 SetClip__9PanelQuadb
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetClip(bool enabled) {
    clip = enabled;
}

// 0x0014FAB8 cons__9PanelGeom
#include "KS/SRC/ks/FEPanel.h"

void PanelGeom::cons() {
    children = 0;
    next = 0;
    parent = 0;
}

// 0x001521F0 Draw__9PanelTextf
#include "KS/SRC/ks/FEPanel.h"

void PanelText::Draw(float alpha) {
}

// 0x001533F8 ReadChar__FPUcRi
unsigned char ReadChar(unsigned char* buffer, int& index) {
    unsigned char result = buffer[index];
    ++index;
    return result;
}

// 0x00151768 GetQuad__11PanelObject
#include "KS/SRC/ks/FEPanel.h"

PanelQuad* PanelObject::GetQuad() {
    if (size == 0)
        return 0;
    return batches[0].pq;
}

// 0x00148458 changeX__10TextStringf
#include "KS/SRC/ks/FEPanel.h"

void adjustCoords(float &x, float &y)
    __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
void TextString::changeX(float position) { float other; x = position; adjustCoords(x, other); }

// 0x00148480 changeY__10TextStringf
#include "KS/SRC/ks/FEPanel.h"

void adjustCoords(float &x, float &y)
    __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
void TextString::changeY(float position) { float other; y = position; adjustCoords(other, y); }

// 0x00148430 changePos__10TextStringff
#include "KS/SRC/ks/FEPanel.h"

void AdjustCoords(float &x, float &y) __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
void TextString::changePos(float px, float py) { x = px; y = py; void (*adjust)(float &, float &) = AdjustCoords; adjust(x, y); }

// 0x0014A788 SetLocation3D__7BoxTextG8vector3d
#include "KS/SRC/ks/FEPanel.h"

void BoxText::SetLocation3D(vector3d location) { location_3d[0] = location.x; location_3d[1] = location.y; location_3d[2] = location.z; location_3d[3] = 1.0f; }

// 0x0014CA20 SetLocation3D__12FloatingTextG8vector3d
#include "KS/SRC/ks/FEPanel.h"

void FloatingText::SetLocation3D(vector3d location) { location_3d[0] = location.x; location_3d[1] = location.y; location_3d[2] = location.z; location_3d[3] = 1.0f; }

// 0x0014F730 SetLocation3D__10FloatingPQG8vector3d
#include "KS/SRC/ks/FEPanel.h"

void FloatingPQ::SetLocation3D(vector3d location) { location_3d[0] = location.x; location_3d[1] = location.y; location_3d[2] = location.z; location_3d[3] = 1.0f; }

// 0x001512C8 Update__10PanelBatchf
#include "KS/SRC/ks/FEPanel.h"

void PanelBatch::Update(float dt) { pq->Update(dt); }

// 0x00153450 ReadShort__FPUcRi
short ReadShort(unsigned char *buffer, int &index) { short result; result = buffer[index] | (buffer[index + 1] << 8); index += 2; return result; }

// 0x0014DAF8 SetPos__9PanelQuadffffffff
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetPos(
    float xa,
    float ya,
    float xb,
    float yb,
    float xc,
    float yc,
    float xd,
    float yd
) {
    SetPos(xa, ya, xc, yc);
}

// 0x0014F700 SetBehavior__10FloatingPQb
#include "KS/SRC/ks/FEPanel.h"

extern "C" void PanelQuadSetPos(
    void *self,
    float x1,
    float y1,
    float x2,
    float y2
) __asm__("SetPos__9PanelQuadffff");
__asm__(".equ SetPos__9PanelQuadffff, 0x0014DA80");

void FloatingPQ::SetBehavior(bool enabled) {
    non_floating_behavior = enabled;
    if (enabled) {
        void (*set_position)(void *, float, float, float, float) =
            PanelQuadSetPos;
        set_position(
            this,
            x1_const,
            y1_const,
            x2_const,
            y2_const
        );
    }
}

// 0x0014C5D0 DrawLine__13PreformatTextiff
#include "KS/SRC/ks/FEPanel.h"

void PreformatText::DrawLine(int line_num, float x, float y)
{
    Render(&file_head[line_num], x, y);
}

// 0x0014FC78 Reload__9PanelGeom
#include "KS/SRC/ks/FEPanel.h"

void PanelGeom::Reload()
{
    if (children)
        children->Reload();
}

// 0x00150030 Update__9PanelGeomf
#include "KS/SRC/ks/FEPanel.h"

void PanelGeom::Update(float time)
{
    if (children)
        children->Update(time);
}

// 0x00150068 Slide__9PanelGeomf
#include "KS/SRC/ks/FEPanel.h"

void PanelGeom::Slide(float offset)
{
    if (children)
        children->Slide(offset);
}

// 0x001533B8 ReadLong__FPUcRi
typedef unsigned int uint32;
uint32 ReadLong(unsigned char *buffer, int &index)
{
    uint32 ret = buffer[index];
    ret |= buffer[index + 1] << 8;
    ret |= buffer[index + 2] << 16;
    ret |= buffer[index + 3] << 24;
    index += 4;
    return ret;
}

// 0x001495B0 makeRand__10RandomText
#include "KS/SRC/ks/FEPanel.h"

asm(".equ MakeRand__10StringList, 0x00147CD0");

void RandomText::makeRand()
{
    rand_string.MakeRand();
    time = 2.0f;
    checkTime = true;
    isRand = true;
}

// 0x00153410 ReadFloat__FPUcRi
typedef unsigned int uint32;
float ReadFloat(unsigned char *buffer, int &index)
{
    float ret;
    uint32 tmp = buffer[index];
    tmp |= buffer[index + 1] << 8;
    tmp |= buffer[index + 2] << 16;
    tmp |= buffer[index + 3] << 24;
    ret = *(float *)&tmp;
    index += 4;
    return ret;
}


// 0x00148BC0 setLineSpacing__15MultiLineStringi
#include "KS/SRC/ks/FEPanel.h"

__asm__(".equ getGlyph__4Fontc, 0x0033BD68");
void MultiLineString::setLineSpacing(const int new_spacing)
{
    if(new_spacing == -1)
        vSpacing = font->getGlyph('A')->cell_height;
    else
        vSpacing = new_spacing;
}


// 0x00149470 Update__10RandomTextf
#include "KS/SRC/ks/FEPanel.h"

__asm__(".equ Update__10TextStringf, 0x001482F8");
__asm__(".equ Update__10StringListf, 0x00147B98");
extern "C" void update_random_strings(StringList *list, float time)
    __asm__("Update__10StringListf");

void RandomText::Update(time_value_t time_inc)
{
    TextString::Update(time_inc);
    if (isRand)
    {
        void (*update)(StringList *, float) = update_random_strings;
        update(&rand_string, time_inc);
    }
}


// 0x0014F5A8 SetConstantScale__10FloatingPQf
#include "KS/SRC/ks/FEPanel.h"

void FloatingPQ::SetConstantScale(float s)
{
    width_f = width_f*s;
    height_f = height_f*s;
    SetScale(s);
}
// Matching decompilation blocks selected by generated build shims.

// 0x001495F0 Break__10RandomText
__asm__(".equ Break__10StringList, 0x00147EE0");
struct StringList { char padding[1]; void Break(); };
struct RandomTextVTable {
    char padding[304];
    short adjustment;
    short reserved;
    void (*make_rand)(void*);
};
class RandomText {
    char padding0[76];
    RandomTextVTable* vtable;
    int isRand;
    char padding1[4];
    StringList rand_string;
public:
    void Break();
};
void RandomText::Break()
{
    if (!isRand) {
        void* self = (char*)this + vtable->adjustment;
        vtable->make_rand(self);
    }
    rand_string.Break();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x001484A8 ChangeFade__10TextStringbT1f
struct TextString
{
    char padding[0x24];
    int fade;
    float fade_alpha;
    float fade_timer;

};

extern "C" void ChangeFade(
    TextString *self, bool start, bool fade_in, float time
) __asm__("ChangeFade__10TextStringbT1f");

void ChangeFade(
    TextString *self, bool start, bool fade_in, float time
)
{
    if (start)
    {
        self->fade_timer = time;
        if (fade_in)
        {
            if (self->fade != 1)
            {
                self->fade = 1;
                self->fade_alpha = 0.0f;
            }
        }
        else
        {
            if (self->fade != -1)
            {
                self->fade = -1;
                self->fade_alpha = 1.0f;
            }
        }
    }
    else
        self->fade = 0;
}

// 0x001494B8 changeText__10RandomTextG7stringx
class stringx
{
    char *characters;
    void *buffer;

public:
    stringx();
    stringx(const stringx &other);
    ~stringx();
    stringx &operator=(const stringx &other);
};

class TextString
{
protected:
    char field0[4];
    stringx text;

public:
    TextString() {}
    void changeText(stringx value);
};

class RandomText : public TextString
{
    char padding[0x4c];
    stringx random_data;

public:
    RandomText() {}
    void changeText(stringx value);
};

__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ changeText__10TextStringG7stringx, 0x001483E0");

extern "C" void StringCopy(
    stringx *self, const stringx *other
) __asm__("__7stringxRC7stringx");
extern "C" void BaseChangeText(
    TextString *self, stringx *value
) __asm__("changeText__10TextStringG7stringx");

void RandomText::changeText(stringx value)
{
    char temporary_storage[8];
    stringx *temporary = (stringx *)temporary_storage;
    StringCopy(temporary, &value);
    register stringx *argument __asm__("$5") = temporary;
    __asm__ __volatile__("" : "+r"(argument));
    BaseChangeText(this, argument);
    random_data = text;
}

// 0x0014DE08 GetCenterPos__9PanelQuadRfT1
extern "C" void UnadjustCoords(float &x, float &y)
    __asm__("unadjustCoords__H1Zf_RX01T0_v");
__asm__(".equ unadjustCoords__H1Zf_RX01T0_v, 0x001D6BF0");

class PanelQuad
{
    char padding[0xa8];
    float x1;
    float y1;
    float x2;
    float y2;
    float width;
    float height;

public:
    void GetCenterPos(float &center_x, float &center_y);
};

void PanelQuad::GetCenterPos(float &center_x, float &center_y)
{
    center_x = x1 + width / 2.0f;
    center_y = y1 + height / 2.0f;
    UnadjustCoords(center_x, center_y);
    __asm__ __volatile__("" : : : "memory");
}

// 0x0014E9F8 GetCenterPos__10PanelQuad4RfT1
extern "C" void UnadjustCoords(float &x, float &y)
    __asm__("unadjustCoords__H1Zf_RX01T0_v");
__asm__(".equ unadjustCoords__H1Zf_RX01T0_v, 0x001D6BF0");

class PanelQuad4
{
    char padding0[0xb8];
    float width;
    float height;
    char padding1[0xe0];
    float x[4];
    float y[4];

public:
    void GetCenterPos(float &center_x, float &center_y);
};

void PanelQuad4::GetCenterPos(float &center_x, float &center_y)
{
    center_x = x[0] + width / 2.0f;
    center_y = y[0] + height / 2.0f;
    UnadjustCoords(center_x, center_y);
    __asm__ __volatile__("" : : : "memory");
}

// 0x00152468 FindObject__9PanelFilePCc
class stringx
{
    char *characters;
    void *buffer;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

class PanelGeom;

struct panel_file_vtable
{
    char padding[0x10];
    short adjustment;
    short reserved;
    PanelGeom *(*find_object)(void *self, const stringx &name);
};

class PanelFile
{
    char padding[0x2c];
    panel_file_vtable *vtable;

public:
    PanelGeom *FindObject(const char *name);
};

__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ _$_7stringx, 0x0034D6E0");

PanelGeom *PanelFile::FindObject(const char *name)
{
    stringx temporary(name);
    panel_file_vtable *table = vtable;
    return table->find_object(
        (char *)this + table->adjustment, temporary
    );
}

// 0x001530B8 Draw__9PanelFilei
struct draw_slot {
    short adjustment; short reserved;
    void (*function)(void *,int,float);
};
struct PanelQuad {
    char padding[0x190];
    PanelQuad *next;
    char *vtable;
};
class PanelFile {
    char padding[0x28];
    PanelQuad *pquads;
public:
    void Draw(int layer);
};
void PanelFile::Draw(int layer) {
    PanelQuad *tmp=pquads;
    while (tmp) {
        draw_slot *slot=(draw_slot *)(tmp->vtable+0x40);
        slot->function((char *)tmp+slot->adjustment,layer,-1.0f);
        tmp=tmp->next;
    }
}

// 0x0014BF00 __9BurstText
extern "C" void construct_string(void *) __asm__("__7stringx");
extern const char text_string_vtable[];
extern const char burst_text_vtable[];
__asm__(".equ __7stringx,0x0034D3E0");
__asm__(".equ text_string_vtable,0x004DD500");
__asm__(".equ burst_text_vtable,0x004DCC30");
struct burst_text_layout {
    void *font;
    char text[8];
    char padding0[36];
    float scale;
    float button_scale;
    int override_alpha;
    char padding1[12];
    unsigned int color;
    const void *vtable;
    float target_scale;
    float scale_rate;
};
extern "C" burst_text_layout *construct_burst_text(burst_text_layout *self) __asm__("__9BurstText");
burst_text_layout *construct_burst_text(burst_text_layout *self)
{
    self->vtable = text_string_vtable;
    construct_string(&self->text);
    self->color = 0;
    self->vtable = burst_text_vtable;
    self->scale = 1.0f;
    self->target_scale = 1.0f;
    self->scale_rate = 1.0f;
    self->override_alpha = true;
    return self;
}

// 0x0014DE60 SetClip__9PanelQuadRC5recti
struct pointi { int x; int y; };
struct recti { pointi tl; pointi br; };
extern "C" void adjust_coords(int *, int *) __asm__("adjustCoords__H1Zi_RX01T0_v");
__asm__(".equ adjustCoords__H1Zi_RX01T0_v,0x001D6C80");
class PanelQuad {
    char padding[276];
    bool clip;
    recti clipping;
public:
    void SetClip(const recti &bounds);
};
void PanelQuad::SetClip(const recti &bounds)
{
    clip = true;
    if (&clipping != &bounds) {
        clipping.tl.x = bounds.tl.x;
        int *destination = &clipping.tl.x;
        destination[1] = bounds.tl.y;
        clipping.br.x = bounds.br.x;
        clipping.br.y = bounds.br.y;
    }
    adjust_coords(&clipping.tl.x, &clipping.tl.y);
    adjust_coords(&clipping.br.x, &clipping.br.y);
    __asm__ __volatile__("" : : : "memory");
}

// 0x00153050 Init__9PanelFileb
class PanelQuad;
struct panel_geom_vtable { char padding[56]; short adjustment; short reserved; void (*init)(void *, PanelQuad **, bool); };
class PanelGeom {
    char padding[112];
public:
    PanelGeom *next;
    char padding2[4];
    panel_geom_vtable *vtable;
};
class PanelFile {
    char padding[24];
    PanelGeom *obs;
    char padding2[12];
    PanelQuad *pquads;
public:
    void Init(bool floating);
};
void PanelFile::Init(bool floating)
{
    register PanelFile *self __asm__("$17") = this;
    PanelGeom *tmp = self->obs;
    while (tmp) {
        __asm__("" : "+r"(self));
        panel_geom_vtable *table = tmp->vtable;
        table->init((char *)tmp + table->adjustment, &self->pquads, floating);
        tmp = tmp->next;
    }
}

// 0x00149120 Update__12BouncingTextf
extern "C" void update_text(void *, float) __asm__("Update__10TextStringf");
__asm__(".equ Update__10TextStringf,0x001482F8");
class BouncingText { char padding[48]; float scale; char padding2[28]; float targetScale; float speed; public: void Update(float dt); };
void BouncingText::Update(float dt)
{
    update_text(this,dt);
    if (scale < targetScale) {
        scale += speed*dt;
        if (scale > targetScale)
            scale=targetScale;
    }
}

// 0x0014BF68 Update__9BurstTextf
extern "C" void update_text(void *, float) __asm__("Update__10TextStringf");
__asm__(".equ Update__10TextStringf,0x001482F8");
class BurstText { char padding[48]; float scale; char padding2[28]; float targetScale; float scaleRate; public: void Update(float dt); };
void BurstText::Update(float dt)
{
    update_text(this,dt);
    if (scale < targetScale) {
        scale += dt/scaleRate;
        if (scale >= targetScale)
            scale=targetScale;
    }
}

// 0x0014D078 ChangeFade__9PanelQuadbT1f
struct panel_layout { char padding[4]; int fade; float fade_alpha; float fade_timer; char padding2[112]; int drawOn; };
extern "C" void change_fade(panel_layout *self, bool start, bool fade_in, float time) __asm__("ChangeFade__9PanelQuadbT1f");
void change_fade(panel_layout *self, bool start, bool fade_in, float time)
{
    if(start) {
        self->fade_timer=time;
        if(fade_in) {
            if(self->fade != 1 || self->drawOn == false) {
                self->fade=1; self->fade_alpha=0.0f; self->drawOn=true;
            }
        } else if(self->fade != -1) {
            self->fade=-1; self->fade_alpha=1.0f;
        }
    } else self->fade=0;
}

// 0x0014DA80 SetPos__9PanelQuadffff
struct quad{char p0[140];};struct PanelQuad{char p0[28];quad q;float x1,y1,x2,y2,width,height;};extern "C" void adjust(float&,float&) __asm__("adjustCoords__H1Zf_RX01T0_v");extern "C" void set_rect(quad*,float,float,float,float) __asm__("nglSetQuadRect__FP7nglQuadffff");__asm__(".equ adjustCoords__H1Zf_RX01T0_v,0x001D6B60");__asm__(".equ nglSetQuadRect__FP7nglQuadffff,0x003A6A68");extern "C" void set_pos(PanelQuad*self,float xa,float ya,float xb,float yb) __asm__("SetPos__9PanelQuadffff");void set_pos(PanelQuad*self,float xa,float ya,float xb,float yb){self->x1=xa;self->y1=ya;self->x2=xb;self->y2=yb;adjust(self->x1,self->y1);adjust(self->x2,self->y2);self->width=self->x2-self->x1;self->height=self->y2-self->y1;set_rect(&self->q,self->x1,self->y1,self->x2,self->y2);int dead;__asm__("" : "=r"(dead));}

// 0x0014DD20 SetCenterPosQuadOnly__9PanelQuadff
struct nglQuad{char data[140];};extern "C" void adjust(float&,float&)__asm__("adjustCoords__H1Zf_RX01T0_v");extern "C" void set_rect(nglQuad*,float,float,float,float)__asm__("nglSetQuadRect__FP7nglQuadffff");__asm__(".equ adjustCoords__H1Zf_RX01T0_v,0x001D6B60");__asm__(".equ nglSetQuadRect__FP7nglQuadffff,0x003A6A68");struct PanelQuad{char pad[28];nglQuad quad;float x1,y1,x2,y2,width,height;};extern "C" void center(PanelQuad*self,float cx,float cy)__asm__("SetCenterPosQuadOnly__9PanelQuadff");void center(PanelQuad*self,float cx,float cy){adjust(cx,cy);float xa,ya,xb,yb;xa=cx-((self->x2-self->x1)/2.0f);ya=cy-((self->y2-self->y1)/2.0f);xb=cx+((self->x2-self->x1)/2.0f);yb=cy+((self->y2-self->y1)/2.0f);set_rect(&self->quad,xa,ya,xb,yb);}

// 0x001523E8 FindObject__9PanelFileRC7stringx
struct stringx{void*data;char pad[4];};struct PanelGeom;struct PanelVtable{char pad[40];short adjust;short zero;PanelGeom*(*find)(void*,const stringx&);};struct PanelGeom{char pad0[112];PanelGeom*next;char pad1[4];PanelVtable*vtable;};struct PanelFile{char pad[24];PanelGeom*obs;PanelGeom*FindObject(const stringx&)__asm__("FindObject__9PanelFileRC7stringx");};extern "C" void debug_print(const char*,...)__asm__("debug_print__FPCce");extern const char fail_format[];__asm__(".equ debug_print__FPCce,0x00120790");__asm__(".equ fail_format,0x004CF868");PanelGeom*PanelFile::FindObject(const stringx&name){PanelGeom*temp=0;PanelGeom*tmp=obs;while(tmp){PanelVtable*v=tmp->vtable;temp=v->find((char*)tmp+v->adjust,name);tmp=tmp->next;}if(temp==0)debug_print(fail_format,name.data);return temp;}

// 0x0014A7B0 Update__12TrickBoxTextf
struct StringList{char data[3016];void Update(float)__asm__("Update__10StringListf");};extern "C" void base_update(void*,float)__asm__("Update__10RandomTextf");__asm__(".equ Update__10RandomTextf,0x00149470");__asm__(".equ Update__10StringListf,0x00147B98");struct TrickBoxText{char pad0[80];int isRand;char pad1[3040];StringList box_strings[10];int box_str_count;void Update(float)__asm__("Update__12TrickBoxTextf");};void TrickBoxText::Update(float dt){base_update(this,dt);if(isRand){for(int i=0;i<box_str_count;i++)box_strings[i].Update(dt);}}

// 0x0014BDE8 makeRand__12TrickBoxText
struct StringList{char data[3016];void MakeRand();};__asm__(".equ MakeRand__10StringList,0x00147CD0");struct TrickBoxText{char pad0[60];bool checkTime;float time;char pad1[12];bool isRand;char pad2[3040];StringList box_strings[10];int box_str_count;void makeRand()__asm__("makeRand__12TrickBoxText");};void TrickBoxText::makeRand(){for(int i=0;i<box_str_count;i++)box_strings[i].MakeRand();time=2.0f;checkTime=true;isRand=true;}

// 0x00152360 SetFilename__9PanelFileG7stringx
struct stringx{char data[8];};struct GeomVtable{char pad[8];short adjust;short z;void(*destroy)(void*,int);};struct PanelGeom{char pad[112];PanelGeom*next;char pad2[4];GeomVtable*vtable;};struct PanelFile{char pad[16];stringx filename;PanelGeom*obs;char pad2[12];void*pquads;};extern "C" void assign(stringx*,const stringx*)__asm__("__as__7stringxRC7stringx");extern "C" void string_dtor(stringx*,int)__asm__("_$_7stringx");__asm__(".equ __as__7stringxRC7stringx,0x0034E0B8");__asm__(".equ _$_7stringx,0x0034D6E0");extern "C" extern "C" void set_filename(PanelFile*,stringx*)__asm__("SetFilename__9PanelFileG7stringx");void set_filename(PanelFile*self,stringx*p){assign(&self->filename,p);PanelGeom*tmp=self->obs;PanelGeom*tmp2;while(tmp){tmp2=tmp->next;if(tmp){GeomVtable*v=tmp->vtable;v->destroy((char*)tmp+v->adjust,3);}tmp=tmp2;}self->obs=0;self->pquads=0;string_dtor(p,2);asm volatile("");}

// 0x00152A30 ReadHeader__9PanelFilePUcRi
extern "C" unsigned char ReadChar(unsigned char*,int&)__asm__("ReadChar__FPUcRi");__asm__(".equ ReadChar__FPUcRi,0x001533F8");extern "C" bool read_header(unsigned char*buffer,int&index)__asm__("ReadHeader__9PanelFilePUcRi");bool read_header(unsigned char*buffer,int&index){if(ReadChar(buffer,index)==80&&ReadChar(buffer,index)==110&&ReadChar(buffer,index)==108&&ReadChar(buffer,index)==0)return true;else return false;}

// 0x0014BE70 Break__12TrickBoxText
struct stringx{char d[8];};struct vector3d{float x,y,z;};struct Font{};struct StringList{char data[3016];void Break() __asm__("Break__10StringList");};
class TextString{protected:char fields[76];public:virtual ~TextString();virtual void Update(float);virtual void Draw();virtual void setHJustify(int);virtual void setVJustify(int);virtual void setFont(Font*);virtual void setButtonScale(float);virtual void numberSpacing(int);virtual void changeText(stringx);virtual void changeScale(float);virtual void changePos(float,float);virtual void changeX(float);virtual void changeY(float);virtual void changeZ(int);virtual void ChangeFade(int,int,float);virtual void SetFade(float);virtual float getX();virtual float getY();virtual int getZ();virtual stringx getText();virtual float GetScale()const;virtual float GetButtonScale()const;virtual int GetNumberSpacing()const;virtual Font*GetFont();virtual int GetHJustify()const;virtual int GetVJustify()const;virtual void setLineSpacing(int);virtual void resetLineSpacing();virtual void UpdateInScene(int);virtual void SetLocation3D(vector3d);virtual vector3d GetLocation3D();virtual void SetBehaviorNF(float,float);virtual void SetBehavior(int);protected:virtual void Render();virtual void Render(stringx*,float,float);virtual void Render(stringx*,float,float,float*,float*,int);virtual void cons(Font*,stringx,float,float,int,float,int,int,int,unsigned);};
class RandomText:public TextString{protected:int isRand;int noFade;StringList rand_string;public:virtual void Update(float);virtual void Draw();virtual void changeText(stringx);virtual void makeRand();virtual void unmakeRand();};
class TrickBoxText:public RandomText{protected:int numLines,lineHeight,width,height;int reverse;StringList box_strings[10];int box_str_count;public:void Break() __asm__("Break__12TrickBoxText");};
__asm__(".equ Break__10StringList,0x00147EE0");
void TrickBoxText::Break(){if(!isRand)makeRand();for(int i=0;i<box_str_count;i++)box_strings[i].Break();}

// 0x001482F8 Update__10TextStringf
class TextString{public:char p[36];int fade;float fade_alpha,fade_timer;char p2[16];float time;void Update(float)__asm__("Update__10TextStringf");};void TextString::Update(float dt){if(fade==1){fade_alpha+=dt/fade_timer;if(fade_alpha>=1.0f){fade=0;fade_alpha=1.0f;}}else if(fade==-1){fade_alpha-=dt/fade_timer;if(fade_alpha<=0.0f){fade=0;fade_alpha=0.0f;}}time-=dt;if(time<0.0f)time=0.0f;}

// 0x00151CA0 Update__11PanelObjectf
struct ChildVtable{char p[72];short adj;short z;void(*call)(void*,float);};struct Child{char p[108];Child*children;char p2[8];ChildVtable*vtable;};struct Batch{char d[100];void Update(float)__asm__("Update__10PanelBatchf");};class PanelObject{public:char p[108];Child*children;char p2[22];unsigned short nbatches;Batch*batches;void Update(float)__asm__("Update__11PanelObjectf");};__asm__(".equ Update__10PanelBatchf,0x001512C8");void PanelObject::Update(float dt){for(int i=0;i<nbatches;i++)batches[i].Update(dt);if(children){ChildVtable*v=children->vtable;v->call((char*)children+v->adj,dt);}}

// 0x00151D30 Slide__11PanelObjectf
struct ChildVtable{char p[80];short adj;short z;void(*call)(void*,float);};struct Child{char p[108];Child*children;char p2[8];ChildVtable*vtable;};struct Batch{char d[100];void Slide(float)__asm__("Slide__10PanelBatchf");};class PanelObject{public:char p[108];Child*children;char p2[22];unsigned short nbatches;Batch*batches;void Slide(float)__asm__("Slide__11PanelObjectf");};__asm__(".equ Slide__10PanelBatchf,0x001512F8");void PanelObject::Slide(float dt){for(int i=0;i<nbatches;i++)batches[i].Slide(dt);if(children){ChildVtable*v=children->vtable;v->call((char*)children+v->adj,dt);}}

// 0x00153318 StartSlide__9PanelFilebf
struct VTable{char p0[72];short update_adj;short p1;void(*update)(void*,float);short slide_adj;short p2;void(*slide)(void*,float);};struct PanelGeom{char p[112];PanelGeom*next;char gap[4];VTable*vt;void Update(float t){VTable*v=vt;v->update((char*)this+v->update_adj,t);}void Slide(float x){VTable*v=vt;v->slide((char*)this+v->slide_adj,x);}};class PanelFile{int slide_state;float slide_offset;float slide_timer;float slide_max_time;char filename[8];public:PanelGeom*obs;void ForceDoneSlide(bool);void StartSlide(bool,float);bool IsSliding()const{return slide_state==1||slide_state==2;}};void PanelFile::StartSlide(bool in,float max_time){if(IsSliding())return;slide_max_time=max_time;slide_state=in?1:2;slide_timer=0.0f;slide_offset=in?640:0;PanelGeom*tmp=obs;while(tmp){tmp->Slide(slide_offset);tmp=tmp->next;}}

// 0x0014CBA8 cons__9PanelQuadG7stringx
struct stringx{char*p;void*buf;};extern "C" void assign_string(stringx*,const stringx&) __asm__("__as__7stringxRC7stringx");extern "C" void destroy_string(stringx*,int) __asm__("_$_7stringx");extern void nglInitQuad(void*) __asm__("nglInitQuad__FP7nglQuad");asm(".equ __as__7stringxRC7stringx,0x0034E0B8");asm(".equ _$_7stringx,0x0034D6E0");asm(".equ nglInitQuad__FP7nglQuad,0x003A6920");extern "C" void cons_fn(char*,stringx*) __asm__("cons__9PanelQuadG7stringx");void cons_fn(char*self,stringx*n){assign_string((stringx*)(self+368),*n);*(int*)(self+0)=0;*(int*)(self+376)=0;*(int*)(self+4)=0;*(int*)(self+148)=0;*(int*)(self+20)=0;*(int*)(self+400)=0;*(int*)(self+272)=0;*(int*)(self+132)=0;*(int*)(self+184)=0;*(int*)(self+188)=0;*(int*)(self+276)=0;*(int*)(self+280)=0;*(int*)(self+284)=0;*(int*)(self+128)=1;*(float*)(self+16)=1.0f;*(int*)(self+288)=639;*(int*)(self+292)=479;nglInitQuad(self+28);destroy_string(n,2);asm volatile("");}

// 0x00149898 changePos__7BoxTextff
#include "KS/SRC/ks/FEPanel.h"

extern "C" void adjustCoords(float &x, float &y)
    __asm__("adjustCoords__H1Zf_RX01T0_v");

__asm__(".equ changePos__10TextStringff, 0x00148430");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");

void BoxText::changePos(float posx, float posy)
{
	float dif_x, dif_y;
/*
	TextString::changePos(posx, posy);
	adjustCoords(posx, posy);
	dif_x = posx - adjusted_x;
	dif_y = posy - adjusted_y;
	real_x = posx;
	real_y = posy;
*/

	TextString::changePos(posx, posy);
	real_x = posx;
	real_y = posy;
	adjustCoords(posx, posy); // released coordinate conversion
	dif_x = posx - adjusted_x;
	dif_y = posy - adjusted_y;
	adjusted_x = posx;
	adjusted_y = posy;

	for(int i = 0; i < box_str_count; i++)
	{
		box_strings[i].x += dif_x;
		box_strings[i].y += dif_y;
	}
}

// 0x0014FDC8 Init__9PanelGeomPP9PanelQuadb
class PanelQuad;

struct vector4d {
    float x;
    float y;
    float z;
    float w;

    vector4d(const vector4d &other)
        : x(other.x), y(other.y), z(other.z), w(other.w) {}
};

struct matrix4x4 {
    vector4d x;
    vector4d y;
    vector4d z;
    vector4d w;

    matrix4x4(const matrix4x4 &other)
        : x(other.x), y(other.y), z(other.z), w(other.w) {}
};

struct panel_vtable {
    char padding[64];
    short adjustment;
    short reserved;
    void (*init)(
        void *,
        PanelQuad **,
        matrix4x4,
        bool
    );
};

struct PanelGeom {
    char padding[16];
    matrix4x4 matrix;
    char padding2[28];
    PanelGeom *children;
    char padding3[8];
    panel_vtable *vtable;

    void Init(PanelQuad **quads, bool floating);
};

void PanelGeom::Init(PanelQuad **quads, bool floating)
{
    PanelGeom *self = this;
    PanelGeom *child = self->children;
    if (child)
    {
        child->vtable->init(
            reinterpret_cast<char *>(child) +
                child->vtable->adjustment,
            quads,
            self->matrix,
            floating
        );
    }
    int dead;
    __asm__("" : "=r"(dead));
}

// Source implementation boundary.
// 0x001D86C0 setFont__10TextStringP4Font
#include "KS/SRC/ks/FEPanel.h"

void TextString::setFont(Font* f) {
    font = f;
}

// 0x001D86C8 setButtonScale__10TextStringf
#include "KS/SRC/ks/FEPanel.h"

void TextString::setButtonScale(float bs) {
    button_scale = bs;
}

// 0x001D86D0 numberSpacing__10TextStringb
#include "KS/SRC/ks/FEPanel.h"

void TextString::numberSpacing(bool on) {
    even_number_spacing = on;
}

// 0x001D86D8 changeScale__10TextStringf
#include "KS/SRC/ks/FEPanel.h"

void TextString::changeScale(float s) {
    scale = s;
}

// 0x001D86E0 changeZ__10TextStringi
#include "KS/SRC/ks/FEPanel.h"

void TextString::changeZ(int value) {
    z = value;
}

// 0x001D86E8 SetFade__10TextStringf
#include "KS/SRC/ks/FEPanel.h"

void TextString::SetFade(float amount) { fade = 2; fade_alpha = amount; }

// 0x001D8728 GetScale__C10TextString
#include "KS/SRC/ks/FEPanel.h"

float TextString::GetScale() const {
    return scale;
}

// 0x001D8730 GetButtonScale__C10TextString
#include "KS/SRC/ks/FEPanel.h"

float TextString::GetButtonScale() const {
    return button_scale;
}

// 0x001D8738 GetNumberSpacing__C10TextString
#include "KS/SRC/ks/FEPanel.h"

bool TextString::GetNumberSpacing() const {
    return even_number_spacing;
}

// 0x001D8740 GetFont__10TextString
#include "KS/SRC/ks/FEPanel.h"

Font* TextString::GetFont() {
    return font;
}

// 0x001D8748 GetHJustify__C10TextString
#include "KS/SRC/ks/FEPanel.h"

Font::HORIZJUST TextString::GetHJustify() const {
    return hJustify;
}

// 0x001D8750 GetVJustify__C10TextString
#include "KS/SRC/ks/FEPanel.h"

Font::VERTJUST TextString::GetVJustify() const {
    return vJustify;
}

// 0x001D8758 setLineSpacing__10TextStringi
#include "KS/SRC/ks/FEPanel.h"

void TextString::setLineSpacing(int new_spacing) {
}

// 0x001D8760 resetLineSpacing__10TextString
#include "KS/SRC/ks/FEPanel.h"

void TextString::resetLineSpacing() {
}

// 0x001D8768 UpdateInScene__10TextStringb
#include "KS/SRC/ks/FEPanel.h"

void TextString::UpdateInScene(bool ignore_scale) {
}

// 0x001D8770 SetLocation3D__10TextStringG8vector3d
#include "KS/SRC/ks/FEPanel.h"

void TextString::SetLocation3D(vector3d loc) {
}

// 0x001D8778 GetLocation3D__10TextString
#include "KS/SRC/ks/FEPanel.h"

vector3d TextString::GetLocation3D() { return vector3d(0.0f, 0.0f, 0.0f); }

// 0x001D8790 SetBehaviorNF__10TextStringff
#include "KS/SRC/ks/FEPanel.h"

void TextString::SetBehaviorNF(float r_x, float r_y) {
}

// 0x001D8798 SetBehavior__10TextStringb
#include "KS/SRC/ks/FEPanel.h"

void TextString::SetBehavior(bool nfb) {
}

// 0x001D88B0 getLineNum__15MultiLineString
#include "KS/SRC/ks/FEPanel.h"

int MultiLineString::getLineNum() {
    return line_num;
}

// 0x001D88E8 setFont__15MultiLineStringP4Font
#include "KS/SRC/ks/FEPanel.h"

void MultiLineString::setFont(Font* value) {
    fonts[0] = value;
    font = value;
}

// 0x001D8B80 unmakeRand__10RandomText
#include "KS/SRC/ks/FEPanel.h"

void RandomText::unmakeRand() {
    isRand = false;
}

// 0x001D8C78 changeScale__7BoxTextf
#include "KS/SRC/ks/FEPanel.h"

void BoxText::changeScale(float s) {
    real_scale = s;
}

// 0x001D8C80 SetBehavior__7BoxTextb
#include "KS/SRC/ks/FEPanel.h"

void BoxText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}

// 0x001D8DF8 unmakeRand__12TrickBoxText
#include "KS/SRC/ks/FEPanel.h"

void TrickBoxText::unmakeRand() {
    isRand = false;
}

// 0x001D91D0 changeScale__12FloatingTextf
#include "KS/SRC/ks/FEPanel.h"

void FloatingText::changeScale(float s) {
    real_scale = s;
}

// 0x001D91F8 SetBehavior__12FloatingTextb
#include "KS/SRC/ks/FEPanel.h"

void FloatingText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}

// 0x001D9AB0 TurnOn__9PanelQuadb
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::TurnOn(bool on) {
    drawOn = on;
}

// 0x001D9AC0 SetLayer__9PanelQuadi
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetLayer(int value) {
    layer = value;
}

// 0x001D9AC8 Rotate__9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::Rotate(float amount) { rotate = 1; rotation = amount; }

// 0x001D9AE8 SetColor__9PanelQuadffff
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetColor(float red, float green, float blue, float alpha) { r = red; g = green; b = blue; a = alpha; }

// 0x001D9B90 IsOn__C9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

bool PanelQuad::IsOn() const {
    return drawOn;
}

// 0x001D9B98 GetWidth__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

float PanelQuad::GetWidth() {
    return width;
}

// 0x001D9BA0 GetHeight__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

float PanelQuad::GetHeight() {
    return height;
}

// 0x001D9BA8 GetWidthA__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

float PanelQuad::GetWidthA() {
    return width_a;
}

// 0x001D9BB0 GetHeightA__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

float PanelQuad::GetHeightA() {
    return height_a;
}

// 0x001D9BB8 SetAlpha__9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetAlpha(float alpha) {
    a = alpha;
}

// 0x001D9BE0 SetFade__9PanelQuadiff
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetFade(int mode, float alpha, float timer) { fade = mode; fade_alpha = alpha; fade_timer = timer; }

// 0x001D9BF0 GetTexture__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

nglTexture* PanelQuad::GetTexture() {
    return quad.Tex;
}

// 0x001D9BF8 SetUV__9PanelQuadffffffff
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::SetUV(float u1, float u2, float u3, float u4, float v1, float v2, float v3, float v4) {
}

// 0x001D9C00 getQuad__9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

nglQuad* PanelQuad::getQuad() {
    return &quad;
}

// 0x001D9C08 GetRotation__C9PanelQuad
#include "KS/SRC/ks/FEPanel.h"

float PanelQuad::GetRotation() const {
    return rotation;
}

// 0x001D9DC0 SetWidth__10FloatingPQf
#include "KS/SRC/ks/FEPanel.h"

void FloatingPQ::SetWidth(float value) {
    width = value;
}

// 0x001D9DC8 SetHeight__10FloatingPQf
#include "KS/SRC/ks/FEPanel.h"

void FloatingPQ::SetHeight(float value) {
    height = value;
}

// 0x001D9E60 GetQuad__9PanelGeom
#include "KS/SRC/ks/FEPanel.h"

PanelQuad* PanelGeom::GetQuad() {
    return 0;
}

// 0x001D9F28 Kind__C11PanelObject
#include "KS/SRC/ks/FEPanel.h"

PanelGeomKind PanelObject::Kind() const {
    return PanelGeomObject;
}

// 0x001DA000 Kind__C9PanelText
#include "KS/SRC/ks/FEPanel.h"

PanelGeomKind PanelText::Kind() const {
    return PanelGeomText;
}

// 0x001DA108 Kind__C16PanelSkaterModel
#include "KS/SRC/ks/FEPanel.h"

PanelGeomKind PanelSkaterModel::Kind() const {
    return PanelGeomSkater;
}

// 0x001DA1C8 Kind__C16PanelObjectModel
#include "KS/SRC/ks/FEPanel.h"

PanelGeomKind PanelObjectModel::Kind() const {
    return PanelGeomObjectView;
}

// 0x001DA288 Kind__C10PanelMovie
#include "KS/SRC/ks/FEPanel.h"

PanelGeomKind PanelMovie::Kind() const {
    return PanelGeomMovie;
}

// 0x001D9BC0 GetFade__9PanelQuadRiRfT2
#include "KS/SRC/ks/FEPanel.h"

void PanelQuad::GetFade(int &f, float &alpha, float &timer) { f = fade; alpha = fade_alpha, timer = fade_timer; }

// 0x001DA0E8 Load__16PanelSkaterModelPUcRi
#include "KS/SRC/ks/FEPanel.h"

bool PanelSkaterModel::Load(unsigned char *buffer, int &index) { return PanelGeom::Load(buffer, index); }

// 0x001DA1A8 Load__16PanelObjectModelPUcRi
#include "KS/SRC/ks/FEPanel.h"

bool PanelObjectModel::Load(unsigned char *buffer, int &index) { return PanelGeom::Load(buffer, index); }

// 0x001DA268 Load__10PanelMoviePUcRi
#include "KS/SRC/ks/FEPanel.h"

bool PanelMovie::Load(unsigned char *buffer, int &index) { return PanelGeom::Load(buffer, index); }

// 0x001D91D8 GetLocation3D__12FloatingText
#include "KS/SRC/ks/FEPanel.h"

vector3d FloatingText::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }

// 0x001D9DF8 GetLocation3D__10FloatingPQ
#include "KS/SRC/ks/FEPanel.h"

vector3d FloatingPQ::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }

// 0x001D9DD0 GetPos__10FloatingPQRfN31
#include "KS/SRC/ks/FEPanel.h"

void FloatingPQ::GetPos(float &x1, float &y1, float &x2, float &y2) { x1 = x1_const; x2 = x2_const; y1 = y1_const; y2 = y2_const; }

// 0x001D9B28 SetZ__9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"

void nglSetQuadZ(nglQuad *quad, float z);
__asm__(".equ nglSetQuadZ__FP7nglQuadf, 0x003A6A90");
void PanelQuad::SetZ(float value) { z = value; void (*set_z)(nglQuad *, float) = nglSetQuadZ; set_z(&quad, value); }

// 0x001D86F8 getText__10TextString
#include "KS/SRC/ks/FEPanel.h"

__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
stringx TextString::getText() { return text; }

// 0x001D88B8 resetLineSpacing__15MultiLineString
#include "KS/SRC/ks/FEPanel.h"

void reset_line_spacing(MultiLineString *text)
    __asm__("resetLineSpacing__15MultiLineString");

void reset_line_spacing(MultiLineString *text) {
    text->setLineSpacing(-1);
}

// 0x001D8C18 OnDown__7BoxTexti
#include "KS/SRC/ks/FEPanel.h"

void BoxText::OnDown(int controller) {
    scroll(false, 1);
}

// 0x001D8C48 OnUp__7BoxTexti
#include "KS/SRC/ks/FEPanel.h"

void BoxText::OnUp(int controller) {
    scroll(true, 1);
}

// 0x001D87A0 Render__10TextString
#include "KS/SRC/ks/FEPanel.h"

void TextString::Render()
{
    Render(&text, x, y);
}

// 0x001D8618 __tf10TextString
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512038"); asm(".equ type_name, 0x004DD7A0");
extern "C" void *GetTypeInfo() __asm__("__tf10TextString");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001D9A10 __tf9PanelQuad
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512040"); asm(".equ type_name, 0x004DD860");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelQuad");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001D9B50 SetUV__9PanelQuadffff
#include "KS/SRC/ks/FEPanel.h"

extern void nglSetQuadUV(nglQuad *, float, float, float, float);
asm(".equ nglSetQuadUV__FP7nglQuadffff, 0x003A69C0");
extern "C" void set_quad_uv(
    nglQuad *quad,
    float u1,
    float v1,
    float u2,
    float v2
) __asm__("nglSetQuadUV__FP7nglQuadffff");

void PanelQuad::SetUV(float ua, float va, float ub, float vb)
{
    u1 = ua;
    u2 = ub;
    v1 = va;
    v2 = vb;
    void (*set_uv)(nglQuad *, float, float, float, float) =
        set_quad_uv;
    set_uv(&quad, u1, v1, u2, v2);
}

// 0x001D9E18 __tf9PanelGeom
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512048"); asm(".equ type_name, 0x004DD890");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelGeom");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001D9E68 __tf10PanelBatch
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512050"); asm(".equ type_name, 0x004DD8A0");
extern "C" void *GetTypeInfo() __asm__("__tf10PanelBatch");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001DA008 __tf9PanelFile
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512058"); asm(".equ type_name, 0x004DD8D0");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelFile");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }

// 0x001D8668 _$_10TextString
extern "C" void StringDtor(void *self, int deleting)
    __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory)
    __asm__("__builtin_delete");
extern const char text_string_vtable[];

__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");

struct text_string_layout
{
    char field0[4];
    char text[8];
    char padding[0x40];
    const void *vtable;
};

extern "C" void TextStringDtor(void *self, int deleting)
    __asm__("_$_10TextString");

void TextStringDtor(void *self, int deleting)
{
    text_string_layout *text = (text_string_layout *)self;
    text->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1)
    {
        BuiltinDelete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}

// 0x001D87D8 _$_15MultiLineString
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");
struct text_layout { char field0[4]; char text[8]; char padding[0x40]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_15MultiLineString");
void TargetDtor(void *self, int deleting) {
    ((text_layout *)self)->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D88F8 _$_12BouncingText
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");
struct text_layout { char field0[4]; char text[8]; char padding[0x40]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_12BouncingText");
void TargetDtor(void *self, int deleting) {
    ((text_layout *)self)->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D89C8 _$_9FlashText
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");
struct text_layout { char field0[4]; char text[8]; char padding[0x40]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_9FlashText");
void TargetDtor(void *self, int deleting) {
    ((text_layout *)self)->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D8E08 _$_9BurstText
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");
struct text_layout { char field0[4]; char text[8]; char padding[0x40]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_9BurstText");
void TargetDtor(void *self, int deleting) {
    ((text_layout *)self)->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D90D0 _$_12FloatingText
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ text_string_vtable, 0x004DD500");
struct text_layout { char field0[4]; char text[8]; char padding[0x40]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_12FloatingText");
void TargetDtor(void *self, int deleting) {
    ((text_layout *)self)->vtable = text_string_vtable;
    StringDtor((char *)self + 4, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D9A50 _$_9PanelQuad
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char panel_quad_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ panel_quad_vtable, 0x004DC738");
struct panel_layout { char padding0[0x170]; char name[8]; char padding1[0x1c]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_9PanelQuad");
void TargetDtor(void *self, int deleting) {
    ((panel_layout *)self)->vtable = panel_quad_vtable;
    StringDtor((char *)self + 0x170, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D9C10 _$_10PanelQuad4
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char panel_quad_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ panel_quad_vtable, 0x004DC738");
struct panel_layout { char padding0[0x170]; char name[8]; char padding1[0x1c]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_10PanelQuad4");
void TargetDtor(void *self, int deleting) {
    ((panel_layout *)self)->vtable = panel_quad_vtable;
    StringDtor((char *)self + 0x170, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D9CF0 _$_10FloatingPQ
extern "C" void StringDtor(void *self, int deleting) __asm__("_$_7stringx");
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
extern const char panel_quad_vtable[];
__asm__(".equ _$_7stringx, 0x0034D6E0");
__asm__(".equ __builtin_delete, 0x002AC6B0");
__asm__(".equ panel_quad_vtable, 0x004DC738");
struct panel_layout { char padding0[0x170]; char name[8]; char padding1[0x1c]; const void *vtable; };
extern "C" void TargetDtor(void *self, int deleting) __asm__("_$_10FloatingPQ");
void TargetDtor(void *self, int deleting) {
    ((panel_layout *)self)->vtable = panel_quad_vtable;
    StringDtor((char *)self + 0x170, 2);
    if (deleting & 1) { BuiltinDelete(self); __asm__ __volatile__("" : : : "memory"); }
}

// 0x001D8A98 _$_10RandomText
extern "C" void destroy_string(void *, int) __asm__("_$_7stringx");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char text_string_vtable[];
__asm__(".equ _$_7stringx,0x0034D6E0");
__asm__(".equ __builtin_delete,0x002AC6B0");
__asm__(".equ text_string_vtable,0x004DD500");
struct random_text_layout { char padding[4]; char text[8]; char padding2[64]; const void *vtable; char padding3[8]; char random_text[8]; };
extern "C" void destroy_random_text(random_text_layout *self, int deleting) __asm__("_$_10RandomText");
void destroy_random_text(random_text_layout *self, int deleting)
{
    destroy_string(&self->random_text, 2);
    self->vtable = text_string_vtable;
    destroy_string(&self->text, 2);
    if (deleting & 1) {
        object_delete(self);
        __asm__ __volatile__("" : : : "memory");
    }
}
