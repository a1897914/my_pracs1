#include "Player.h"
#include <cassert>

int main() {
    Player player("John", 25, "New York");

    assert(player.get_playerName() == "John");
    assert(player.get_playerAge() == 25);
    assert(player.get_playerLocation() == "New York");

    player.set_playerName("Alice");
    player.set_playerAge(30);
    player.set_playerLocation("Los Angeles");

    assert(player.get_playerName() == "Alice");
    assert(player.get_playerAge() == 30);
    assert(player.get_playerLocation() == "Los Angeles");

    std::cout << "Unit test passed!" << std::endl;

    return 0;
}
