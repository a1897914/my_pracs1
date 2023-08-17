#include "Person.h"

PersonList createPersonList(int n) {
    PersonList personlist;
    personlist.numPeople = n;

    if (n <= 0) {
        personlist.people = nullptr;
    } else {
        personlist.people = new Person[n];
        for (int i = 0; i < n; i++) {
            personlist.people[i].name = "Jane Doe";
            personlist.people[i].age = 1;
        }
    }

    return personlist;
}
