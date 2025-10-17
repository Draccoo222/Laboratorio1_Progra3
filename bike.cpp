#include "bike.h"

Bike::Bike(std::string name, short fuelLvl): Vehicle(name, fuelLvl) {}




void Bike::simulateHour(){
    if(fuelLvl == 0){
        return;
    }
    fuelLvl -= 4;
    Vehicle::normalizeFuelLvl();
    if(fuelLvl < 20){
        std::cout << "Warning Low Fuel! You have an amount of: " << fuelLvl << std::endl;
    }
}

void Bike::refuel(short cant){
    fuelLvl += (cant*4)/5;
    Vehicle::normalizeFuelLvl();
}

void Bike::status() const{
    std::cout << name << ", Is a Bike || Fuel:  " << fuelLvl << std::endl;
}
