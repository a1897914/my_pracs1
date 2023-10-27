#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
public:
    Spot(int x, int y, char category) : location(std::make_tuple(x, y)), category(category) {}
    virtual ~Spot() {} 
    std::tuple<int, int> getLoc() { return location; }
    char getCategory() { return category; }
    void setLoc(int x, int y) { location = std::make_tuple(x, y); }
    void setCategory(char category) { this->category = category; }

private:
    std::tuple<int, int> location;
    char category;
};

#endif