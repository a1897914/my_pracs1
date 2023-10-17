#include "Pokemon.h"
#include <iostream>
#include <cassert>

void testInitialization() {
    Pokemon pokemon;
    
    assert(pokemon.get_name() == "");
    assert(pokemon.get_level() == 1);
    assert(pokemon.get_initialAttack() == 10);
    assert(pokemon.get_initialDefend() == 6);
    assert(pokemon.get_initialAgile() == 6);
    assert(pokemon.get_initialPokemonBloodVolume() == 100);
    assert(pokemon.get_addPokemonBloodVolume(0) == 0);
    assert(pokemon.get_totalPokemonBloodVolume() == 100);
    assert(pokemon.get_Skills() == "No Skills");
}

void testCustomInitialization() {
    std::string name = "TestPokemon";
    int initialBloodVolume = 120;
    int level = 3;
    int initialAttack = 15;
    int initialDefend = 8;
    int initialAgile = 8;
    std::vector<std::string> skills = {"Skill1", "Skill2"};
    int addBloodValue = 10;

    Pokemon pokemon(name, initialBloodVolume, level, initialAttack, initialDefend, initialAgile, skills, addBloodValue);

    assert(pokemon.get_name() == name);
    assert(pokemon.get_level() == level);
    assert(pokemon.get_initialAttack() == initialAttack);
    assert(pokemon.get_initialDefend() == initialDefend);
    assert(pokemon.get_initialAgile() == initialAgile);
    assert(pokemon.get_initialPokemonBloodVolume() == initialBloodVolume);
    assert(pokemon.get_addPokemonBloodVolume(0) == addBloodValue);
    assert(pokemon.get_totalPokemonBloodVolume() == initialBloodVolume + (level - 1) * addBloodValue);
}

int main() {
    testInitialization();
    testCustomInitialization();
    
    std::cout << "All tests passed!" << std::endl;
    
    return 0;
}
