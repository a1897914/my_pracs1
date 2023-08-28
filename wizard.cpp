#include"wizard.h"
#include<iostream>

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage){
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent){
    opponent->takeDamage(mana);
    cout << name << " cast a spell on " << opponent->name << " dealing " << mana << " damage. " << endl;
}

int Wizard::getMana(){
    return mana;
}

void Wizard::setMana(int mana){
    this->mana = mana;
}