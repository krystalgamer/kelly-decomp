#ifndef ODE_H
#define ODE_H

#pragma interface

class PhysicsObjectClass;

typedef void (*OdeDerivFunc)(
    PhysicsObjectClass *object,
    float time,
    float *input,
    float *output);

class OdeSolverClass {
protected:
    int dim;
    float stepSize;
    OdeDerivFunc fnDerivFunc;

public:
    OdeSolverClass()
        : dim(0), stepSize(0.0f), fnDerivFunc(0)
    {
    }
    virtual ~OdeSolverClass();
    virtual int Init(int dimension, float step, OdeDerivFunc function) = 0;
    virtual int Terminate() = 0;
    virtual int Update(
        PhysicsObjectClass *object,
        float input_time,
        float *input,
        float *output_time,
        float *output) = 0;
    virtual void SetStepSize(float value);
};

class RungeKuttaClass : public OdeSolverClass {
    float step2;
    float step6;
    float *temp1;
    float *temp2;
    float *temp3;
    float *temp4;
    float *xtemp;

public:
    RungeKuttaClass()
        : step2(0.0f),
          step6(0.0f),
          temp1(0),
          temp2(0),
          temp3(0),
          temp4(0),
          xtemp(0)
    {
    }
    virtual ~RungeKuttaClass();
    virtual int Init(int dimension, float step, OdeDerivFunc function);
    virtual int Terminate();
    virtual int Update(
        PhysicsObjectClass *object,
        float input_time,
        float *input,
        float *output_time,
        float *output);
    virtual void SetStepSize(float value);
};

#endif
