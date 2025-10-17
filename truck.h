#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"

class Truck : public Vehicle
{
    public:
        Truck(std::string name, short fuelLvl);

        void status() const override;
        void refuel(short cant) override;
        void simulateHour() override;
};

#endif // TRUCK_H
