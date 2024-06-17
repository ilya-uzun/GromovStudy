#include "pid.h"
#include "pwm.h"
#include "sensor.h"
#include <QFile>
#include <QString>
#include <iostream>

int main(){
    Sensor temperature;
    PID regulator;
    PWM pwm;

    QFile file("data.csv");
    file.open(QIODevice::ReadWrite);

    file.write("Temparture;Regulator\n");

    for (int i; i < 2000; i++){
       regulator.operate(temperature.output);
       pwm.operate(regulator.output);
       temperature.simulate(pwm.state);

        QString data = QString::number(temperature.output) + ";" + QString::number(regulator.output) + "\n";
        file.write(data.toStdString().c_str());

        std::cout << "t= " << temperature.output << "r= " << regulator.output << "s= " << pwm.state << std::endl;
    }
    return 0;
}



























