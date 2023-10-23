#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>
#include <tuple>
#include <cmath>
#include <random>

GameEntity::GameEntity(int x, int y, char type) : position(std::make_tuple(x, y)), type(type) {}

std::tuple<int, int> GameEntity::getPos() const {
    return position;
}

char GameEntity::getType() const {
    return type;
}

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distributionX(0, gridWidth - 1);
    std::uniform_int_distribution<int> distributionY(0, gridHeight - 1);
    int x = distributionX(gen);
    int y = distributionY(gen);
    return std::make_tuple(x, y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx * dx + dy * dy);
}

int main() {
    int gridWidth = 10;
    int gridHeight = 10;

    std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    std::cout << "Random Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Random Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between the two positions: " << distance << std::endl;

    return 0;
}
