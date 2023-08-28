#include"warrior.h"
#include<iostream>

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage){
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent){
    opponent->takeDamage(damage);
    cout << name << " swung their " << weapon << " at " << opponent->name << " dealing " << damage << " damage. " << endl;
}

string Warrior::getWeapon(){
    return weapon;
}

void Warrior::setWeapon(string weapon){
    this->weapon = weapon;
}