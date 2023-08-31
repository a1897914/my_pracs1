#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t currentTime = std::time(0);
    int duration = static_cast<int>(std::difftime(currentTime, timeOfEntry));
    return duration * 0.9;
}
