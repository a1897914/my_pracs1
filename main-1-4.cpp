#include <iostream>
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 3;
    PersonList personList;
    personList.numPeople = n;

    if (n <= 0) {
        personList.people = nullptr;
    } else {
        personList.people = new Person[n];
        for (int i = 0; i < n; i++) {
            personList.people[i].name = "John Doe";
            personList.people[i].age = 0;
        }
    }

    PersonList copiedPersonList = shallowCopyPersonList(personList);

    std::cout << "Original Person List:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ":\nName: " << personList.people[i].name << "\nAge: " << personList.people[i].age << std::endl;
    }

    std::cout << "Copied Person List:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ":\nName: " << copiedPersonList.people[i].name << "\nAge: " << copiedPersonList.people[i].age << std::endl;
    }

    
    delete[] personList.people;

    return 0;
}