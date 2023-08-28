#ifndef WIZARD_H
#define WIZARD_H

#include"player.h"

class Wizard : public Player {
    public:
        int mana;

        Wizard(string name, int health, int damage, int mana);
        void castSpell(Player* opponent);
        int getMana();
        void setMana(int mana);
};

#endif