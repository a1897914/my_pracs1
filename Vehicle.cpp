#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(0);
}

int Vehicle::getID() const {
    return ID;
}