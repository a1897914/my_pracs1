#include"Helicopter.h"

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, std::string n): AirVehicle(w), name(n){}

void Helicopter::fly(int headwind, int minutes){
    float fuelUsed = 0;

    if (headwind >= 40) {
        fuelUsed = 0.4 * minutes;
    } else {
        fuelUsed = 0.2 * minutes;
    }

    if (get_weight() > 5670) {
        fuelUsed += 0.01 * (get_weight() - 5670) * minutes;
    }

    if (get_fuel() - fuelUsed >= 20) {
        set_fuel(get_fuel() - fuelUsed);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}

void Helicopter::set_name(std::string n){
    name = n;
}

std::string Helicopter::get_name(){
    return name;
}