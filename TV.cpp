#include "TV.h"

TV::TV() : Appliance(), screenSize(0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    return get_powerRating() * (screenSize / 10);
}
