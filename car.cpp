#include "car.h"
#include <iostream>

Car::Car(std::string name, short fuelLvl): Vehicle(name, fuelLvl){}


void Car::simulateHour(){
    if(fuelLvl == 0){
        return;
    }
    fuelLvl -= 6;
    Vehicle::normalizeFuelLvl();
    if(fuelLvl < 20){
        std::cout << "Warning Low Fuel! You have an amount of: " << fuelLvl << std::endl;
    }
}

void Car::refuel(short cant){
    fuelLvl += cant;
    Vehicle::normalizeFuelLvl();
}

void Car::status() const{
    std::cout << name << ", Is a car || Fuel:  " << fuelLvl << std::endl;
}



