#include "Pokemon.h"
#include <cassert>

int main() {
    Pokemon pokemon;

    int testValue = 10; 
    int result = pokemon.get_addPokemonBloodVolume(testValue);

    assert(result == testValue); 

    return 0;
}
