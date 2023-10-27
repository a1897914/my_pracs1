#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include <iostream>

int main() {
    Spot Spot(0, 0, 'A');
    auto pos = Spot.location();
    std::cout << "Position: (" << std::get<0>(pos) << ", " << std::get<1>(pos) << "), Type: " << Spot.category() << std::endl;
    
    auto loc1 = Assists::createRandomLoc(10, 10);
    auto loc2 = Assists::createRandomLoc(10, 10);
    std::cout << "Distance between (" << std::get<0>(loc1) << ", " << std::get<1>(loc1) << ") and ("
              << std::get<0>(loc2) << ", " << std::get<1>(loc2) << "): "
              << Assists::evaluateDistance(loc1, loc2) << std::endl;

    return 0;
}
