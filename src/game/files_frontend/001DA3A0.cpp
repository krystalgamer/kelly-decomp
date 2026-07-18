enum PanelAnimKind {
    AnimInstance = 0xA1
};

class PanelAnimInstance {
public:
    PanelAnimKind Kind() const;
};

PanelAnimKind PanelAnimInstance::Kind() const {
    return AnimInstance;
}
