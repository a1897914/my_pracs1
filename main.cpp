#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For seeding the random number generator
#include "Player.h"
#include "Opponents.h"
#include "Pokemon.h"
#include "Dice.h"
#include "BattleSystem.h"
#include "VictorySystem.h"
#include "Agile.h"
#include "Attack.h"
#include "Defend.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for the random number generator

    // Player setup
    std::string playerName, playerLocation;
    int playerAge;
    
    std::cout << "Enter your Player name: ";
    std::cin >> playerName;

    while (true) {
        std::cout << "Enter your Player age: ";

        if (!(std::cin >> playerAge)) {
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear();  // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    std::cout << "Enter your Player location: ";
    std::cin >> playerLocation;

    Player player(playerName, playerAge, playerLocation);

    // Player chooses a Pokemon
    // Assuming predefined Pokemon names: "Bulbasaur", "Charmander", "Squirtle"
    std::cout << "Please choose your Pokemon character (1: Pikachu, 2: Charmander, 3: Squirtle, 4: Bulbasaur): ";
    int playerChoice;
    std::cin >> playerChoice;

    Pokemon* playerPokemon;
    switch (playerChoice) {
        case 1:
            playerPokemon = new Pokemon("Pikachu", 30, 1, 10, 12, 5, {"Thunderbolt", "Quick Attack", "Volt Switch"}, 10);
            break;
        case 2:
            playerPokemon = new Pokemon("Charmander", 30, 1, 10, 6, 12, {"Ember", "Scratch", "Flamethrower"}, 10);
            break;
        case 3:
            playerPokemon = new Pokemon("Squirtle", 28, 1, 8, 8, 10, {"Water Gun", "Hydro Pump", "Water Pulse"}, 10);
            break;
        case 4:
            playerPokemon = new Pokemon("Bulbasaur", 35, 1, 7, 8, 7, {"Vine Whip", "Razor Leaf", "Solar Beam"}, 10);
            break;
        default:
            std::cout << "Please Enter 1, 2, 3, 4!" << std::endl;
            return 0;
    }

    // Computer assigns an opponent
    Opponents opponent("Computer Opponent", 25, "Unknown Location");

    int score = 0;

    while (score < 3) {
        // Create opponent's Pokemon (randomly chosen)
        std::vector<std::string> opponentPokemonNames = {"Pikachu", "Jigglypuff", "Meowth", "Rattata", "Sandshrew", "Clefairy", "Venonat", "Mankey"};
        std::string opponentChosenPokemon = opponentPokemonNames[rand() % opponentPokemonNames.size()];
        Pokemon* opponentPokemon = new Pokemon(opponentChosenPokemon, 20, 1, 6, 6, 6, {"Quick Attack", "Strike", "Swift"}, 10);

        int level = playerPokemon->get_level();
        opponentPokemon->set_level(level);

        if (level > 1){
        Agile opponentPokemonAgile(opponentPokemon);
        opponentPokemonAgile.calculateTotalAgile();
        opponentPokemonAgile.setInitialAgile();

        Attack opponentPokemonAttack(opponentPokemon);
        opponentPokemonAttack.calculateTotalAttack();
        opponentPokemonAttack.setInitialAttack();

        Defend opponentPokemonDefend(opponentPokemon);
        opponentPokemonDefend.calculateTotalDefend();
        opponentPokemonDefend.setInitialDefend();
        } 

        // Battle setup
        Dice dicePlayer(playerPokemon);
        Dice diceOpponent(opponentPokemon);

        std::string playerInput;
        VictorySystem victory;

        int num = 0;

        std::cout << "Battle Start!" << "\n";
        std::cout << "Your opponent is " << opponent.get_opponentName() << ", and he is from " << player.get_playerLocation();
        std::cout << ", his pokemon is " << opponentPokemon->get_name() << "\n";

        int damage;
        int currentPlayerHealth = playerPokemon->get_totalPokemonBloodVolume();
        int currentOpponentHealth = opponentPokemon->get_totalPokemonBloodVolume();

        while (num == 0) {
            std::cout << "Please enter 'roll' to roll the agile dice of your " << playerPokemon->get_name() << "\n";
            std::cin >> playerInput;
            if (playerInput == "roll") {
                std::cout << "\n";
                int agilePlayerValue = dicePlayer.rollAgileDice();
                std::cout << "You rolled an agile dice and got: " << agilePlayerValue << "\n";
                int agileOpponentValue = diceOpponent.rollAgileDice();
                std::cout << opponent.get_opponentName() << " rolled an agile dice for his pokemon " << opponentPokemon->get_name() << " and got: " << agileOpponentValue << "\n";
                if (agilePlayerValue >= agileOpponentValue) {
                    std::cout << "Because your pokemon agile is higher than opponent's pokemon, your pokemon has launched its attack" << "\n";
                    damage = BattleSystem::performBattle(playerPokemon, opponentPokemon, dicePlayer);
                    currentOpponentHealth =  BattleSystem::takeDamage(opponentPokemon, damage, currentOpponentHealth);
                    num = victory.checkWinner(currentPlayerHealth, currentOpponentHealth);
                    std::cout << "\n";
                    if (num == 0) {
                        std::cout << "Now is " << opponent.get_opponentName() << " turn!" << "\n";
                        damage = BattleSystem::performBattle(opponentPokemon, playerPokemon, diceOpponent);
                        currentPlayerHealth = BattleSystem::takeDamage(playerPokemon, damage, currentPlayerHealth);
                        num = victory.checkWinner(currentPlayerHealth, currentOpponentHealth);
                    } else {
                        break;
                    }
                } else {
                    std::cout << "Because opponent's pokemon agile is higher than your pokemon, opponent's pokemon has launched its attack" << "\n";
                    damage = BattleSystem::performBattle(opponentPokemon, playerPokemon, diceOpponent);
                    currentPlayerHealth = BattleSystem::takeDamage(playerPokemon, damage, currentPlayerHealth);
                    num = victory.checkWinner(currentPlayerHealth, currentOpponentHealth);
                    std::cout << "\n";
                    if (num == 0) {
                        std::cout << "Now is your turn!" << "\n";
                        damage = BattleSystem::performBattle(playerPokemon, opponentPokemon, dicePlayer);
                        currentOpponentHealth = BattleSystem::takeDamage(opponentPokemon, damage, currentOpponentHealth);
                        num = victory.checkWinner(currentPlayerHealth, currentOpponentHealth);
                    } else {
                        break;
                    }
                }
            } else {
                std::cout << "Invaild input. Please enter 'roll'. \n";
            }
            std::cout << "\n";
        }

        // Handle the result
        if (num == 2) {
            std::cout << "Congratulations! You won the battle.\n";
            playerPokemon->set_level(playerPokemon->get_level() + 1);
            // std::cout << "Your Pokemon Level: " << playerPokemon->get_level() << '\n';

            Agile playerPokemonAgile(playerPokemon);
            playerPokemonAgile.calculateTotalAgile();
            playerPokemonAgile.setInitialAgile();

            Attack playerPokemonAttack(playerPokemon);
            playerPokemonAttack.calculateTotalAttack();
            playerPokemonAttack.setInitialAttack();

            Defend playerPokemonDefend(playerPokemon);
            playerPokemonDefend.calculateTotalDefend();
            playerPokemonDefend.setInitialDefend();

            std::cout << "Battle Results:\n";
            std::cout << "Your Pokemon Level: " << playerPokemon->get_level() << '\n';

            std::cout << "Your Pokemon Upgraded, so the Blood Volume is: " << playerPokemon->get_totalPokemonBloodVolume() << ", the Attack value is: " << playerPokemon->get_initialAttack();
            std::cout << " , the Agile is: " << playerPokemon->get_initialAgile() << " , the Defend is: " << playerPokemon->get_initialDefend() << "\n";
            std::cout << "\n";
            score += 1;
            if (score < 3) {
                int choiceFromPlayer = 0;

                while (choiceFromPlayer == 0) {
                    std::cout << "Do you want to start next Battle with the pokemon level same with your pokemon? (1: Yes, 2: No) ";
                    
                    if (!(std::cin >> choiceFromPlayer)) {
                        std::cout << "Invalid input! Please enter a number. \n";
                        std::cout << "\n";
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    } else {
                        std::cout << "\n";
                        if (choiceFromPlayer == 1) {
                            continue;
                        } else if (choiceFromPlayer == 2) {
                            score = 4;
                        } else {
                            std::cout << "Please Enter Yes(1) or No(2)!\n";
                            choiceFromPlayer = 0;
                        }
                    }

                }
            }
        } else if (num == 1) {
            std::cout << "Oops! You lost the battle.\n";

            std::cout << "Battle Results:\n";
            std::cout << "Your Pokemon Level: " << playerPokemon->get_level() << '\n';
            std::cout << "Please start Battle again! \n";

            int choiceFromPlayer = 0;

            while (choiceFromPlayer == 0) {
                std::cout << "Do you want to start the Battle with the pokemon level same with your pokemon again? (1: Yes, 2: No) ";

                if (!(std::cin >> choiceFromPlayer)) {
                    std::cout << "Invalid input! Please enter a number. \n";
                    std::cout << "\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    std::cout << "\n";
                    if (choiceFromPlayer == 1) {
                        continue;
                    } else if (choiceFromPlayer == 2) {
                        score = 4;
                    } else {
                        std::cout << "Please Enter Yes(1) or No(2)!\n";
                        choiceFromPlayer = 0;
                    }
                }
            }
        } else {
            std::cout << "It's a draw! No one wins.\n";
        }

        delete opponentPokemon;
    }

    if (score == 3) {
        std::cout << "Let's welcome our Champion '" << player.get_playerName() << "' ! \n";
        std::cout << "You defeated all your enemies! You became the Champion of '" << player.get_playerLocation() << "' ! \n";
    } else if (score == 4) {
        std::cout << "You quit the rivalry and gave up on being the champion of your region. \n";
    } else {
        std::cout << "There maybe something wrong! \n";
    }


    delete playerPokemon;
    
    return 0;
}