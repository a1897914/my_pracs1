// Pokemon.h
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <vector>

class Pokemon {
private:
    std::string name;
    int initialBloodVolume;
    int level;
    int initialAttack;
    int initialDefend;
    int initialAgile;
    std::vector<std::string> Skills;
    int addBloodValue;
    int totalBloodValue;

public:
    Pokemon();
    Pokemon(std::string name,
            int initialBloodVolume,
            int level,
            int initialAttack,
            int initialDefend,
            int initialAgile,
            const std::vector<std::string>& Skills,
            int addBloodValue);

    std::string get_name() const;
    void set_name(const std::string& newName);

    int get_level() const;
    void set_level(int newLevel);

    int get_initialAttack() const;
    void set_initialAttack(int newAttack);

    int get_initialDefend() const;
    void set_initialDefend(int newDefend);

    int get_initialAgile() const;
    void set_initialAgile(int newAgile);

    const std::vector<std::string>& get_Skills() const;

    int get_initialPokemonBloodVolume() const;
    int get_addPokemonBloodVolume(int value);
    int get_totalPokemonBloodVolume();
    void set_totalPokemonBloodVolume(int newBloodVolume);

    ~Pokemon();

};

#endif // POKEMON_H