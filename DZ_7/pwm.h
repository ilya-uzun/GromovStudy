#ifndef PWM_H
#define PWM_H

class PWM{
public:
    PWM();
    int state;
    int operate(float);
private:
    float cycle = 20;
    int counter = 0;
};


#endif //PWM_H
