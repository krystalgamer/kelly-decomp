// Matching decompilation blocks selected by generated build shims.

#ifndef KELLY_DECOMP_IGO_WIDGET_H
#define KELLY_DECOMP_IGO_WIDGET_H

class IGOWidget {
protected:
    bool display;

public:
    IGOWidget();
    virtual ~IGOWidget();
    virtual void SetDisplay(bool value = true);
    virtual void Update(float time);
    virtual void Draw();
    virtual bool GetDisplay() const;
};

#endif

#if defined(KELLY_DECOMP_FUNCTION_001DB9A0)
// 0x001DB9A0 __tf9IGOWidget
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512098"); asm(".equ type_name, 0x004DDA18");
extern "C" void *GetTypeInfo() __asm__("__tf9IGOWidget");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
