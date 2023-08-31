#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t currentTime = std::time(0);
    int duration = static_cast<int>(std::difftime(currentTime, timeOfEntry));
    return duration * 0.75;
}