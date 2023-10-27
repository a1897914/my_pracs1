#ifndef ASSISTS_H
#define ASSISTS_H

#include "Spot.h"

#include <cstdlib>
#include <cmath>

class Assists {
public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        return std::make_tuple(rand() % matrixWidth, rand() % matrixHeight);
    }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
        int x1 = std::get<0>(loc1);
        int y1 = std::get<1>(loc1);
        int x2 = std::get<0>(loc2);
        int y2 = std::get<1>(loc2);
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};
#endif
