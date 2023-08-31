#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);

    while (lot.getCount() < 10) {
        char type;
        int id;

        std::cout << "Enter the type of vehicle you want to park (c: Car, b: Bus, m: Motorbike): ";
        std::cin >> type;

        std::cout << "Enter the ID of the vehicle: ";
        std::cin >> id;

        if (type == 'c') {
            lot.parkVehicle(new Car(id));
        } else if (type == 'b') {
            lot.parkVehicle(new Bus(id));
        } else if (type == 'm') {
            lot.parkVehicle(new Motorbike(id));
        } else {
            std::cout << "Invalid vehicle type" << std::endl;
            continue;
        }
    }

    while (true) {
        int id;

        std::cout << "Enter the ID of the vehicle you want to unpark: ";
        std::cin >> id;

        lot.unparkVehicle(id);
    }

    return 0;
}