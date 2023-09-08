#include "AirVehicle.h"

AirVehicle::AirVehicle(){}

AirVehicle::AirVehicle(int w): weight(w), fuel(0), numberOfFlights(0){}

void AirVehicle::refuel(){
    fuel = 100;
}

void AirVehicle::fly(int headwind, int minutes){
    numberOfFlights++;
}

void AirVehicle::set_weight(int w){
    weight = w;
}

void AirVehicle::set_fuel(int f){
    fuel = f;
}

void AirVehicle::set_numberOfFlights(int n){
    numberOfFlights = n;
}

int AirVehicle::get_weight(){
    return weight;
}

float AirVehicle::get_fuel(){
    return fuel;
}

int AirVehicle::get_numberOfFlights(){
    return numberOfFlights;
}