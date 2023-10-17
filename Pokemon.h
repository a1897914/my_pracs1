// Pokemon.h
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

class Pokemon {
private:
    std::string name; // The name of the Pokemon.
    int initialBloodVolume; // The initial blood volume of the Pokemon.
    int level; // The level of the Pokemon.
    int initialAttack; // The initial attack power of the Pokemon.
    int initialDefend; // The initial defense power of the Pokemon.
    int initialAgile; // The initial agility of the Pokemon.
    std::vector<std::string> Skills; // A vector storing the skills of the Pokemon.
    int addBloodValue; // Additional blood value for the Pokemon.
    int totalBloodValue; // The total blood volume of the Pokemon.

public:
    Pokemon(); // Default constructor for the Pokemon class.
    Pokemon(std::string name,
            int initialBloodVolume,
            int level,
            int initialAttack,
            int initialDefend,
            int initialAgile,
            const std::vector<std::string>& Skills,
            int addBloodValue); // Parameterized constructor for the Pokemon class.

    std::string get_name() const; // Method to get the name of the Pokemon.
    void set_name(const std::string& newName); // Method to set the name of the Pokemon.

    int get_level() const; // Method to get the level of the Pokemon.
    void set_level(int newLevel); // Method to set the level of the Pokemon.

    int get_initialAttack() const; // Method to get the initial attack of the Pokemon.
    void set_initialAttack(int newAttack); // Method to set the initial attack of the Pokemon.

    int get_initialDefend() const; // Method to get the initial defend of the Pokemon.
    void set_initialDefend(int newDefend); // Method to set the initial defend of the Pokemon.

    int get_initialAgile() const; // Method to get the initial agile of the Pokemon.
    void set_initialAgile(int newAgile); // Method to set the initial agile of the Pokemon

    std::string get_Skills() const; // Method to get a random skill from the Pokemon's skills.

    int get_initialPokemonBloodVolume() const; // Method to get the initial blood volume of the Pokemon.
    int get_addPokemonBloodVolume(int value); // Method to set additional blood value for the Pokemon.
    int get_totalPokemonBloodVolume(); // Method to calculate and get the total blood volume of the Pokemon.
    int set_totalPokemonBloodVolume(int newBloodVolume); // Method to set the total blood volume of the Pokemon.

    ~Pokemon(); // Destructor for the Pokemon class.

};

#endif // POKEMON_H
