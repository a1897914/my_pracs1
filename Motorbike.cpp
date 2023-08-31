#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    std::time_t currentTime = std::time(0);
    int duration = static_cast<int>(std::difftime(currentTime, timeOfEntry));
    return duration * 0.85;
}