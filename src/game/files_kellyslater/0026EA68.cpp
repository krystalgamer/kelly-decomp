class OdeSolverClass {
    char padding[0x4];
    float stepSize;
public:
    void SetStepSize(float value);
};

void OdeSolverClass::SetStepSize(float value) {
    stepSize = value;
}
