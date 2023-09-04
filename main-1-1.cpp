#include <iostream>
#include "Appliance.h"

int main() {
    Appliance a1;
    std::cout << "a1 power rating: " << a1.get_powerRating() << std::endl;
    
    a1.set_powerRating(100);
    std::cout << "a1 power rating: " << a1.get_powerRating() << std::endl;
    
    a1.turnOn();
    std::cout << "a1 is on: " << a1.get_isOn() << std::endl;
    
    a1.turnOff();
    std::cout << "a1 is on: " << a1.get_isOn() << std::endl;
    
    return 0;
}
