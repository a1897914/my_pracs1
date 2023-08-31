#include <iostream>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), count(0) {
        vehicles = new Vehicle*[maxCapacity];
        for (int i = 0; i < maxCapacity; i++) {
            vehicles[i] = 0;
        }
}

ParkingLot::~ParkingLot() {
        for (int i = 0; i < maxCapacity; i++) {
            delete vehicles[i];
        }
        delete[] vehicles;
}

int ParkingLot::getCount() const {
        return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
        if (count == maxCapacity) {
            std::cout << "The lot is full" << std::endl;
            return;
        }
        vehicles[count++] = vehicle;
}

void ParkingLot::unparkVehicle(int id) {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getID() == id) {
                delete vehicles[i];
                vehicles[i] = vehicles[--count];
                vehicles[count] = 0;
                return;
            }
        }
        std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    for (int i = 0; i < this->count; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}