#include <iostream>
#include "AirVehicle.h"

int main() {

    AirVehicle a(1000);
    float fuel;
    std::cout << "Enter fuel value: ";
    std::cin >> fuel;
    a.set_fuel(fuel);
    std::cout << "Fuel set to: " << a.get_fuel() << std::endl;

    std::cout << "Weight: " << a.get_weight() << std::endl;

    std::cout << "Fuel: " << a.get_fuel() << std::endl;

    std::cout << "Number of Flights: " << a.get_numberOfFlights() << std::endl;

    a.refuel();
    std::cout << "Fuel after refueling: " << a.get_fuel() << "%" << std::endl;

    a.fly(10, 60);
    std::cout << "Number of Flights after flying: " << a.get_numberOfFlights() << std::endl;

  

    return 0;
}