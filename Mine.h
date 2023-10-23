#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    Mine(int x, int y);
    Explosion explode();
    void apply(GameEntity& entity) override;
};

#endif // MINE_H
