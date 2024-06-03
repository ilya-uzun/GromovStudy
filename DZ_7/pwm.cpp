#include "pwm.h"

int pwm::operate(float analog){
    if ((100 / cycle + counter) < analog) {
        state = 1;
    }
    else state = 0;
}
