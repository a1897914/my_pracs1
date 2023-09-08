#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet af;
    AirVehicle** fleet = af.get_fleet();

    for (int i = 0; i < 5; i++) {
        std::cout << "Aircraft " << i+1 << ": Weight = " << fleet[i]->get_weight() << ", Fuel = " << fleet[i]->get_fuel() << std::endl;
    }

    return 0;
}