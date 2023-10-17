#include "Opponents.h"

Opponents::Opponents() { }

// Parameterised constructor 
Opponents::Opponents(std::string name, int age, std::string location) : name(name), age(age), location(location){

}

// Get and Set for name
std::string Opponents::get_opponentName() const {
    return name;
}

void Opponents::set_opponentName(std::string newName) {
    name = newName;
}

// Get and Set for age
int Opponents::get_opponentAge() const {
    return age;
}

void Opponents::set_opponentAge(int newAge) {
    age = newAge;
}

// Get and Set for location
std::string Opponents::get_location() const {
    return location;
}

void Opponents::set_location(std::string newLocation) {
    location = newLocation;
}