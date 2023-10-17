#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H

#include <iostream>
#include <string>
#include <vector>
#include "Pokemon.h"
#include "Dice.h"


class BattleSystem {
    public: 
        
    public:
        static int performBattle(Pokemon* attacker, Pokemon* defender, Dice& dice) {

            int attackResult = dice.rollAttackDice();
            int defendResult = dice.rollDefendDice();

            int get_attackResult = attackResult;
            int get_defendResult = defendResult;

            std::cout << attacker->get_name() << "'s Attack: " << get_attackResult << '\n';
            std::cout << defender->get_name() << "'s Defend: " << get_defendResult << '\n';

            int damage = attackResult - defendResult;
            if (damage > 0) {
                // BattleSystem::takeDamage(defender, damage); 
                std::cout << attacker->get_name() << " use " << attacker->get_Skills() << " to attacks " << defender->get_name() << " for " << damage << " damage.\n";
                return damage;
            } else {
                std::cout << attacker->get_name() << " use " << attacker->get_Skills() << " attacks " << defender->get_name() << ", but it doesn't do any damage.\n";
                damage = 0;
                return damage;
           }
        }

        static int takeDamage(Pokemon* target, int damage, int currentHealth) {
            int newHealth = currentHealth - damage;
            if (newHealth <= 0) {
                newHealth = 0; 
                std::cout << target->get_name() << " have not HP left!" << '\n';
                return newHealth;
            } else {
                std::cout << target->get_name() << " takes " << damage << " damage. Remaining HP: " << newHealth << '\n';
                return newHealth;
            }
        
        }
};

#endif // BATTLESYSTEM_H