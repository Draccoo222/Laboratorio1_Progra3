#include "drone.h"

Drone::Drone(std::string name, short fuelLvl): Vehicle(name, fuelLvl){}

void Drone::refuel(short cant){
    fuelLvl += (cant*3)/2;
    Vehicle::normalizeFuelLvl();
}

void Drone::fly(int min){
    fuelLvl -= min*3;
    Vehicle::normalizeFuelLvl();
}

void Drone::simulateHour(){
    fuelLvl -= 8;
    Vehicle::normalizeFuelLvl();
    if(fuelLvl < 20){
        std::cout << "Warning, Low Drone Baterry of: " << fuelLvl << std::endl;
    }
}

void Drone::status() const{
    std::cout << name << ", Is a Drone || Baterry: " << fuelLvl << std::endl;
}
