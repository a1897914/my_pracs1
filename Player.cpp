#include "Player.h"

Player::Player() { }

// Parameterised constructor 
Player::Player(std::string name, int age, std::string location) : name(name), age(age), location(location) {

}

// Get and Set for name
std::string Player::get_playerName() const {
    return name;
}

void Player::set_playerName(std::string newName) {
    name = newName;
}

// Get and Set for age
int Player::get_playerAge() const {
    return age;
}

void Player::set_playerAge(int newAge) {
    age = newAge;
}

// Get and Set for location
std::string Player::get_playerLocation() const {
    return location;
}

void Player::set_playerLocation(std::string newLocation) {
    location = newLocation;
}