#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle
{
    public:
        Vehicle(std::string name, short fuelLvl);

        void normalizeFuelLvl();

        std::string getName();
        short getFuel();

        virtual void status() const = 0;
        virtual void refuel(short lvl) = 0;
        virtual void simulateHour();

        virtual ~Vehicle() = default;

    protected:
        short fuelLvl;
        std::string name;

};

#endif // VEHICLE_H
