#include"Airplane.h"

Airplane::Airplane(){}

Airplane::Airplane(int w, int p): AirVehicle(w), numPassengers(p){}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float fuelUsed = 0;
    if (headwind >= 60) {
        fuelUsed = 0.5 * minutes;
    } else {
        fuelUsed = 0.3 * minutes;
    }
    fuelUsed += 0.001 * numPassengers * minutes;
    if (get_fuel() - fuelUsed >= 20) {
        set_fuel(get_fuel() - fuelUsed);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}