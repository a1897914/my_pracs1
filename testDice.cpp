#include "Dice.h"
#include "Pokemon.h"

int main() {
    Pokemon* testPokemon = new Pokemon("TestPokemon", 2, 1, 20, 10, 15, {"TestAttack1", "TestAttack2"}, 10);

    Dice dice(testPokemon);

    int attackResult = dice.rollAttackDice();
    if (attackResult >= 1 && attackResult <= testPokemon->get_initialAttack()) {
        std::cout << "Roll attack dice test passed!" << std::endl;
    } else {
        std::cout << "Roll attack dice test failed!" << std::endl;
    }

    int agileResult = dice.rollAgileDice();
    if (agileResult >= 1 && agileResult <= testPokemon->get_initialAgile()) {
        std::cout << "Roll agile dice test passed!" << std::endl;
    } else {
        std::cout << "Roll attack dice test failed!" << std::endl;
    }

    int defendResult = dice.rollDefendDice();
    if (defendResult >= 1 && defendResult <= testPokemon->get_initialDefend()) {
        std::cout << "Roll defend dice test passed!" << std::endl;
    } else {
        std::cout << "Roll defend dice test failed!" << std::endl;
    }


    delete testPokemon;

    return 0;
}
