#pragma once
#include <string>

class Person {
public:
    Person(const std::string& name, int age, const std::string& email);
    std::string getName() const;
    int getAge() const;
    std::string getEmail() const;
    void setName(const std::string& name);
    void setAge(int age);
    void setEmail(const std::string& email);
private:
    std::string name;
    int age;
    std::string email;
};
