#include "BattleSystem.h"

int BattleSystem::JudgementOfBlood(int get_totalPokemonBloodVolume, int attackDice, int defendDice, int& currentBloodVolume) {
    int totalPokemonBloodVolume = currentBloodVolume - (attackDice - defendDice);

    if (totalPokemonBloodVolume < 0) {
        totalPokemonBloodVolume = 0;
    }

    return totalPokemonBloodVolume;
}

int BattleSystem::JudgementOfDamage() {
    // Implement your damage calculation logic here
}

bool BattleSystem::JudgementOfAgile() {
    // Implement your agility calculation logic here
    return false;
}

bool BattleSystem::JudgementOfResult(int totalPokemonBloodVolume) {
    return totalPokemonBloodVolume == 0;
}

bool BattleSystem::doRound(int attackDice, int defendDice, int& currentBloodVolume) {
    std::cout << "The current blood volume is: " << currentBloodVolume << std::endl;
    int health = JudgementOfBlood(currentBloodVolume, attackDice, defendDice, currentBloodVolume);
    return JudgementOfResult(currentBloodVolume);
}
