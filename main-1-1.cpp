#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    const int numVehicles = 3;
    Vehicle* vehicles[numVehicles];

    vehicles[0] = new Car(1);
    vehicles[1] = new Bus(2);
    vehicles[2] = new Motorbike(3);

    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Vehicle with ID " << vehicles[i]->getID()
                  << " has been parked for " << vehicles[i]->getParkingDuration()
                  << " seconds." << std::endl;
    }

    for (int i = 0; i < numVehicles; i++) {
        delete vehicles[i];
    }

    return 0;
}