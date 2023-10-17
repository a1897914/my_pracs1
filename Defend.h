#ifndef DEFEND_H
#define DEFEND_H

#include "Pokemon.h"
#include "Dice.h"
#include <iostream>
#include <string>

class Defend {
    private:
        const Pokemon* pokemon;
        Dice upgradeDice;
        int totalDefendValue;

    public:
        Defend(const Pokemon* pokemon);

        int calculateTotalDefend();
        void setInitialDefend();
};

#endif // DEFEND_H