#include <iostream>
#include "Airplane.h"

int main() {
    Airplane a(10000, 100);
    float fuel;
    std::cout << "Enter fuel value: ";
    std::cin >> fuel;
    a.set_fuel(fuel);
    std::cout << "Fuel: " << a.get_fuel() << std::endl;

    std::cout << "Weight: " << a.get_weight() << std::endl;

    std::cout << "Number of Flights: " << a.get_numberOfFlights() << std::endl;

    a.refuel();
    std::cout << "Fuel: " << a.get_fuel() << "%" << std::endl;

    a.fly(65, 120);
    std::cout << "Fuel after flying: " << a.get_fuel() << std::endl;
    std::cout << "Number of Flights after flying: " << a.get_numberOfFlights() << std::endl;

    return 0;
}