#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <string>
#include <random>
#include "Pokemon.h"

class Dice {
private:
    const Pokemon* pokemon;
    mutable int attackDice;
    mutable int agileDice;
    mutable int defendDice;
    mutable int upgradeDice;
    mutable std::default_random_engine generator;

public:
    Dice();
    Dice(const Pokemon* Pokemon_);

    int rollAttackDice() const;
    int rollAgileDice() const;
    int rollDefendDice() const;
    int rollUpgradeDice() const;
};

#endif // DICE_H