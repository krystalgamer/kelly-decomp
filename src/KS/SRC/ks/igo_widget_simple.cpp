// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00164908)
// 0x00164908 IsShown__C12SimpleWidget
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
    virtual bool IsOn(void) const;
};
class SimpleWidget {
    char padding[8];
    int numPQs;
    PanelQuad** pqs;
public: bool IsShown(void) const;
};
bool SimpleWidget::IsShown(void) const
{
    return numPQs > 0 && pqs[0]->IsOn();
}
#endif
