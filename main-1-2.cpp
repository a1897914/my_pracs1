#include <iostream>
#include "Person.h"
extern PersonList createPersonList(int n);

int main() {
    int n = 3;
    PersonList personList = createPersonList(n);

    std::cout << "Number of People: " << personList.numPeople << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ":\nName: " << personList.people[i].name << "\nAge: " << personList.people[i].age << std::endl;
    }

    delete[] personList.people;

    return 0;
}





