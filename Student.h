#pragma once
#include "Person.h"

class Student : public Person {
public:
    Student(const std::string& name, int age, const std::string& email, const std::string& studentID);
    std::string getStudentID() const;
    void setStudentID(const std::string& studentID);
private:
    std::string studentID;
};
