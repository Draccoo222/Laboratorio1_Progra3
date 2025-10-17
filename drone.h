#ifndef DRONE_H
#define DRONE_H

#include "vehicle.h"
#include "IFlyable.h"

class Drone : public Vehicle, IFlyable
{
    public:
        Drone(std::string name, short fuelLvl);

        void fly(int min) override;
        void status() const override;
        void refuel(short cant) override;
        void simulateHour() override;
};

#endif // DRONE_H
