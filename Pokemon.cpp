// Pokemon.cpp

#include "Pokemon.h"

Pokemon::Pokemon() :
    initialBloodVolume(100), // Initialize the initial blood volume to 100.
    level(1), // Initialize the level to 1.
    initialAttack(10), // Initialize the initial attack to 10.
    initialDefend(6), // Initialize the initial defense to 6.
    initialAgile(6), // Initialize the initial agility to 6.
    addBloodValue(0) { // Initialize the additional blood value to 0.
}

Pokemon::Pokemon(std::string name,
                 int initialBloodVolume,
                 int level,
                 int initialAttack,
                 int initialDefend,
                 int initialAgile,
                 const std::vector<std::string>& Skills,
                 int addBloodValue)
    : name(name),
      initialBloodVolume(initialBloodVolume), // Initialize initial blood volume with the given value.
      level(level), // Initialize the level with the given value.
      initialAttack(initialAttack), // Initialize initial attack with the given value.
      initialDefend(initialDefend), // Initialize initial defense with the given value.
      initialAgile(initialAgile), // Initialize initial agility with the given value.
      Skills(Skills), // Initialize skills with the provided vector.
      addBloodValue(addBloodValue) { // Initialize additional blood value with the given value.
}

std::string Pokemon::get_name() const {
    return name; // Return the name of the Pokemon.
}

void Pokemon::set_name(const std::string& newName) {
    name = newName; // Set the name of the Pokemon to the provided name.
}

int Pokemon::get_level() const {
    return level; // Return the level of the Pokemon.

}

void Pokemon::set_level(int newLevel) {
    level = newLevel; // Set the level of the Pokemon.
}

int Pokemon::get_initialAttack() const {
    return initialAttack; // Return the initial attack of the Pokemon.
}

void Pokemon::set_initialAttack(int newAttack) {
    initialAttack = newAttack; // Set the initial attack of the Pokemon.
}

int Pokemon::get_initialDefend() const {
    return initialDefend; // Return the initial defend of the Pokemon.
}

void Pokemon::set_initialDefend(int newDefend) {
    initialDefend = newDefend; // Set the initial defend of the Pokemon.
}

int Pokemon::get_initialAgile() const {
    return initialAgile; // Return the initial agile of the Pokemon.
}

void Pokemon::set_initialAgile(int newAgile) {
    initialAgile = newAgile; // Set the initial agile of the Pokemon.
}

std::string Pokemon::get_Skills() const {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // Seed the random number generator with the current time.
    int numSkills = Skills.size();

    if (numSkills > 0) {
        int randomIndex = std::rand() % numSkills; // Generate a random index to select a skill.
        return Skills[randomIndex]; // Return the randomly selected skill.
    } else {
        return "No Skills"; // Return a default value if there are no skills.
    }
}


int Pokemon::get_initialPokemonBloodVolume() const {
    return initialBloodVolume; // Return the initial blood volume of the Pokemon.
}

int Pokemon::get_addPokemonBloodVolume(int value) {
    addBloodValue = value; // Set the additional blood value of the Pokemon to the provided value.
    return addBloodValue; // Return the updated additional blood value.
}


int Pokemon::get_totalPokemonBloodVolume() {
    totalBloodValue = initialBloodVolume + (level - 1) * addBloodValue;
    return totalBloodValue;
}

int Pokemon::set_totalPokemonBloodVolume(int newBloodVolume) {
    totalBloodValue = newBloodVolume; // Set the total blood volume of the Pokemon to the provided value.
    return totalBloodValue; // Return the updated total blood volume.
}


Pokemon::~Pokemon() {
    // Destructor for the Pokemon class.
}