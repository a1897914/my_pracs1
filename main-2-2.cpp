#include <iostream>
#include "TV.h"

int main() {
    TV t1(100, 40);
    std::cout << "t1 power consumption: " << t1.getPowerConsumption() << std::endl;
    
    t1.set_powerRating(150);
    std::cout << "t1 power consumption: " << t1.getPowerConsumption() << std::endl;
    
    t1.setScreenSize(50);
    std::cout << "t1 power consumption: " << t1.getPowerConsumption() << std::endl;
    
    return 0;
}
