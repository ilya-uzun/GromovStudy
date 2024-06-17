#ifndef PID_H
#define PID_H


class PID{
public:
    PID();
    float output = 0;

    float operate(float);

private:
    float kp = 5;
    float ki = 100;
    float kd = 20;
    float delta;
    float deltaOld;
    float sp = 55;
    float integral = 0;
    float diff = 0;
    float prop = 0;
};


#endif //PID_H
