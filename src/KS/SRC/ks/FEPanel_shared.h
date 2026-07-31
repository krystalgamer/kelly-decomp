#ifndef KELLY_DECOMP_FE_PANEL_SHARED_H
#define KELLY_DECOMP_FE_PANEL_SHARED_H

#pragma interface

#include "KS/SRC/color.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/vector3d_shared.h"
#include "NGL/PS2/ngl_ps2.h"

class Font {
public:
#if defined(KELLY_DECOMP_LOGBOOK_CONSTRUCTORS)
    enum HORIZJUST {
        HORIZJUST_LEFT,
        HORIZJUST_CENTER,
        HORIZJUST_RIGHT
    };

    enum VERTJUST {
        VERTJUST_TOP,
        VERTJUST_CENTER,
        VERTJUST_BOTTOM
    };
#else
    enum HORIZJUST {
        HORIZJUST_CENTER
    };

    enum VERTJUST {
        VERTJUST_CENTER
    };
#endif
};

class TextString {
protected:
    Font *font;
    stringx text;
    float x;
    float y;
    int z;
    Font::HORIZJUST hJustify;
    Font::VERTJUST vJustify;
    bool even_number_spacing;
    int fade;
    float fade_alpha;
    float fade_timer;
    float scale;
    float button_scale;
    bool override_alpha;

public:
    bool checkTime;
    float time;
    bool no_color;
    color32 color;

#if defined(KELLY_DECOMP_LOGBOOK_CONSTRUCTORS)
    TextString() {}

    TextString(
        Font *font,
        stringx text,
        float x,
        float y,
        int z,
        float scale,
        Font::HORIZJUST horizontal,
        Font::VERTJUST vertical,
        color32 color)
    {
        cons(
            font,
            text,
            x,
            y,
            z,
            scale,
            horizontal,
            vertical,
            false,
            color);
    }
#endif
    virtual inline ~TextString() {}
    virtual void Update(float time_inc);
    virtual void Draw();
    virtual void setHJustify(Font::HORIZJUST hjust);
    virtual void setVJustify(Font::VERTJUST vjust);
    virtual void setFont(Font *value);
    virtual void setButtonScale(float value);
    virtual void numberSpacing(bool enabled);
    virtual void changeText(stringx value);
    virtual void changeScale(float value);
    virtual void changePos(float x, float y);
    virtual void changeX(float x);
    virtual void changeY(float y);
    virtual void changeZ(int z);
    virtual void ChangeFade(bool start, bool fade_in, float time = 2.0f);
    virtual void SetFade(float alpha);
    virtual float getX();
    virtual float getY();
    virtual int getZ();
    virtual stringx getText();
    virtual float GetScale() const;
    virtual float GetButtonScale() const;
    virtual bool GetNumberSpacing() const;
    virtual Font *GetFont();
    virtual Font::HORIZJUST GetHJustify() const;
    virtual Font::VERTJUST GetVJustify() const;
    virtual void setLineSpacing(int spacing);
    virtual void resetLineSpacing();
    virtual void UpdateInScene(bool ignore_scale = false);
    virtual void SetLocation3D(vector3d location);
    virtual vector3d GetLocation3D();
    virtual void SetBehaviorNF(float x, float y);
    virtual void SetBehavior(bool non_floating);
    static void MakeReplacements(stringx &value);

protected:
#if defined(KELLY_DECOMP_LOGBOOK_CONSTRUCTORS)
    void cons(
        Font *font,
        stringx text,
        float x,
        float y,
        int z,
        float scale,
        Font::HORIZJUST horizontal,
        Font::VERTJUST vertical,
        bool no_color,
        color32 color);
#endif
};

class MultiLineString : public TextString {
protected:
    int vSpacing;
    int line_num;
    Font *fonts[20];
};

class FloatingText : public MultiLineString {
    float location_3d[4] __attribute__((aligned(16)));
    float location_2d[4];
    float real_scale;
    float real_x;
    float real_y;
    bool non_floating_behavior;

public:
    virtual void UpdateInScene(bool ignore_scale = false);
};

class StringList {
public:
    enum {
        MAX_STRING_SIZE = 150
    };

    stringx data;
    float x;
    float y;
    float fall_speed[MAX_STRING_SIZE];
    float drift_speed[MAX_STRING_SIZE];
    int drift_max[MAX_STRING_SIZE];
    float delta_x[MAX_STRING_SIZE];
    float delta_y[MAX_STRING_SIZE];

    StringList &operator=(const StringList &other);
};

struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

class BoxText : public TextString {
protected:
    int width;
    int height;
    bool reverse;
    int max_box_strings;
    StringList *box_strings;
    int box_str_count;
    nglFileBuf fileBuf;
    bool non_floating_behavior;
    nglVector location_2d;
    nglVector location_3d;
    float real_scale;
    float real_x;
    float real_y;
    float adjusted_x;
    float adjusted_y;
    bool scrollable;
    int max_vis_lines;
    int first_vis;

public:
#if defined(KELLY_DECOMP_LOGBOOK_CONSTRUCTORS)
    BoxText(
        Font *font,
        stringx text,
        float x,
        float y,
        int z,
        float scale,
        Font::HORIZJUST horizontal,
        Font::VERTJUST vertical,
        color32 color,
        int max_box_strings = 5)
    {
        cons(
            font,
            text,
            x,
            y,
            z,
            scale,
            horizontal,
            vertical,
            color,
            max_box_strings);
    }
#endif
    virtual ~BoxText();
    virtual void Draw();
    virtual void UpdateInScene(bool ignore_scale = false);
    virtual void changeScale(float value);
    virtual void changePos(float x, float y);

protected:
#if defined(KELLY_DECOMP_LOGBOOK_CONSTRUCTORS)
    void cons(
        Font *font,
        stringx text,
        float x,
        float y,
        int z,
        float scale,
        Font::HORIZJUST horizontal,
        Font::VERTJUST vertical,
        color32 color,
        int max_box_strings);
#endif
};

class PanelAnim;
class PanelQuad;

class matrix4x4 {
    float values[16] __attribute__((aligned(16)));
};

class recti {
    int x0;
    int y0;
    int x1;
    int y1;
};

typedef float time_value_t;
typedef unsigned int uint32;

enum PanelGeomKind {
    PanelGeomObject
};

class PanelGeom {
public:
    stringx name;
    stringx properties;
    matrix4x4 matrix;
    vector3d boundboxcenter;
    vector3d boundboxsize;
    uint32 nchildren;
    PanelGeom *children;
    PanelGeom *next;
    PanelGeom *parent;

    virtual ~PanelGeom();
    virtual PanelGeomKind Kind() const = 0;
    virtual bool Load(unsigned char *buffer, int &index);
    virtual void Reload();
    virtual PanelGeom *FindObject(const stringx &search_name);
    virtual PanelQuad *GetQuad();
    virtual void Init(PanelQuad **pquads, bool floating = false);
    virtual void Init(PanelQuad **pquads, matrix4x4 matrix, bool floating = false);
    virtual void Update(time_value_t time_inc);
    virtual void Slide(float offset);
};

struct PanelMaterial {
    stringx name;
    uint32 color;
    float emissive;
    float shininess;
    float shinestr;
    bool additive;
    bool hasmap;
    nglTexture *texture;
    bool bilinearfilter;
    bool wrapu;
    bool wrapv;
    stringx filename;
};

class PanelBatch {
public:
    uint32 material;
    PanelMaterial mat;
    uint32 verttype;
    uint32 color;
    unsigned short nwedges;
    PanelQuad *pq;
    vector3d *wedges;
    color32 *colors;
    void *tex;
    unsigned short strip_count;
    unsigned short index_count;
    unsigned short *didxs;

    virtual ~PanelBatch();
    void Reload(PanelMaterial *materials);
};

class PanelObject : public PanelGeom {
public:
    PanelMaterial *materials;
    unsigned short size;
    unsigned short nbatches;
    PanelBatch *batches;

    virtual ~PanelObject();
    virtual PanelGeomKind Kind() const;
    virtual bool Load(unsigned char *buffer, int &index);
    virtual void Reload();
};

struct floating_geometry_manager {
    char state[4];
    char *transforms;
};

extern floating_geometry_manager *floating_geometry;
extern "C" void project_floating_point(float *output, float *input)
    __asm__("nglProjectPoint__FR9nglVectorT0");
extern "C" void unadjust_floating_coords(float &x, float &y)
    __asm__("unadjustCoords__H1Zf_RX01T0_v");
extern "C" void apply_floating_matrix(
    float *output,
    float *matrix,
    float *input)
    __asm__("nglApplyMatrix__FR9nglVectorR9nglMatrixT0");

__asm__(".equ floating_geometry, 0x00432868");
__asm__(".equ nglProjectPoint__FR9nglVectorT0, 0x00399458");
__asm__(".equ unadjustCoords__H1Zf_RX01T0_v, 0x001D6BF0");
__asm__(".equ nglApplyMatrix__FR9nglVectorR9nglMatrixT0, 0x00395F48");

class PanelFile {
    int slide_state;
    float slide_offset;
    float slide_timer;
    float slide_max_time;
    stringx filename;

public:
    PanelGeom *obs;
    stringx path;
    PanelFile *next;
    PanelQuad *pquads;

    virtual ~PanelFile();
    virtual PanelGeom *FindObject(const stringx &search_name);
    virtual PanelGeom *FindObject(const char *search_name);
    virtual PanelQuad *FindQuad(const stringx &search_name);
    PanelQuad *GetPointer(const char *search_name);
    virtual void SetFilename(stringx path);
    bool Load(bool floating = false);
};

class PanelQuad {
protected:
    bool isAnim;
    int fade;
    float fade_alpha;
    float fade_timer;
    float mask;
    int maskType;
    PanelAnim *anim;
    nglQuad quad;
    bool drawOn;
    int rotate;
    float rotation;
    float rotate_x;
    float rotate_y;
    int layer;
    float r;
    float g;
    float b;
    float a;
    float x1;
    float y1;
    float x2;
    float y2;
    float width;
    float height;
    float width_a;
    float height_a;
    matrix4x4 matrix;
    bool on_menu;
    bool clip;
    recti clipping;

public:
    matrix4x4 Xform;
    stringx name;
    bool dont_draw;
    float z;
    float u1;
    float v1;
    float u2;
    float v2;
    PanelQuad *next;

    virtual inline ~PanelQuad() {}
    virtual void Init(
        float x1, float y1, float x2, float y2,
        float r, float g, float b, float a,
        float u1, float v1, float u2, float v2,
        float z, char object_matrix[0x40]
    );
    virtual void TurnOn(bool enabled);
    inline void ToggleOn() { drawOn = !drawOn; }
    void SetFade(float amount);
    void ChangeFade(bool start, bool fade_in, float time = 2.0f)
        __asm__("ChangeFade__9PanelQuadbT1f");
    inline void Mask(float amount, int type = 1) { mask = amount; maskType = type; }
    virtual void SetLayer(int layer);
    virtual void Rotate(float rotation);
    virtual void Rotate(float x, float y, float rotation);
    virtual void Update(time_value_t time_inc);
    virtual void Draw(int layer = 0, float alpha = -1.0f);
    virtual void SetColor(float red, float green, float blue, float alpha);
    virtual void SetColor(color value);
    virtual void SetZ(float value);
    virtual void SetUV(float u1, float v1, float u2, float v2);
    virtual bool IsOn() const;
    virtual void SetPos(float x1, float y1, float x2, float y2);
    virtual void SetPos(float x, float y);
    virtual void SetPos(
        float x1, float y1, float x2, float y2,
        float x3, float y3, float x4, float y4);
    virtual void GetPos(float &x1, float &y1, float &x2, float &y2);
    virtual void SetCenterX(float x);
    virtual void SetCenterY(float y);
    virtual void SetCenterPos(float x, float y);
    virtual void GetCenterPos(float &x, float &y);
    virtual void SetCenterPosQuadOnly(float x, float y);
    virtual float GetWidth();
    virtual float GetHeight();
    virtual float GetWidthA();
    virtual float GetHeightA();
    virtual void SetClip(bool enabled);
    virtual void SetClip(const recti &bounds);
    virtual void GetFade(int &mode, float &alpha, float &timer);
    virtual void SetFade(int mode, float alpha, float timer);
    virtual nglTexture *GetTexture();
    virtual void SetUV(
        float u1, float u2, float u3, float u4,
        float v1, float v2, float v3, float v4);
    virtual nglQuad *getQuad();
    virtual float GetRotation() const;
    void SetAlpha(float alpha);
};

class FloatingPQ : public PanelQuad {
    float location_3d[4];
    float location_2d[4];
    float scale;
    int h_just;
    float width_f;
    float height_f;
    float x1_const;
    float x2_const;
    float y1_const;
    float y2_const;

public:
    void SetPos(float x1, float y1, float x2, float y2);
};

#endif
