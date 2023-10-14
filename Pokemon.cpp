// Pokemon.cpp
#include "Pokemon.h"

Pokemon::Pokemon() :
    initialBloodVolume(100),
    level(1),
    initialAttack(10),
    initialDefend(6),
    initialAgile(6),
    addBloodValue(0) {
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
      initialBloodVolume(initialBloodVolume),
      level(level),
      initialAttack(initialAttack),
      initialDefend(initialDefend),
      initialAgile(initialAgile),
      Skills(Skills),
      addBloodValue(addBloodValue) {
}

std::string Pokemon::get_name() const {
    return name;
}

void Pokemon::set_name(const std::string& newName) {
    name = newName;
}

int Pokemon::get_level() const {
    return level;
}

void Pokemon::set_level(int newLevel) {
    level = newLevel;
}

int Pokemon::get_initialAttack() const {
    return initialAttack;
}

void Pokemon::set_initialAttack(int newAttack) {
    initialAttack = newAttack;
}

int Pokemon::get_initialDefend() const {
    return initialDefend;
}

void Pokemon::set_initialDefend(int newDefend) {
    initialDefend = newDefend;
}

int Pokemon::get_initialAgile() const {
    return initialAgile;
}

void Pokemon::set_initialAgile(int newAgile) {
    initialAgile = newAgile;
}

const std::vector<std::string>& Pokemon::get_Skills() const {
    return Skills;
}

int Pokemon::get_initialPokemonBloodVolume() const {
    return initialBloodVolume;
}

int Pokemon::get_addPokemonBloodVolume(int value) {
    addBloodValue = value;
    return addBloodValue;
}

int Pokemon::get_totalPokemonBloodVolume() {
    totalBloodValue = initialBloodVolume + (level - 1) * addBloodValue;
    return totalBloodValue;
}

void Pokemon::set_totalPokemonBloodVolume(int newBloodVolume) {
    totalBloodValue = newBloodVolume;
}

Pokemon::~Pokemon() {
}