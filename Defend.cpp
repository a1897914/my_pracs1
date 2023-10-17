#include "Defend.h"

Defend::Defend(const Pokemon* pokemon) : pokemon(pokemon), upgradeDice(pokemon) {}

int Defend::calculateTotalDefend() {
    int defendRoll = upgradeDice.rollUpgradeDice();
    totalDefendValue = pokemon->get_initialDefend() + defendRoll;
    return totalDefendValue;
}

void Defend::setInitialDefend() {
    const_cast<Pokemon&>(*pokemon).set_initialDefend(totalDefendValue);
}