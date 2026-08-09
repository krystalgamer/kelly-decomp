#ifndef FE_PANEL_H
#define FE_PANEL_H

#pragma interface

#include "KS/SRC/color.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/algebra.h"
#include "NGL/PS2/ngl_ps2.h"

class Font {
protected:
    struct glyph_info {
        unsigned char ascii;
        unsigned int cell_x;
        unsigned int cell_y;
        unsigned int cell_width;
        int cell_height;
    };

public:
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

    glyph_info *getGlyph(char value);
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
    virtual void Render();
    virtual void Render(stringx *text, float x, float y);
    virtual void Render(
        stringx *text,
        float x,
        float y,
        float *xs,
        float *ys,
        bool random_text_fade = true);
    virtual void cons(
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
};

class MultiLineString : public TextString {
protected:
    int vSpacing;
    int line_num;
    Font *fonts[20];

public:
    float getWidth();
    virtual int getLineNum();
    virtual void changeText(stringx text);
    virtual void setLineSpacing(int spacing);
    virtual void resetLineSpacing();
    virtual void addFont(int index, Font *font);
    virtual void setFont(Font *font);

protected:
    virtual void Render(stringx *text, float x, float y);
    virtual void cons(
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
};

class BouncingText : public TextString {
protected:
    float targetScale;
    float speed;

public:
    BouncingText();
    void Bounce(float bounceScale, float bounceTime);
};

class FloatingText : public MultiLineString {
    float location_3d[4] __attribute__((aligned(16)));
    float location_2d[4];
    float real_scale;
    float real_x;
    float real_y;
    bool non_floating_behavior;

public:
    virtual void SetLocation3D(vector3d location);
    virtual void UpdateInScene(bool ignore_scale = false);
    virtual void changeScale(float scale);
    virtual vector3d GetLocation3D();
    virtual void SetBehaviorNF(float x, float y);
    virtual void SetBehavior(bool non_floating);
};

class PreformatText : public TextString {
    stringx *file_head;
    int start_line;
    int num_vis_lines;
    int max_lines;
    int actual_lines;

public:
    void DrawLine(int line_num, float x, float y);
    float getPercentage();
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

    void MakeRand();
    void Update(float time_inc);
    void Break();
    StringList &operator=(const StringList &other);
};

class RandomText : public TextString {
protected:
    bool isRand;
    bool noFade;
    StringList rand_string;

public:
    virtual void Update(float time_inc);
    virtual void makeRand();
    virtual void unmakeRand();
    void Break();
};

class TrickBoxText : public RandomText {
protected:
    int numLines;
    int lineHeight;
    int width;
    int height;
    bool reverse;
    StringList box_strings[10];
    int box_str_count;

public:
    void unmakeRand();
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
    virtual void SetLocation3D(vector3d location);
    virtual void SetBehavior(bool non_floating);
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
    virtual ~BoxText();
    virtual void Draw();
    virtual void UpdateInScene(bool ignore_scale = false);
    virtual void changeScale(float value);
    virtual void changePos(float x, float y);
    virtual void OnDown(int controller);
    virtual void OnUp(int controller);
    virtual bool scroll(bool up, int lines);

protected:
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
};

class PanelAnim;
class PanelQuad;

class recti {
    int x0;
    int y0;
    int x1;
    int y1;
};

typedef float time_value_t;
typedef unsigned int uint32;

enum PanelGeomKind {
    PanelGeomObject = 0x91,
    PanelGeomInstance = 0x92,
    PanelGeomGroup = 0x93,
    PanelGeomText = 0x94,
    PanelGeomSkater = 0x95,
    PanelGeomObjectView = 0x96,
    PanelGeomMovie = 0x97
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
    void cons();
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
    void Update(time_value_t time_inc);
    void Reload(PanelMaterial *materials);

private:
    bool eq_to_tolerance(float a, float b, float tolerance);
};

class PanelText : public PanelGeom {
public:
    enum JustKind {
        Left = 0,
        HCenter = 1,
        HStretch = 2,
        Right = 3,
        HMask = 0x3,
        Top = 0,
        VCenter = 4,
        VStretch = 8,
        Bottom = 12,
        VMask = 0xC
    };

    stringx fontname;
    color32 color;
    unsigned char justification;
    float linespacing;
    uint32 numtextlines;
    stringx text;
    nglQuad quad;

    PanelText() {}
    virtual PanelGeomKind Kind() const;
    virtual bool Load(unsigned char *buffer, int &index);
    virtual void Init(PanelQuad **pquads);
    virtual void Init(PanelQuad **pquads, matrix4x4 matrix);
    virtual void Draw(float alpha = 1.0f);
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
    virtual PanelQuad *GetQuad();
};

struct floating_geometry_manager {
    char state[4];
    char *transforms;
};

extern floating_geometry_manager *floating_geometry;
template<class T>
void unadjustCoords(T &x, T &y);
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
    void Update(float time);
    void Draw(int layer);
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
    inline void AddedToMenu() { on_menu = true; }
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

class PanelQuad4 : public PanelQuad {
    float x[4];
    float y[4];
    float u[4];
    float v[4];

public:
    virtual void Update(time_value_t time_inc);
    virtual void Draw(int layer = 0, float alpha = -1.0f);
    virtual void SetUV(
        float u1, float u2, float u3, float u4,
        float v1, float v2, float v3, float v4);
    virtual void SetPos(
        float x1, float y1, float x2, float y2,
        float x3, float y3, float x4, float y4);
    virtual void SetCenterPos(float x, float y);
    virtual void GetCenterPos(float &x, float &y);
};

class PanelSkaterModel : public PanelGeom {
public:
    virtual bool Load(unsigned char *buffer, int &index);
    virtual PanelGeomKind Kind() const;
};

class PanelObjectModel : public PanelGeom {
public:
    virtual bool Load(unsigned char *buffer, int &index);
    virtual PanelGeomKind Kind() const;
};

class PanelMovie : public PanelGeom {
public:
    virtual bool Load(unsigned char *buffer, int &index);
    virtual PanelGeomKind Kind() const;
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
    bool non_floating_behavior;

public:
    virtual void Init(
        float x1, float y1, float x2, float y2,
        float r, float g, float b, float a,
        float u1, float v1, float u2, float v2,
        float z, matrix4x4 object_matrix);
    virtual void UpdateInScene();
    virtual void Draw(int layer = 0, float alpha = -1.0f);
    virtual void SetLocation3D(vector3d location);
    virtual void SetWidth(float width);
    virtual void SetHeight(float height);
    virtual void SetConstantScale(float value);
    virtual void SetScale(float value);
    virtual void SetPos(float x1, float y1, float x2, float y2);
    virtual void GetPos(float &x1, float &y1, float &x2, float &y2)
        __asm__("GetPos__10FloatingPQRfN31");
    virtual vector3d GetLocation3D();
    virtual void SetBehaviorNF(float x, float y);
    virtual void SetBehavior(bool enabled);
};

#endif
