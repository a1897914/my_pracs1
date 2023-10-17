#include "Dice.h"

Dice::Dice() {}

Dice::Dice(const Pokemon* pokemon_) : pokemon(pokemon_), generator(std::random_device()()) {}

int Dice::rollAttackDice() const {
    // Method to roll the attack dice and return the result.
    std::uniform_int_distribution<int> distribution(5, pokemon->get_initialAttack());
    attackDice = distribution(generator);
    return attackDice;
}

int Dice::rollAgileDice() const {
    // Method to roll the agile dice and return the result.
    std::uniform_int_distribution<int> distribution(5, pokemon->get_initialAgile());
    agileDice = distribution(generator);
    return agileDice;
}

int Dice::rollDefendDice() const {
    // Method to roll the defend dice and return the result.
    std::uniform_int_distribution<int> distribution(5, pokemon->get_initialDefend());
    defendDice = distribution(generator);
    return defendDice;
}

int Dice::rollUpgradeDice() const {
    // Method to roll the upgrade dice and return the result.
    std::uniform_int_distribution<int> distribution(5, 10);
    upgradeDice = distribution(generator);
    return upgradeDice;
}
