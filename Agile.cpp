#include "Agile.h"

Agile::Agile(const Pokemon* pokemon) : pokemon(pokemon), upgradeDice(pokemon) {
    calculateTotalAgile();
}

int Agile::calculateTotalAgile() {
    int agileRoll = upgradeDice.rollUpgradeDice();
    totalAgileValue = pokemon->get_initialAgile() + agileRoll;
    return totalAgileValue;
}

// int Agile::get_totalAgile() const {
//    return totalAgileValue;
//}

void Agile::setInitialAgile() {
    const_cast<Pokemon&>(*pokemon).set_initialAgile(totalAgileValue);
}