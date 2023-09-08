#include <iostream>
#include "AirVehicle.h"

int main() {

    AirVehicle a(1000);
    AirVehicle a;
    a.set_fuel(100);

    float currentFuel = a.get_fuel();
    std::cout << "Current fuel: " << currentFuel << std::endl;

    std::cout << "Number of Flights: " << a.get_numberOfFlights() << std::endl;

    a.refuel();
    std::cout << "Fuel: " << a.get_fuel() << "%" << std::endl;

    a.fly(10, 60);
    std::cout << "Number of Flights after flying: " << a.get_numberOfFlights() << std::endl;

  

    return 0;
}