#ifndef PWM_H
#define PWM_H

class PWM{
public:
    PWM();
    int state;
    int operate(float analog){
        if ((100 / cycle + counter) < analog) {
            state = 1;
        }
        else state = 0;
    }
private:
    float cecle = 20;
    int counter = 0;
};


#endif //PWM_H
