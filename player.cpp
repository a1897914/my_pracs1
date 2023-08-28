#include"player.h"
#include<iostream>

Player::Player(string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent){
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    health -= damage;
    cout << name << " took " << damage << " damage and has " << health << " health remaining. " << endl;

}

int Player::getHealth(){
    return health;
}

void Player::setHealth(int health){
    this->health = health;
}

int Player::getDamage(){
    return damage;
}

void Player::setDamage(int damage){
    this->damage = damage;
}

