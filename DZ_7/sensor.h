#ifndef SENSOR_H
#define SENSOR_H


class Sensor{
public:
    Sensor();
    float output = 0;
    float simulate(int);

private:
    float power = 0;
    float inertia = 200;
    float speed = 0.1;
    float heating;
};

#endif //SENSOR_H
