#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <iostream>

int main() {
    // Create a Ship object
    Ship ship(10, 10);

    // Create a Mine object
    Mine mine(5, 5);

    // Move the ship
    std::cout << "Initial Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    ship.move(2, 3);
    std::cout << "New Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    // Explode the mine and get an Explosion object
    Explosion explosion = mine.explode();
    std::cout << "Mine Exploded. New Mine Type: " << mine.getType() << "\n";

    // Apply the explosion to the ship, changing its position and type
    std::cout << "Applying Explosion to Ship...\n";
    explosion.apply(ship);
    std::cout << "New Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "New Ship Type: " << ship.getType() << "\n";

    return 0;
}
