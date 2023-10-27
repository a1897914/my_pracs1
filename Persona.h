#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

class Persona : public Spot {
public:
    Persona(int x, int y) : Spot(x, y, 'P') {}
    void shift(int dx, int dy) {
        auto [x, y] = getLoc();
        setLoc(x + dx, y + dy);
    }
};

#endif