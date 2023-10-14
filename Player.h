#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
    private:
        std::string name;
        int age;
        std::string location;

    public:
        Player();
        Player(std::string name, int age, std::string location);

        std::string get_playerName() const;
        void set_playerName(std::string newName);
        
        int get_playerAge() const;
        void set_playerAge(int newAge);

        std::string get_playerLocation() const;
        void set_playerLocation(std::string newLocation);

};

#endif // PLAYER_H