#include "Dice.h"

Dice::Dice() {}

Dice::Dice(const Pokemon* pokemon_) : pokemon(pokemon_), generator(std::random_device()()) {}


int Dice::rollAttackDice() const {
    std::uniform_int_distribution<int> distribution(1, pokemon->get_initialAttack());
    attackDice = distribution(generator);
    return attackDice;
}

int Dice::rollAgileDice() const {
    std::uniform_int_distribution<int> distribution(1, pokemon->get_initialAgile());
    agileDice = distribution(generator);
    return agileDice;
}

int Dice::rollDefendDice() const {
    std::uniform_int_distribution<int> distribution(1, pokemon->get_initialDefend());
    defendDice = distribution(generator);
    return defendDice;
}

int Dice::rollUpgradeDice() const {
    std::uniform_int_distribution<int> distribution(5, 10);
    upgradeDice = distribution(generator);
    return upgradeDice;
}