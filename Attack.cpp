#include "Attack.h"

Attack::Attack(const Pokemon* pokemon) : pokemon(pokemon), upgradeDice(pokemon) {
    calculateTotalAttack();
}

int Attack::calculateTotalAttack() {
    int attackRoll = upgradeDice.rollUpgradeDice();
    totalAttackValue = pokemon->get_initialAttack() + attackRoll;
    return totalAttackValue;
}

//int Attack::get_totalAttack() const {
//    return totalAttackValue;
//}

void Attack::setInitialAttack() {
    const_cast<Pokemon&>(*pokemon).set_initialAttack(totalAttackValue);
}