#ifndef OPPONENTS_H
#define OPPONENTS_H

#include <iostream>
#include <string>

class Opponents {
    private:
        std::string name;
        int age;
        std::string location;

    public:
        Opponents(); 
        Opponents(std::string name, int age, std::string location);

        std::string get_opponentName() const;
        void set_opponentName(std::string newName);

        int get_opponentAge() const;
        void set_opponentAge(int newAge);

        std::string get_location() const;
        void set_location(std::string newLocation);
};

#endif // OPPONENTS_H