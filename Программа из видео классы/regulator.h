#ifndef REGUKATOR_H
#define REGUKATOR_H

#include <string>
#include <iostream>

using namespace std;

class Regulator {
public:
    Regulator(int sp, int gist);

    string operate(int sensor, int sp, int gist);
    string operate(int sensor);
    void operate();

    void set_point(int sp);
    void set_gist(int gist);

    string get_state();
    int get_point();
    int get_gist();

    void india();

private:
    int point;
    int gisteresis;
    string state;
    int parameter;
};

#endif //REGUKATOR_H
