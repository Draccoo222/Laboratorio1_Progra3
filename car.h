#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car: public Vehicle
{
    public:
        Car(std::string name, short fuelLvl);

        void refuel(short cant) override;
        void status() const override;
        void simulateHour() override;
};

#endif // CAR_H
