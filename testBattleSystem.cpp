#include "Dice.h"
#include "Pokemon.h"
#include "BattleSystem.h"



int main() {
    Pokemon* pikachu = new Pokemon("Pikachu", 2, 1, 20, 10, 15, {"Thunderbolt", "Quick Attack"}, 10);
    Pokemon* fieryDragon = new Pokemon("FieryDragon", 2, 1, 15, 12, 10, {"Fire Breath", "Dragon Claw"}, 10);


    Dice dice(pikachu);
    Dice diceFieryDragon(fieryDragon);


    int damage = BattleSystem::performBattle(pikachu, fieryDragon, dice);

   

    std::cout << "damage: " << damage << std::endl;


    delete pikachu;
    delete fieryDragon;

    return 0;

}