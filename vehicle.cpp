#include "vehicle.h"
#include <algorithm>

Vehicle::Vehicle(std::string name, short fuelLvl)
    : name(name), fuelLvl(fuelLvl){
}

std::string Vehicle::getName(){
    return name;
}

short Vehicle::getFuel(){
    return fuelLvl;
}


void Vehicle::normalizeFuelLvl(){
    int num = (int) fuelLvl;
    num = std::min(num, 100);
    num = std::max(num, 0);
    fuelLvl = (short) num;
}
