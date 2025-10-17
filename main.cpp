#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include "truck.h"
#include "drone.h"



using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("Toyota Camri 2010", 100));
    vehicles.push_back(new Drone("Dji mini3", 100));


    for(int i = 0; i < 7; i++){
        cout << "[" << i << "h]" << endl;
        for(const auto& v : vehicles){
            v->simulateHour();
            Drone* d = dynamic_cast<Drone*>(v);
            if(d != nullptr){

                if(i %2 == 0 && i != 0){
                    cout << "Attempting Flight For All Vehicles...\n" << endl;
                    d->fly(5);
                }
            }
            v->status();

            if(i % 3 == 0 && i != 0){
                v->refuel(15);
            }
        }
        if(i % 3 == 0 && i != 0){
            cout << "Refueling all vehicles (+15)\n" << endl;
        }
    }

    for(const auto& v : vehicles){
        delete v;
    }
    vehicles.clear();

    return a.exec();
}
