// FEPanel inline definitions extracted by generated one-function shims.


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

// 0x001DA050 _$_16PanelSkaterModel
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelSkaterModelDtor(void *self) __asm__("_$_16PanelSkaterModel");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelSkaterModelDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001DA0E8 Load__16PanelSkaterModelPUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelSkaterModel : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelSkaterModel::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x001DA110 _$_16PanelObjectModel
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelObjectModelDtor(void *self) __asm__("_$_16PanelObjectModel");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelObjectModelDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001DA1A8 Load__16PanelObjectModelPUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelObjectModel : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelObjectModel::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x001DA1D0 _$_10PanelMovie
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelMovieDtor(void *self) __asm__("_$_10PanelMovie");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelMovieDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001DA268 Load__10PanelMoviePUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelMovie : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelMovie::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }

// 0x001D91D8 GetLocation3D__12FloatingText
struct vector3d { float x; float y; float z; vector3d(float px, float py, float pz) : x(px), y(py), z(pz) {} };
class FloatingText { char padding[0xb0]; float location_3d[3]; public: vector3d GetLocation3D(); };
vector3d FloatingText::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }

// 0x001D9DF8 GetLocation3D__10FloatingPQ
struct vector3d { float x; float y; float z; vector3d(float px, float py, float pz) : x(px), y(py), z(pz) {} };
class FloatingPQ { char padding[0x1a0]; float location_3d[3]; public: vector3d GetLocation3D(); };
vector3d FloatingPQ::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }

// 0x001D9DD0 GetPos__10FloatingPQRfN31
class FloatingPQ { public: char padding[0x1d0]; float x1_const; float x2_const; float y1_const; float y2_const; };
extern "C" void GetPosAlias(FloatingPQ *self, float &x1, float &y1, float &x2, float &y2) __asm__("GetPos__10FloatingPQRfN31");
void GetPosAlias(FloatingPQ *self, float &x1, float &y1, float &x2, float &y2) { x1 = self->x1_const; x2 = self->x2_const; y1 = self->y1_const; y2 = self->y2_const; }

// 0x001D9B28 SetZ__9PanelQuadf
#include "KS/SRC/ks/FEPanel.h"

void nglSetQuadZ(nglQuad *quad, float z);
__asm__(".equ nglSetQuadZ__FP7nglQuadf, 0x003A6A90");
void PanelQuad::SetZ(float value) { z = value; nglSetQuadZ(&quad, value); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x001D86F8 getText__10TextString
#include "KS/SRC/ks/FEPanel.h"

__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
stringx TextString::getText() { return text; }

// 0x001D88B8 resetLineSpacing__15MultiLineString
struct multiline_vtable { char padding[0xd8]; short adjustment; short padding2; void (*set_line_spacing)(void *self, int spacing); };
class MultiLineString { char padding[0x4c]; multiline_vtable *vtable; public: void resetLineSpacing(); };
void MultiLineString::resetLineSpacing() { multiline_vtable *table = vtable; table->set_line_spacing((char *)this + table->adjustment, -1); }

// 0x001D8C18 OnDown__7BoxTexti
struct box_text_vtable {
    char padding[0x140];
    short adjustment;
    short padding2;
    bool (*scroll)(void *self, bool up, int lines);
};

class BoxText {
    char padding[0x4c];
    box_text_vtable *vtable;

public:
    void OnDown(int controller);
};

void BoxText::OnDown(int controller) {
    box_text_vtable *table = vtable;
    table->scroll((char *)this + table->adjustment, false, 1);
}

// 0x001D8C48 OnUp__7BoxTexti
struct box_text_vtable {
    char padding[0x140];
    short adjustment;
    short padding2;
    bool (*scroll)(void *self, bool up, int lines);
};

class BoxText {
    char padding[0x4c];
    box_text_vtable *vtable;

public:
    void OnUp(int controller);
};

void BoxText::OnUp(int controller) {
    box_text_vtable *table = vtable;
    table->scroll((char *)this + table->adjustment, true, 1);
}

// 0x001D87A0 Render__10TextString
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

class TextString {
    char padding0[4];
    stringx text;
    float x;
    float y;
    char padding1[0x38];
    text_vtable *vtable;

public:
    void Render();
};

void TextString::Render()
{
    text_vtable *table = vtable;
    table->render(
        (char *)this + table->adjustment,
        &text,
        x,
        y
    );
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

#include "decomp_annotations.h"
extern void nglSetQuadUV(nglQuad *, float, float, float, float);
asm(".equ nglSetQuadUV__FP7nglQuadffff, 0x003A69C0");
void PanelQuad::SetUV(float ua, float va, float ub, float vb)
{
    u1 = ua;
    u2 = ub;
    v1 = va;
    v2 = vb;
    nglSetQuadUV(&quad, u1, v1, u2, v2);
    KELLY_DECOMP_COMPILER_BARRIER();
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

// 0x001D9B00 SetColor__9PanelQuadG5color
struct color {
    float r;
    float g;
    float b;
    float a;
};

struct PanelQuad {
    char padding[0x98];
    color quad_color;
};

extern "C" void SetColorAlias(
    PanelQuad *self,
    const color *value
) __asm__("SetColor__9PanelQuadG5color");

void SetColorAlias(PanelQuad *self, const color *value)
{
    register float blue __asm__("$f3");
    __asm__ __volatile__(
        "lwc1 $f0,12($5)\n"
        "lwc1 $f1,0($5)\n"
        "lwc1 $f2,4($5)\n"
        "lwc1 %0,8($5)\n"
        "swc1 $f0,164($4)\n"
        "swc1 $f1,152($4)\n"
        "swc1 $f2,156($4)"
        : "=f"(blue)
        :
        : "$f0", "$f1", "$f2", "memory");
    self->quad_color.b = blue;
}
