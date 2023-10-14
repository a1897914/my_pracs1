#ifndef ATTACK_H
#define ATTACK_H

#include "Pokemon.h"
#include "Dice.h"
#include <iostream>
#include <string>

class Attack{
    private:
        const Pokemon* pokemon;
        Dice upgradeDice;
        int totalAttackValue;

    public:
        Attack(const Pokemon* pokemon);

        int calculateTotalAttack();
        // int get_totalAttack() const;
        void setInitialAttack();
};

#endif // ATTACK_H