// Person.cpp
#include "Person.h"

Person::Person(const std::string& name, int age, const std::string& email) : name(name), age(age), email(email) {}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

std::string Person::getEmail() const {
    return email;
}

void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setEmail(const std::string& email) {
    this->email = email;
}
