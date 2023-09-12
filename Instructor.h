#pragma once
#include "Person.h"

class Instructor : public Person {
public:
    Instructor(const std::string& name, int age, const std::string& email, const std::string& employeeID)
        : Person(name, age, email), employeeID(employeeID) {}

    std::string getEmployeeID() const { return employeeID; }
    void setEmployeeID(const std::string& id) { employeeID = id; }

    void teach() { /* Method to teach a subject */ }
    void prepareLesson() { /* Method to prepare a lesson */ }
    void gradeStudent() { /* Method to grade a student */ }

private:
    std::string employeeID;
};
