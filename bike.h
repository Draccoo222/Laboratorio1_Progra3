#ifndef BIKE_H
#define BIKE_H

#include "vehicle.h"

class Bike : public Vehicle
{
    public:
        Bike(std::string name, short fuelLvl);

        void status() const override;
        void refuel(short cant) override;
        void simulateHour() override;
};

#endif // BIKE_H
