#ifndef PID_H
#define PID_H


class PID{
    PID();
    flaot output = 0;

    float operate(float sensor){
        dalta = sp - sensor;
        prop = delta * kp;

        if(output >= 0 and output <= 100) integral += delta*(1/ki);

        diff = (delta - deltaOld) * kd;
        deltaOld = delta;

        output = prop + integral + deff;

        if(output > 100) output = 100;
        if (output < 0) output = 0;
        return output;
    }

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
