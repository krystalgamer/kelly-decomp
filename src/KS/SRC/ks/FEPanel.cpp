// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00148270)
// 0x00148270 setHJustify__10TextStringQ24Font9HORIZJUST
class Font {
public:
    enum HORIZJUST {
        HORIZJUST_PLACEHOLDER
    };
};

class TextString {
    char padding[0x18];
    Font::HORIZJUST hJustify;

public:
    void setHJustify(Font::HORIZJUST justify);
};

void TextString::setHJustify(Font::HORIZJUST justify) {
    hJustify = justify;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00148278)
// 0x00148278 setVJustify__10TextStringQ24Font8VERTJUST
class Font {
public:
    enum VERTJUST {
        VERTJUST_PLACEHOLDER
    };
};

class TextString {
    char padding[0x1C];
    Font::VERTJUST vJustify;

public:
    void setVJustify(Font::VERTJUST justify);
};

void TextString::setVJustify(Font::VERTJUST justify) {
    vJustify = justify;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001482F0)
// 0x001482F0 getZ__10TextString
class TextString {
    char padding[0x14];
    int z;

public:
    int getZ();
};

int TextString::getZ() {
    return z;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00148AC0)
// 0x00148AC0 addFont__15MultiLineStringiP4Font
class Font;
class MultiLineString { char padding[0x58]; Font* fonts[20]; public: void addFont(int index, Font* font); };
void MultiLineString::addFont(int index, Font* font) { fonts[index] = font; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00149108)
// 0x00149108 Bounce__12BouncingTextff
class BouncingText { char padding_to_scale[0x30]; float scale; char padding_to_target[0x1C]; float targetScale; float speed; public: void Bounce(float bounceScale, float bounceTime); };
void BouncingText::Bounce(float bounceScale, float bounceTime) { targetScale = bounceScale; speed = targetScale / bounceTime; scale = 0.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014CB90)
// 0x0014CB90 SetBehaviorNF__12FloatingTextff
class FloatingText { char padding[0xD4]; float real_x; float real_y; bool non_floating_behavior; public: void SetBehaviorNF(float x, float y); };
void FloatingText::SetBehaviorNF(float x, float y) { non_floating_behavior = true; real_x = x; real_y = y; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014D068)
// 0x0014D068 SetFade__9PanelQuadf
class PanelQuad { char padding[0x4]; int fade; float fade_alpha; public: void SetFade(float amount); };
void PanelQuad::SetFade(float amount) { fade = 2; fade_alpha = amount; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014DEC8)
// 0x0014DEC8 SetClip__9PanelQuadb
class PanelQuad {
    char padding[0x114];
    bool clip;

public:
    void SetClip(bool enabled);
};

void PanelQuad::SetClip(bool enabled) {
    clip = enabled;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014FAB8)
// 0x0014FAB8 cons__9PanelGeom
class PanelGeom { char padding[0x6C]; PanelGeom* children; PanelGeom* next; PanelGeom* parent; public: void cons(); };
void PanelGeom::cons() {
    children = 0;
    next = 0;
    parent = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001521F0)
// 0x001521F0 Draw__9PanelTextf
class PanelText {
public:
    void Draw(float alpha);
};

void PanelText::Draw(float alpha) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001533F8)
// 0x001533F8 ReadChar__FPUcRi
unsigned char ReadChar(unsigned char* buffer, int& index) {
    unsigned char result = buffer[index];
    ++index;
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00151768)
// 0x00151768 GetQuad__11PanelObject
class PanelQuad;
struct PanelBatch { char padding[0x48]; PanelQuad* pq; };
class PanelObject { char padding[0x84]; unsigned short size; unsigned short nbatches; PanelBatch* batches; public: PanelQuad* GetQuad(); };
PanelQuad* PanelObject::GetQuad() {
    if (size == 0)
        return 0;
    return batches[0].pq;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00148458)
// 0x00148458 changeX__10TextStringf
extern "C" void AdjustCoords(float &x, float &y) __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
class TextString { char padding[0xc]; float x; float y; public: void changeX(float position); };
void TextString::changeX(float position) { float other; x = position; AdjustCoords(x, other); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00148480)
// 0x00148480 changeY__10TextStringf
extern "C" void AdjustCoords(float &x, float &y) __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
class TextString { char padding[0xc]; float x; float y; public: void changeY(float position); };
void TextString::changeY(float position) { float other; y = position; AdjustCoords(other, y); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00148430)
// 0x00148430 changePos__10TextStringff
extern "C" void AdjustCoords(float &x, float &y) __asm__("adjustCoords__H1Zf_RX01T0_v");
__asm__(".equ adjustCoords__H1Zf_RX01T0_v, 0x001D6B60");
class TextString { char padding[0xc]; float x; float y; public: void changePos(float px, float py); };
void TextString::changePos(float px, float py) { x = px; y = py; AdjustCoords(x, y); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014A788)
// 0x0014A788 SetLocation3D__7BoxTextG8vector3d
struct vector3d { float x; float y; float z; };
class BoxText { public: char padding[0x90]; float location_3d[4]; };
extern "C" void SetLocationAlias(BoxText *self, const vector3d *location) __asm__("SetLocation3D__7BoxTextG8vector3d");
void SetLocationAlias(BoxText *self, const vector3d *location) { self->location_3d[0] = location->x; self->location_3d[1] = location->y; self->location_3d[2] = location->z; self->location_3d[3] = 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014C918)
// 0x0014C918 getPercentage__13PreformatText
class PreformatText { char padding[0x54]; int start_line; int num_vis_lines; char padding2[4]; int actual_lines; public: float getPercentage(); };
float PreformatText::getPercentage() { register int actual __asm__("$2") = actual_lines; __asm__ volatile("" : "+r"(actual)); register float numerator __asm__("$f1") = (float)start_line; __asm__ volatile("" : "+f"(numerator)); int total_lines = actual - num_vis_lines; register float denominator __asm__("$f0"); __asm__ volatile("mtc1 %1,$f0
	nop
	cvt.s.w $f0,$f0" : "=f"(denominator) : "r"(total_lines)); return numerator / denominator; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014CA20)
// 0x0014CA20 SetLocation3D__12FloatingTextG8vector3d
struct vector3d { float x; float y; float z; };
class FloatingText { public: char padding[0xb0]; float location_3d[4]; };
extern "C" void SetLocationAlias(FloatingText *self, const vector3d *location) __asm__("SetLocation3D__12FloatingTextG8vector3d");
void SetLocationAlias(FloatingText *self, const vector3d *location) { self->location_3d[0] = location->x; self->location_3d[1] = location->y; self->location_3d[2] = location->z; self->location_3d[3] = 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014F730)
// 0x0014F730 SetLocation3D__10FloatingPQG8vector3d
struct vector3d { float x; float y; float z; };
class FloatingPQ { public: char padding[0x1a0]; float location_3d[4]; };
extern "C" void SetLocationAlias(FloatingPQ *self, const vector3d *location) __asm__("SetLocation3D__10FloatingPQG8vector3d");
void SetLocationAlias(FloatingPQ *self, const vector3d *location) { self->location_3d[0] = location->x; self->location_3d[1] = location->y; self->location_3d[2] = location->z; self->location_3d[3] = 1.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001512C8)
// 0x001512C8 Update__10PanelBatchf
struct panel_material_vtable { char padding[0x38]; short adjustment; short padding2; void (*update)(void *self, float dt); };
struct panel_material { char padding[0x194]; panel_material_vtable *vtable; };
class PanelBatch { char padding[0x48]; panel_material *material; public: void Update(float dt); };
void PanelBatch::Update(float dt) { panel_material_vtable *table = material->vtable; table->update((char *)material + table->adjustment, dt); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00153450)
// 0x00153450 ReadShort__FPUcRi
short ReadShort(unsigned char *buffer, int &index) { short result; result = buffer[index] | (buffer[index + 1] << 8); index += 2; return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014DAF8)
// 0x0014DAF8 SetPos__9PanelQuadffffffff
struct panel_quad_vtable {
    char padding[0x70];
    short adjustment;
    short padding2;
    void (*set_pos)(
        void *self,
        float x1,
        float y1,
        float x2,
        float y2
    );
};

class PanelQuad {
    char padding[0x194];
    panel_quad_vtable *vtable;

public:
    void SetPos(
        float xa,
        float ya,
        float xb,
        float yb,
        float xc,
        float yc,
        float xd,
        float yd
    );
};

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
    panel_quad_vtable *table = vtable;
    table->set_pos(
        (char *)this + table->adjustment,
        xa,
        ya,
        xc,
        yc
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014F700)
// 0x0014F700 SetBehavior__10FloatingPQb
extern "C" void PanelQuadSetPos(
    void *self,
    float x1,
    float y1,
    float x2,
    float y2
) __asm__("SetPos__9PanelQuadffff");
__asm__(".equ SetPos__9PanelQuadffff, 0x0014DA80");

class FloatingPQ {
    char padding[0x1d0];
    float x1_const;
    float x2_const;
    float y1_const;
    float y2_const;
    bool non_floating_behavior;

public:
    void SetBehavior(bool enabled);
};

void FloatingPQ::SetBehavior(bool enabled) {
    non_floating_behavior = enabled;
    if (enabled) {
        PanelQuadSetPos(
            this,
            x1_const,
            y1_const,
            x2_const,
            y2_const
        );
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014C5D0)
// 0x0014C5D0 DrawLine__13PreformatTextiff
struct stringx {
    void *chars;
    void *buffer;
};

struct text_vtable {
    char padding[0x118];
    short adjustment;
    short padding2;
    void (*render)(void *self, stringx *text, float x, float y);
};

class PreformatText {
    char padding[0x4C];
    text_vtable *vtable;
    stringx *file_head;

public:
    void DrawLine(int line_num, float x, float y);
};

void PreformatText::DrawLine(int line_num, float x, float y)
{
    text_vtable *table = vtable;
    table->render(
        (char *)this + table->adjustment,
        &file_head[line_num],
        x,
        y
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0014FC78)
// 0x0014FC78 Reload__9PanelGeom
struct panel_geom_vtable {
    char padding[0x20];
    short adjustment;
    short padding2;
    void (*reload)(void *self);
};

struct panel_geom_child {
    char padding[0x78];
    panel_geom_vtable *vtable;
};

class PanelGeom {
    char padding[0x6C];
    panel_geom_child *children;

public:
    void Reload();
};

void PanelGeom::Reload()
{
    panel_geom_child *child = children;
    if (child) {
        panel_geom_vtable *table = child->vtable;
        table->reload((char *)child + table->adjustment);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00150030)
// 0x00150030 Update__9PanelGeomf
struct panel_geom_vtable {
    char padding[0x48];
    short adjustment;
    short padding2;
    void (*update)(void *self, float time);
};

struct panel_geom_child {
    char padding[0x78];
    panel_geom_vtable *vtable;
};

class PanelGeom {
    char padding[0x6C];
    panel_geom_child *children;

public:
    void Update(float time);
};

void PanelGeom::Update(float time)
{
    panel_geom_child *child = children;
    if (child) {
        panel_geom_vtable *table = child->vtable;
        table->update((char *)child + table->adjustment, time);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00150068)
// 0x00150068 Slide__9PanelGeomf
struct panel_geom_vtable {
    char padding[0x50];
    short adjustment;
    short padding2;
    void (*slide)(void *self, float offset);
};

struct panel_geom_child {
    char padding[0x78];
    panel_geom_vtable *vtable;
};

class PanelGeom {
    char padding[0x6C];
    panel_geom_child *children;

public:
    void Slide(float offset);
};

void PanelGeom::Slide(float offset)
{
    panel_geom_child *child = children;
    if (child) {
        panel_geom_vtable *table = child->vtable;
        table->slide((char *)child + table->adjustment, offset);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001533B8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001495B0)
// 0x001495B0 makeRand__10RandomText
class StringList { public: void MakeRand(); };
asm(".equ MakeRand__10StringList, 0x00147CD0");
class RandomText { char padding[0x3c]; bool checkTime; float time; char padding2[0xc]; bool isRand; char padding3[4]; StringList rand_string; public: void makeRand(); };
void RandomText::makeRand()
{
    rand_string.MakeRand();
    time = 2.0f;
    checkTime = true;
    isRand = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00153410)
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
#endif


#if defined(KELLY_DECOMP_FUNCTION_00148BC0)
// 0x00148BC0 setLineSpacing__15MultiLineStringi
struct Glyph { char padding[16]; int cell_height; };
class Font { public: Glyph* getGlyph(char); };
class MultiLineString {
    Font* font;
    char padding[0x4c];
    int vSpacing;
public: void setLineSpacing(const int new_spacing);
};
__asm__(".equ getGlyph__4Fontc, 0x0033BD68");
void MultiLineString::setLineSpacing(const int new_spacing)
{
    if(new_spacing == -1)
        vSpacing = font->getGlyph('A')->cell_height;
    else
        vSpacing = new_spacing;
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00149470)
// 0x00149470 Update__10RandomTextf
typedef float time_value_t;
class TextString { char padding[0x50]; public: void Update(time_value_t); };
class StringList { public: void Update(time_value_t); };
class RandomText : public TextString {
    bool isRand;
    char padding2[4];
    StringList rand_string;
public: void Update(time_value_t);
};
__asm__(".equ Update__10TextStringf, 0x001482F8");
__asm__(".equ Update__10StringListf, 0x00147B98");
void RandomText::Update(time_value_t time_inc)
{
    TextString::Update(time_inc);
    if (isRand)
    {
        rand_string.Update(time_inc);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_0014F5A8)
// 0x0014F5A8 SetConstantScale__10FloatingPQf
class PanelQuad {
    char padding[0x194];
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void SetScale(float);
};
class FloatingPQ : public PanelQuad {
    char padding2[0x30];
    float width_f;
    float height_f;
public: void SetConstantScale(float);
};
void FloatingPQ::SetConstantScale(float s)
{
    width_f = width_f*s;
    height_f = height_f*s;
    SetScale(s);
}
#endif
// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001495F0)
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
#endif
