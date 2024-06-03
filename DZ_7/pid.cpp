#include "pid.h"


float pid::operate(float sensor){
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

