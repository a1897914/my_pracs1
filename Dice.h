#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "Pokemon.h"

class Dice {
private:
    const Pokemon* pokemon; // Pointer to a Pokemon object associated with this Dice.
    mutable int attackDice; // A mutable variable to store the result of rolling the attack dice.
    mutable int agileDice;  // A mutable variable to store the result of rolling the agile dice.
    mutable int defendDice; // A mutable variable to store the result of rolling the defend dice.
    mutable int upgradeDice; // A mutable variable to store the result of rolling the upgrade dice.
    mutable std::default_random_engine generator; // A random number generator for dice rolls.

public:
    Dice(); // Constructor for Dice class.
    Dice(const Pokemon* Pokemon_); // Constructor for Dice class with a Pokemon object as a parameter.

    int rollAttackDice() const; // Method to roll the attack dice and return the result.
    int rollAgileDice() const;  // Method to roll the agile dice and return the result.
    int rollDefendDice() const; // Method to roll the defend dice and return the result.
    int rollUpgradeDice() const; // Method to roll the upgrade dice and return the result.
};

#endif // DICE_H
