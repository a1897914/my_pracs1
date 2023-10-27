#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"


class Snare : public Spot {
public:
    Snare(int x, int y) : Spot(x, y, 'C') {}
    void move(int dx, int dy) {
        std::tuple<int, int> loc = location();
        int x = std::get<0>(loc);
        int y = std::get<1>(loc);
        setLoc(x + dx, y + dy);
    }
};

#endif