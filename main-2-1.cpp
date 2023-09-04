#include <iostream>
#include "Fridge.h"

int main() {
    Fridge f1(100, 200);
    std::cout << "f1 power consumption: " << f1.getPowerConsumption() << std::endl;
    
    f1.set_powerRating(150);
    std::cout << "f1 power consumption: " << f1.getPowerConsumption() << std::endl;
    
    f1.setVolume(300);
    std::cout << "f1 power consumption: " << f1.getPowerConsumption() << std::endl;
    
    return 0;
}