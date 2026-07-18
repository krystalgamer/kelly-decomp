class ReplayWidget {
    char padding[0xC];
    int vcrButtonHL;
public:
    int GetHighlight();
};

int ReplayWidget::GetHighlight() {
    return vcrButtonHL;
}
