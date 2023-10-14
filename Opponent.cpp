#include "Opponents.h"

Opponents::Opponents() { }

// Parameterised constructor 
Opponents::Opponents(std::string name, int age, std::string location, std::string relationship) : name(name), age(age), location(location), relationship(relationship) {

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

void Opponents::get_opponentAge(int newAge) {
    age = newAge;
}

// Get and Set for location
std::string Opponents::get_opponentLocation() const {
    return location;
}

void Opponents::set_opponentLocation(std::string newLocation) {
    location = newLocation;
}

std::string Opponents::get_relationship() const {
    return relationship;
}

void Opponents::set_relationship(std::string newRelationship) {
    relationship = newRelationship;
}