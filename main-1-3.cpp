#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10);

    for (int i = 0; i < 5; i++) {
        lot.parkVehicle(new Car(i));
    }

    for (int i = 5; i < 8; i++) {
        lot.parkVehicle(new Bus(i));
    }

    for (int i = 8; i < 10; i++) {
        lot.parkVehicle(new Motorbike(i));
    }

    std::cout << "Number of vehicles that have overstayed for more than 15 seconds: "
              << lot.countOverstayingVehicles(15) << std::endl;

    return 0;
}
