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
