
#include "regulator.h"

Regulator::Regulator(int sp, int gist){
    point = sp;
    gisteresis = gist;
}

string Regulator::operate(int sensor, int sp, int gist){
    parameter = sensor;
    point = sp;
    gisteresis = gist;
    return operate(parameter);
}

string Regulator::operate(int sensor){
    parameter = sensor;
    if (sensor < point - gisteresis){
        state = "On";
    }
    else if (sensor > point + gisteresis){
        state = "Off";
    }
    return state;
}

void Regulator::operate(){
    int parameter;
    std::cout << "Enter parameter" << std::endl;
    std::cin >> parameter;
    operate(parameter);
}

void Regulator::set_point(int sp){
    point = sp;
}

void Regulator::set_gist(int gist){
    gisteresis = gist;
}

string Regulator::get_state(){
    return state;
}

int Regulator::get_point(){
    return point;
}

int Regulator::get_gist(){
    return gisteresis;
}

void Regulator::india(){
    std::cout << "sensor" << parameter << "State: " << state << std::endl;
}
