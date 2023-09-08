#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter h(5690, "Heli1");
    h.set_fuel(100);

    float currentFuel = h.get_fuel();
    std::cout << "Current fuel: " << currentFuel << std::endl;

    std::cout << "Weight: " << h.get_weight() << std::endl;
    std::cout << "Number of Flights: " << h.get_numberOfFlights() << std::endl;

    h.refuel();
    std::cout << "Fuel : " << h.get_fuel() << "%" << std::endl;

    h.fly(45, 10);
    std::cout << "Fuel after flying: " << h.get_fuel() << std::endl;
    std::cout << "Number of Flights after flying: " << h.get_numberOfFlights() << std::endl;

    return 0;
}