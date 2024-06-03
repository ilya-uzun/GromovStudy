#include "sensor.h"

float simulate(int heat){
    if (heat){
        power++;
    } else power--;
    if (power > inertia) power = inertia;
    if (power < 0) power = 0;

    heating = 100 / inertia * power + speed;

    output += heating - (output * speed * 0.6);
    return output;
}

