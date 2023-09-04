#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House h1(2);
    
    Fridge* f1 = new Fridge(100, 200);
    h1.addAppliance(f1);
    
    TV* t1 = new TV(100, 40);
    h1.addAppliance(t1);
    
    std::cout << "h1 total power consumption: " << h1.getTotalPowerConsumption() << std::endl;
    
    return 0;
}
