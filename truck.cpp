#include "truck.h"


Truck::Truck(std::string name, short fuelLvl): Vehicle(name, fuelLvl){}


void Truck::simulateHour(){
    if(fuelLvl == 0){
        return;
    }
    fuelLvl -= 9;
    Vehicle::normalizeFuelLvl();
    if(fuelLvl<20){
        std::cout << "Warning! Low Fuel level of" << fuelLvl << std::endl;
    }
}

void Truck::refuel(short cant){
    fuelLvl += (cant/2);
    Vehicle::normalizeFuelLvl();
}

void Truck::status() const{
    std::cout << name << ", Is a truck || Fuel: " << fuelLvl << std::endl;
}
