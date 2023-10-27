#include "Snare.h"
#include "Persona.h"
#include <iostream>

int main() {
    Snare snare(0, 0);
    std::cout << "Snare is operative: " << snare.isOperative() << std::endl;
    
    Persona persona(1, 1);
    
    snare.implement(persona);
    std::cout << "Snare is operative: " << snare.isOperative() << std::endl;

    return 0;
}