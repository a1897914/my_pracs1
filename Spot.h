#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
public:
    Spot(int x, int y, char type) : position(std::make_tuple(x, y)), type(type) {}
    virtual ~Spot() {}  
    std::tuple<int, int> location() { return position; }
    char category() { return type; }
    void setLoc(int x, int y) { position = std::make_tuple(x, y); }
    void setCategory(char type) { this->type = type; }

private:
    std::tuple<int, int> position;
    char type;
};

#endif