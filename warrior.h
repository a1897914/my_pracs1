#ifndef WARRIOR_H
#define WARRIOR_H

#include"player.h"

class Warrior : public Player {
    public:
        string weapon;

        Warrior(string name, int health, int damage, string weapon);
        void swingWeapon(Player* opponent);
        string getWeapon();
        void setWeapon(string weapon);
};

#endif