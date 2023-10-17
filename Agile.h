#ifndef AGILE_H
#define AGILE_H

#include "Pokemon.h"
#include "Dice.h"
#include <iostream>
#include <string>

class Agile {
    private:
        const Pokemon* pokemon;
        Dice upgradeDice;
        int totalAgileValue;

    public:
        Agile(const Pokemon* pokemon);

        int calculateTotalAgile();
        void setInitialAgile();
};

#endif // AGILE_H