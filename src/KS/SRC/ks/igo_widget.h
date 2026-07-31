#ifndef INCLUDED_IGO_WIDGET
#define INCLUDED_IGO_WIDGET

class IGOWidget {
protected:
    bool display;

public:
    IGOWidget();
    virtual ~IGOWidget();
    virtual void SetDisplay(const bool d = true);
    virtual void Update(const float dt);
    virtual void Draw(void);
    virtual bool GetDisplay(void) const;
};

#endif
