// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001D86C0)
// 0x001D86C0 setFont__10TextStringP4Font
class Font;

class TextString {
    Font* font;
public:
    void setFont(Font* f);
};

void TextString::setFont(Font* f) {
    font = f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86C8)
// 0x001D86C8 setButtonScale__10TextStringf
class TextString {
    char padding[0x34];
    float button_scale;
public:
    void setButtonScale(float bs);
};

void TextString::setButtonScale(float bs) {
    button_scale = bs;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86D0)
// 0x001D86D0 numberSpacing__10TextStringb
class TextString {
    char padding[0x20];
    bool even_number_spacing;
public:
    void numberSpacing(bool on);
};

void TextString::numberSpacing(bool on) {
    even_number_spacing = on;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86D8)
// 0x001D86D8 changeScale__10TextStringf
class TextString {
    char padding[0x30];
    float scale;
public:
    void changeScale(float s);
};

void TextString::changeScale(float s) {
    scale = s;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86E0)
// 0x001D86E0 changeZ__10TextStringi
class TextString {
    char padding[0x14];
    int z;
public:
    void changeZ(int value);
};

void TextString::changeZ(int value) {
    z = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86E8)
// 0x001D86E8 SetFade__10TextStringf
class TextString { char padding[0x24]; int fade; float fade_alpha; public: void SetFade(float amount); };
void TextString::SetFade(float amount) { fade = 2; fade_alpha = amount; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8728)
// 0x001D8728 GetScale__C10TextString
class TextString {
    char padding[0x30];
    float scale;
public:
    float GetScale() const;
};

float TextString::GetScale() const {
    return scale;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8730)
// 0x001D8730 GetButtonScale__C10TextString
class TextString {
    char padding[0x34];
    float button_scale;
public:
    float GetButtonScale() const;
};

float TextString::GetButtonScale() const {
    return button_scale;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8738)
// 0x001D8738 GetNumberSpacing__C10TextString
class TextString {
    char padding[0x20];
    bool even_number_spacing;
public:
    bool GetNumberSpacing() const;
};

bool TextString::GetNumberSpacing() const {
    return even_number_spacing;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8740)
// 0x001D8740 GetFont__10TextString
class Font;

class TextString {
    Font* font;
public:
    Font* GetFont();
};

Font* TextString::GetFont() {
    return font;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8748)
// 0x001D8748 GetHJustify__C10TextString
class Font {
public:
    enum HORIZJUST { HORIZJUST_LEFT };
};

class TextString {
    char padding[0x18];
    Font::HORIZJUST hJustify;
public:
    Font::HORIZJUST GetHJustify() const;
};

Font::HORIZJUST TextString::GetHJustify() const {
    return hJustify;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8750)
// 0x001D8750 GetVJustify__C10TextString
class Font {
public:
    enum VERTJUST { VERTJUST_TOP };
};

class TextString {
    char padding[0x1C];
    Font::VERTJUST vJustify;
public:
    Font::VERTJUST GetVJustify() const;
};

Font::VERTJUST TextString::GetVJustify() const {
    return vJustify;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8758)
// 0x001D8758 setLineSpacing__10TextStringi
class TextString {
public:
    void setLineSpacing(int new_spacing);
};

void TextString::setLineSpacing(int new_spacing) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8760)
// 0x001D8760 resetLineSpacing__10TextString
class TextString {
public:
    void resetLineSpacing();
};

void TextString::resetLineSpacing() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8768)
// 0x001D8768 UpdateInScene__10TextStringb
class TextString {
public:
    void UpdateInScene(bool ignore_scale);
};

void TextString::UpdateInScene(bool ignore_scale) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8770)
// 0x001D8770 SetLocation3D__10TextStringG8vector3d
class vector3d {
public:
    float x;
    float y;
    float z;

    vector3d() {}
    vector3d(const vector3d& value) {
        x = value.x;
        y = value.y;
        z = value.z;
    }
};

class TextString {
public:
    void SetLocation3D(vector3d loc);
};

void TextString::SetLocation3D(vector3d loc) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8778)
// 0x001D8778 GetLocation3D__10TextString
class vector3d { public: float x; float y; float z; vector3d(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {} };
class TextString { public: vector3d GetLocation3D(); };
vector3d TextString::GetLocation3D() { return vector3d(0.0f, 0.0f, 0.0f); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8790)
// 0x001D8790 SetBehaviorNF__10TextStringff
class TextString {
public:
    void SetBehaviorNF(float r_x, float r_y);
};

void TextString::SetBehaviorNF(float r_x, float r_y) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8798)
// 0x001D8798 SetBehavior__10TextStringb
class TextString {
public:
    void SetBehavior(bool nfb);
};

void TextString::SetBehavior(bool nfb) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D88B0)
// 0x001D88B0 getLineNum__15MultiLineString
class MultiLineString {
    char padding[0x54];
    int line_num;
public:
    int getLineNum();
};

int MultiLineString::getLineNum() {
    return line_num;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D88E8)
// 0x001D88E8 setFont__15MultiLineStringP4Font
class Font;

class MultiLineString {
    Font* font;
    char padding[0x54];
    Font* fonts[1];
public:
    void setFont(Font* value);
};

void MultiLineString::setFont(Font* value) {
    fonts[0] = value;
    font = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8B80)
// 0x001D8B80 unmakeRand__10RandomText
class RandomText {
    char padding[0x50];
    bool isRand;
public:
    void unmakeRand();
};

void RandomText::unmakeRand() {
    isRand = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8C78)
// 0x001D8C78 changeScale__7BoxTextf
class BoxText {
    char padding[0xA0];
    float real_scale;
public:
    void changeScale(float s);
};

void BoxText::changeScale(float s) {
    real_scale = s;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8C80)
// 0x001D8C80 SetBehavior__7BoxTextb
class BoxText {
    char padding[0x74];
    bool non_floating_behavior;
public:
    void SetBehavior(bool nfb);
};

void BoxText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8DF8)
// 0x001D8DF8 unmakeRand__12TrickBoxText
class TrickBoxText {
    char padding[0x50];
    bool isRand;
public:
    void unmakeRand();
};

void TrickBoxText::unmakeRand() {
    isRand = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D91D0)
// 0x001D91D0 changeScale__12FloatingTextf
class FloatingText {
    char padding[0xD0];
    float real_scale;
public:
    void changeScale(float s);
};

void FloatingText::changeScale(float s) {
    real_scale = s;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D91F8)
// 0x001D91F8 SetBehavior__12FloatingTextb
class FloatingText {
    char padding[0xDC];
    bool non_floating_behavior;
public:
    void SetBehavior(bool nfb);
};

void FloatingText::SetBehavior(bool nfb) {
    non_floating_behavior = nfb;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9AB0)
// 0x001D9AB0 TurnOn__9PanelQuadb
class PanelQuad {
    char padding[0x80];
    bool drawOn;
public:
    void TurnOn(bool on);
};

void PanelQuad::TurnOn(bool on) {
    drawOn = on;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9AC0)
// 0x001D9AC0 SetLayer__9PanelQuadi
class PanelQuad {
    char padding[0x94];
    int layer;
public:
    void SetLayer(int value);
};

void PanelQuad::SetLayer(int value) {
    layer = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9AC8)
// 0x001D9AC8 Rotate__9PanelQuadf
class PanelQuad { char padding[0x84]; int rotate; float rotation; public: void Rotate(float amount); };
void PanelQuad::Rotate(float amount) { rotate = 1; rotation = amount; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9AE8)
// 0x001D9AE8 SetColor__9PanelQuadffff
class PanelQuad { char padding[0x98]; float r; float g; float b; float a; public: void SetColor(float red, float green, float blue, float alpha); };
void PanelQuad::SetColor(float red, float green, float blue, float alpha) { r = red; g = green; b = blue; a = alpha; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9B90)
// 0x001D9B90 IsOn__C9PanelQuad
class PanelQuad {
    char padding[0x80];
    bool drawOn;
public:
    bool IsOn() const;
};

bool PanelQuad::IsOn() const {
    return drawOn;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9B98)
// 0x001D9B98 GetWidth__9PanelQuad
class PanelQuad {
    char padding[0xB8];
    float width;
public:
    float GetWidth();
};

float PanelQuad::GetWidth() {
    return width;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BA0)
// 0x001D9BA0 GetHeight__9PanelQuad
class PanelQuad {
    char padding[0xBC];
    float height;
public:
    float GetHeight();
};

float PanelQuad::GetHeight() {
    return height;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BA8)
// 0x001D9BA8 GetWidthA__9PanelQuad
class PanelQuad {
    char padding[0xC0];
    float width_a;
public:
    float GetWidthA();
};

float PanelQuad::GetWidthA() {
    return width_a;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BB0)
// 0x001D9BB0 GetHeightA__9PanelQuad
class PanelQuad {
    char padding[0xC4];
    float height_a;
public:
    float GetHeightA();
};

float PanelQuad::GetHeightA() {
    return height_a;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BB8)
// 0x001D9BB8 SetAlpha__9PanelQuadf
class PanelQuad {
    char padding[0xA4];
    float a;
public:
    void SetAlpha(float alpha);
};

void PanelQuad::SetAlpha(float alpha) {
    a = alpha;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BE0)
// 0x001D9BE0 SetFade__9PanelQuadiff
class PanelQuad { char padding[0x4]; int fade; float fade_alpha; float fade_timer; public: void SetFade(int mode, float alpha, float timer); };
void PanelQuad::SetFade(int mode, float alpha, float timer) { fade = mode; fade_alpha = alpha; fade_timer = timer; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BF0)
// 0x001D9BF0 GetTexture__9PanelQuad
class nglTexture;

class PanelQuad {
    char padding[0x7C];
    nglTexture* texture;
public:
    nglTexture* GetTexture();
};

nglTexture* PanelQuad::GetTexture() {
    return texture;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BF8)
// 0x001D9BF8 SetUV__9PanelQuadffffffff
class PanelQuad {
public:
    void SetUV(float u1, float u2, float u3, float u4, float v1, float v2, float v3, float v4);
};

void PanelQuad::SetUV(float u1, float u2, float u3, float u4, float v1, float v2, float v3, float v4) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9C00)
// 0x001D9C00 getQuad__9PanelQuad
struct nglQuad {};

class PanelQuad {
    char padding[0x1C];
    nglQuad quad;
public:
    nglQuad* getQuad();
};

nglQuad* PanelQuad::getQuad() {
    return &quad;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9C08)
// 0x001D9C08 GetRotation__C9PanelQuad
class PanelQuad {
    char padding[0x88];
    float rotation;
public:
    float GetRotation() const;
};

float PanelQuad::GetRotation() const {
    return rotation;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9DC0)
// 0x001D9DC0 SetWidth__10FloatingPQf
class FloatingPQ {
    char padding[0xB8];
    float width;
public:
    void SetWidth(float value);
};

void FloatingPQ::SetWidth(float value) {
    width = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9DC8)
// 0x001D9DC8 SetHeight__10FloatingPQf
class FloatingPQ {
    char padding[0xBC];
    float height;
public:
    void SetHeight(float value);
};

void FloatingPQ::SetHeight(float value) {
    height = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9E60)
// 0x001D9E60 GetQuad__9PanelGeom
class PanelQuad;

class PanelGeom {
public:
    PanelQuad* GetQuad();
};

PanelQuad* PanelGeom::GetQuad() {
    return 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9F28)
// 0x001D9F28 Kind__C11PanelObject
enum PanelGeomKind {
    PanelGeomObject = 0x91
};

class PanelObject {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelObject::Kind() const {
    return PanelGeomObject;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA000)
// 0x001DA000 Kind__C9PanelText
enum PanelGeomKind {
    PanelGeomText = 0x94
};

class PanelText {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelText::Kind() const {
    return PanelGeomText;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA108)
// 0x001DA108 Kind__C16PanelSkaterModel
enum PanelGeomKind {
    PanelGeomSkater = 0x95
};

class PanelSkaterModel {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelSkaterModel::Kind() const {
    return PanelGeomSkater;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA1C8)
// 0x001DA1C8 Kind__C16PanelObjectModel
enum PanelGeomKind {
    PanelGeomObjectView = 0x96
};

class PanelObjectModel {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelObjectModel::Kind() const {
    return PanelGeomObjectView;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA288)
// 0x001DA288 Kind__C10PanelMovie
enum PanelGeomKind {
    PanelGeomMovie = 0x97
};

class PanelMovie {
public:
    PanelGeomKind Kind() const;
};

PanelGeomKind PanelMovie::Kind() const {
    return PanelGeomMovie;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9BC0)
// 0x001D9BC0 GetFade__9PanelQuadRiRfT2
class PanelQuad { char padding[4]; int fade; float fade_alpha; float fade_timer; public: void GetFade(int &f, float &alpha, float &timer); };
void PanelQuad::GetFade(int &f, float &alpha, float &timer) { f = fade; alpha = fade_alpha, timer = fade_timer; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA050)
// 0x001DA050 _$_16PanelSkaterModel
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelSkaterModelDtor(void *self) __asm__("_$_16PanelSkaterModel");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelSkaterModelDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA0E8)
// 0x001DA0E8 Load__16PanelSkaterModelPUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelSkaterModel : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelSkaterModel::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA110)
// 0x001DA110 _$_16PanelObjectModel
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelObjectModelDtor(void *self) __asm__("_$_16PanelObjectModel");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelObjectModelDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA1A8)
// 0x001DA1A8 Load__16PanelObjectModelPUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelObjectModel : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelObjectModel::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA1D0)
// 0x001DA1D0 _$_10PanelMovie
extern "C" void PanelGeomDtor(void *self) __asm__("_$_9PanelGeom");
extern "C" void PanelMovieDtor(void *self) __asm__("_$_10PanelMovie");
__asm__(".equ _$_9PanelGeom, 0x0014FAC8");
void PanelMovieDtor(void *self) { PanelGeomDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA268)
// 0x001DA268 Load__10PanelMoviePUcRi
class PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
__asm__(".equ Load__9PanelGeomPUcRi, 0x0014FB68");
class PanelMovie : public PanelGeom { public: bool Load(unsigned char *buffer, int &index); };
bool PanelMovie::Load(unsigned char *buffer, int &index) { bool result = PanelGeom::Load(buffer, index); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D91D8)
// 0x001D91D8 GetLocation3D__12FloatingText
struct vector3d { float x; float y; float z; vector3d(float px, float py, float pz) : x(px), y(py), z(pz) {} };
class FloatingText { char padding[0xb0]; float location_3d[3]; public: vector3d GetLocation3D(); };
vector3d FloatingText::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9DF8)
// 0x001D9DF8 GetLocation3D__10FloatingPQ
struct vector3d { float x; float y; float z; vector3d(float px, float py, float pz) : x(px), y(py), z(pz) {} };
class FloatingPQ { char padding[0x1a0]; float location_3d[3]; public: vector3d GetLocation3D(); };
vector3d FloatingPQ::GetLocation3D() { return vector3d(location_3d[0], location_3d[1], location_3d[2]); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9DD0)
// 0x001D9DD0 GetPos__10FloatingPQRfN31
class FloatingPQ { public: char padding[0x1d0]; float x1_const; float x2_const; float y1_const; float y2_const; };
extern "C" void GetPosAlias(FloatingPQ *self, float &x1, float &y1, float &x2, float &y2) __asm__("GetPos__10FloatingPQRfN31");
void GetPosAlias(FloatingPQ *self, float &x1, float &y1, float &x2, float &y2) { x1 = self->x1_const; x2 = self->x2_const; y1 = self->y1_const; y2 = self->y2_const; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9B28)
// 0x001D9B28 SetZ__9PanelQuadf
struct nglQuad;
void nglSetQuadZ(nglQuad *quad, float z);
__asm__(".equ nglSetQuadZ__FP7nglQuadf, 0x003A6A90");
class PanelQuad { char padding0[0x1c]; nglQuad *quad_address; char padding1[0x15c]; float z; public: void SetZ(float value); };
void PanelQuad::SetZ(float value) { z = value; nglSetQuadZ((nglQuad *)((char *)this + 0x1c), value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D86F8)
// 0x001D86F8 getText__10TextString
class stringx { int value; public: stringx(const stringx &other); };
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
class TextString { int field0; stringx text; public: stringx getText(); };
stringx TextString::getText() { return text; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D88B8)
// 0x001D88B8 resetLineSpacing__15MultiLineString
struct multiline_vtable { char padding[0xd8]; short adjustment; short padding2; void (*set_line_spacing)(void *self, int spacing); };
class MultiLineString { char padding[0x4c]; multiline_vtable *vtable; public: void resetLineSpacing(); };
void MultiLineString::resetLineSpacing() { multiline_vtable *table = vtable; table->set_line_spacing((char *)this + table->adjustment, -1); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8C18)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8C48)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D87A0)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8618)
// 0x001D8618 __tf10TextString
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512038"); asm(".equ type_name, 0x004DD7A0");
extern "C" void *GetTypeInfo() __asm__("__tf10TextString");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9A10)
// 0x001D9A10 __tf9PanelQuad
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512040"); asm(".equ type_name, 0x004DD860");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelQuad");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9B50)
// 0x001D9B50 SetUV__9PanelQuadffff
#include "decomp_annotations.h"
struct nglQuad { char data[0x164]; };
extern void nglSetQuadUV(nglQuad *, float, float, float, float);
asm(".equ nglSetQuadUV__FP7nglQuadffff, 0x003A69C0");
class PanelQuad { char padding[0x1c]; nglQuad quad; float u1, v1, u2, v2; public: void SetUV(float, float, float, float); };
void PanelQuad::SetUV(float ua, float va, float ub, float vb)
{
    u1 = ua;
    u2 = ub;
    v1 = va;
    v2 = vb;
    nglSetQuadUV(&quad, u1, v1, u2, v2);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9E18)
// 0x001D9E18 __tf9PanelGeom
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512048"); asm(".equ type_name, 0x004DD890");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelGeom");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9E68)
// 0x001D9E68 __tf10PanelBatch
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512050"); asm(".equ type_name, 0x004DD8A0");
extern "C" void *GetTypeInfo() __asm__("__tf10PanelBatch");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DA008)
// 0x001DA008 __tf9PanelFile
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512058"); asm(".equ type_name, 0x004DD8D0");
extern "C" void *GetTypeInfo() __asm__("__tf9PanelFile");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8668)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D87D8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D88F8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D89C8)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D8E08)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D90D0)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9A50)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9C10)
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_001D9CF0)
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
#endif
