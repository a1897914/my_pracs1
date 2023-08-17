#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPersonList;
    newPersonList.numPeople = pl.numPeople;

    if (pl.numPeople <= 0) {
        newPersonList.people = nullptr;
    } else {
        newPersonList.people = new Person[pl.numPeople];
        for (int i = 0; i < pl.numPeople; i++) {
            newPersonList.people[i].name = pl.people[i].name;
            newPersonList.people[i].age = pl.people[i].age;
        }
    }

    return newPersonList;
}
