#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;

class Player {
    public:
        string name;
        int health;
        int damage;

        Player(string name, int health, int damage);
        string getName() {
        return name;
        }
        void attack(Player* opponent);
        void takeDamage(int damage);
        int getHealth();
        void setHealth(int health);
        int getDamage();
        void setDamage(int damage);

  
};


#endif