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

void Vehicle::simulateHour(){
    if(fuelLvl == 0){
        return;
    }
    fuelLvl -= 5;
    normalizeFuelLvl();
    if(fuelLvl < 20){
        std::cout << "Warning, Low Fuel for vehicle: " << fuelLvl << std::endl;
    }

}
