#include "pid.h"


PID::PID(){}

float PID::operate(float sensor){
        delta = sp - sensor;
        prop = delta * kp;

        if(output >= 0 and output <= 100) integral += delta*(1/ki);

        diff = (delta - deltaOld) * kd;
        deltaOld = delta;

        output = prop + integral + diff;

        if(output > 100) output = 100;
        if (output < 0) output = 0;
        return output;
    }

