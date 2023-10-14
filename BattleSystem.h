#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Dice.h"


class BattleSystem {
public:
    static void performBattle(Pokemon* attacker, Pokemon* defender, Dice& dice) {

        int agileResult = dice.rollAgileDice();
        int attackResult = dice.rollAttackDice();
        int defendResult = dice.rollDefendDice();

        int get_attackResult = attackResult;
        int get_defendResult = defendResult;

        std::cout << attacker->get_name() << "'s Attack: " << get_attackResult << '\n';
        std::cout << defender->get_name() << "'s Defend: " << get_defendResult << '\n';

        int damage = attackResult - defendResult;
        if (damage > 0) {
            BattleSystem::takeDamage(defender, damage); // 使用takeDamage方法
            std::cout << attacker->get_name() << " attacks " << defender->get_name() << " for " << damage << " damage.\n";
        } else {
            std::cout << attacker->get_name() << " attacks " << defender->get_name() << ", but it doesn't do any damage.\n";
        }

        
    }

    static void takeDamage(Pokemon* target, int damage) {
    int currentHealth = target->get_totalPokemonBloodVolume();
    int newHealth = currentHealth - damage;

    if (newHealth < 0) {
        newHealth = 0; 
    }

    target->set_totalPokemonBloodVolume(newHealth);

    std::cout << target->get_name() << " takes " << damage << " damage. Remaining HP: " << newHealth << '\n';

    if (newHealth <= 0) {
        std::cout << target->get_name() << " has fainted!\n";
    }
}




};



#endif
