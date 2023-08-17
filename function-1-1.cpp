#include "Person.h"

Person* createPersonArray(int n) {
    if (n <= 0) {
        return nullptr;
    }

    Person* people = new Person[n];

    for (int i = 0; i < n; i++) {
        people[i].name = "John Doe";
        people[i].age = 0;
    }

    return people;
}