#include "Opponents.h"
#include <cassert>

int main() {
    Opponents opponent("Bob", 30, "Chicago");

    assert(opponent.get_opponentName() == "Bob");
    assert(opponent.get_opponentAge() == 30);
    assert(opponent.get_location() == "Chicago");

    opponent.set_opponentName("Charlie");
    opponent.set_opponentAge(35);
    opponent.set_location("Houston");

    assert(opponent.get_opponentName() == "Charlie");
    assert(opponent.get_opponentAge() == 35);
    assert(opponent.get_location() == "Houston");

    std::cout << "Unit test passed!" << std::endl;

    return 0;
}
