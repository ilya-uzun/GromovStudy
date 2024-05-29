#include <iostream>
#include "regulator.h"


int main()
{
    Regulator heater(21, 4);

    heater.operate();
    heater.india();
    heater.operate(25);
    heater.india();
    heater.operate(16, 20, 3);
    heater.india();
    return 0;
}
