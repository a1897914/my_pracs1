#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos() const;
    char getType() const;
    virtual void apply(GameEntity& entity); // No longer pure virtual

private:
    std::tuple<int, int> position;
    char type;
};

#endif // GAMEENTITY_H
